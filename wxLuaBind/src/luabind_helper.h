#ifndef WXLUABIND_LUABIND_HELPER_H_
#define WXLUABIND_LUABIND_HELPER_H_

#define NEW_LUA_TABLE(name) \
    lua_newtable(L); \
    lua_setglobal(L, #name);

#define BEGIN_BIND_MODULE(name) \
    module(L, #name) [
#define END_BIND_MODULE(...) \
    scope() ];

#define BEGIN_LUA_TABLE(class) { object g = globals(L); object table = g[#class];
#define BIND_CLASS_STATIC(class, name) table[#name] = class::name;
#define BIND_TABLE_VALUE(name, value) table[#name] = value;
#define BIND_VARIABLE(var) BIND_TABLE_VALUE(var, var)
#define BIND_VARIABLE_NAME(name, var) BIND_TABLE_VALUE(name, var)
#define BIND_MACRO(macro) table[#macro] = macro;
#define BIND_MACRO_NAME(name, macro) table[#name] = macro;
#define BIND_ENUM(ev) table[#ev] = (long)ev;
#define BIND_ENUM_NAME(name, ev) table[#name] = (long)ev;
#define END_LUA_TABLE(...) }

#define BEGIN_BIND_CLASS(class,  ...) \
    class_<class, bases<__VA_ARGS__> >(#class)
#define BEGIN_BIND_CLASS_NAME(name, class,  ...) \
    class_<class, bases<__VA_ARGS__> >(#name)
#define END_BIND_CLASS(...) \
    ,
#define BEGIN_BIND_CLASS_OBJECT(class) \
    BEGIN_BIND_CLASS(class, wxObject)
#define BEGIN_BIND_CLASS_GDIOBJECT(class) \
    BEGIN_BIND_CLASS(class, wxGDIObject)
#define BEGIN_BIND_CLASS_WIN(class) \
    BEGIN_BIND_CLASS(class, wxWindow)
#define BEGIN_BIND_CLASS_EVENT(class) \
    BEGIN_BIND_CLASS(class, wxEvent)
#define BEGIN_BIND_CLASS_CONTROL(class) \
    BEGIN_BIND_CLASS(class, wxControl)

#define BIND_CTOR(...) \
    .def(constructor<__VA_ARGS__>())

#define BIND_FUNC(F) \
    def(#F, &F),

#define BIND_FUNC_OVERLOAD(F, R, args) \
    def(#F, (R(*)args)&F),

#define BIND_FUNC_NAME(name, F) \
    def(#name, &F),

#define BIND_SMF(class, F) \
    def(#F, &class::F),

#define BIND_SMF_NAME(name, class, F) \
    def(#name, &class::F),

#define BIND_MF(class, F) \
    .def(#F, &class::F)

#define BIND_MF_NAME(name, class, F) \
    .def(#name, &class::F)

#define BIND_MD(class, D) \
    .def_readwrite(#D, &class::D)
#define BIND_MD_RO(class, D) \
    .def_readonly(#D, &class::D)

#define BIND_MD_NAME(name, class, D) \
    .def_readwrite(#name, &class::D)
#define BIND_MD_RO_NAME(name, class, D) \
    .def_readonly(#name, &class::D)

#define BIND_CLASS_PRINT() \
    .def(tostring(self))

#define BIND_OP(op, arg1) \
    .def(self op other<arg1>())

#define BIND_OP_C(op, arg1) \
    .def(const_self op other<arg1>())

#define BEGIN_BIND_SCOPE() \
    .scope [
#define END_BIND_SCOPE() \
    scope() ]

#define BEGIN_CLASS_ENUM(tag) \
    .enum_(#tag) [
#define BIND_CLASS_ENUM(class, ev) \
    value(#ev, class::ev),
#define END_CLASS_ENUM(tag) \
    value(0, 0) ]

#define BIND_MF_OVERLOAD(class, F, R, args) \
    .def(#F, (R(class::*)args)&class::F)

#define BIND_MF_OVERLOAD_NAME(name, class, F, R, args) \
    .def(#name, (R(class::*)args)&class::F)

#define BIND_SMF_OVERLOAD(class, F, R, args) \
    def(#F, (R(*)args)&class::F),

// non-member function bind to member function
// supporting overloaded functions
#define BIND_F2MF_OVERLOAD(F, N, R, args) \
    .def(#F, (R(*)args)&F##N)

// non-member function bind to static member function
// supporting overloaded functions due to default arguments
#define BIND_F2SMF_OVERLOAD(F, N, R, args) \
    def(#F, (R(*)args)&F##N),

#endif  // WXLUABIND_LUABIND_HELPER_H_
