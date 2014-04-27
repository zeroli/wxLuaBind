#include <precompile.h>

#include <iostream>

#include "config.h"

#include <boost/smart_ptr.hpp>

#include "luabind_helper.h"

enum {
    E1 = 2,
    E2,
    E3,
};

class testclass
{
public:
    testclass(const std::string& s = "this is one default value"): m_string(s) { }
    ~testclass() { std::cout << "In testclass's dtor\n"; }
    void print_string() { std::cout << m_string << "\n"; }

private:
    std::string m_string;
};

class A
{
public:
    enum {
        enum1 = 3,
        enum2 = 4,
        enum3 = 6,
    };

public:
    A(int ia = 230) : a(ia) { }
    virtual ~A() { std::cout << "in A::dtor\n"; }
    int a;
    int b;
    void seta(int x) { a = x; }
    int geta() { return a; }

    A& operator +(int x) { a += x; return *this; }
    A& operator +(const std::string& x) { std::cout << x << "\n"; return *this; }
    A& operator ()(int /*x*/) { std::cout << "a = " << a << "\n"; return *this; }

    bool operator==(const A& /*a*/) const { return true; }

    friend
    std::ostream& operator <<(std::ostream& out, const A& aa) {
            out << "a = " << aa.a << "\n";
            return out;
    }
public:
    virtual void f(int a) { std::cout << "in A:f(int) : " << a << "\n"; }
    void f(int a, int b) { std::cout << a << ", " << b << "\n"; }

    static void sf(int a, int b = 10) {
        std::cout << "a = " << a << ", b = " << b << "\n";
    }
};

class B : public A {
public:
    ~B() { std::cout << "in B::dtor\n"; }
    virtual void f(int a) { std::cout << "in B::f(int) : " << a << "\n"; }

    static int m_sa;
    static void print() { std::cout << "In B's static func\n"; }

    struct Nested {
    public:
        Nested() { std::cout << "In B::Nested ctor\n"; }
    };
};

class C : public B
{
public:
    virtual void f(int a) { std::cout << "in C::f(int) : " << a << "\n"; }
};

int B::m_sa = 200;

int plus(A* o, int v) { return o->a + v; }

void greet()
{
    std::cout << "hello world - my luabind try\n";
}

void greet(const char* s)
{
    std::cout << "customized greet: " << s << "\n";
}

namespace
{
    void A_sf2(int a, int b)
    {
        A::sf(a, b);
    }
    void A_sf1(int a)
    {
        A::sf(a);
    }

    void freefunc(int a, int b = 230)
    {
        std::cout << "a = " << a << ", b = " << b << "\n";
    }
}

EXTERN_C
int WXLUABIND_API init(lua_State* L)
{
    using namespace luabind;

    open(L);

        module(L)
        [
            scope(def("greet", (void(*)())&greet)),
            //enum_("constants")
            //[
            //    value("E1", E1),
            //    value("E2", E2),
            //    value("E3", E3)
            //],

            // bind: overloaded free functions
            //def("greet", (void(*)())&greet),
            def("greet", (void(*)(const char*))&greet),

            // cannot work correctly
            def("freefunc", (void(*)(int))&freefunc),
            def("freefunc", (void(*)(int,int))&freefunc),

            // bind: class and its member functions
            class_<testclass>("testclass")
            .def(constructor<>())   // default argument ctor
            .def(constructor<const std::string&>())
            .def("print_string", &testclass::print_string),

            // bind: class and its data members,
            // overloaded member functions, enums,
            // operators
            class_<A>("A")
            //.def(constructor<>())
            .def(constructor<int>())
            //            .def_readwrite("a", &A::a)
            .def("plus", &plus)
            .def("f", (void (A::*)(int))&A::f)
            .def("f", (void (A::*)(int, int))&A::f)
            .property("data", &A::geta, &A::seta)
            .enum_("constants")
            [
                value("enum1", (int)A::enum1),
                value("enum2", (int)A::enum2),
                value("enum3", (int)A::enum3)
            ]
            .def(self == other<const A&>())
            .def(self + other<int>())
            .def(self + other<const std::string&>())
            .def(self(int()))
            .def(tostring(self))
            .scope
            [
                def("sf", (void(*)(int))&::A_sf1),
                def("sf", (void(*)(int, int))&::A_sf2)
            ]
            ,
    // bind: derived class and virtual functions
        class_<B, A>("B")
            .def(constructor<>()) // need always add ctor
//            .def("f", (void (B::*)(int))&B::f)
            .scope
            [
                def("print", &B::print)
               // def("sa", (int*)&B::m_sa) // cannot compile
            ]
            ,
        class_<C, bases<> >("C")
            .def(constructor<>())
    ];

    // register static member data
    BEGIN_LUA_TABLE(B)
        BIND_CLASS_STATIC(B, m_sa)
        //        LUA_STATIC_ENTRY(B, print) // cannot use this solution to register static function
    END_LUA_TABLE(B)
    return 0;
}
