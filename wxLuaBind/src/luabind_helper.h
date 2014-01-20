#ifndef WXLUABIND_LUABIND_HELPER_H_
#define WXLUABIND_LUABIND_HELPER_H_

#define BEGIN_LUA_TABLE(class) { object g = globals(L); object table = g[#class];
#define BIND_CLASS_STATIC(class, name) table[#name] = class::name;
#define BIND_TABLE_VALUE(name, value) table[#name] = value;
#define BIND_VARIABLE(var) BIND_TABLE_VALUE(var, var)
#define BIND_MACRO(macro) table[#macro] = macro;
#define BIND_ENUM(ev) table[#ev] = (long)ev;
#define END_LUA_TABLE(...) }

#define BEGIN_BIND_CLASS(class, name) \
    class_<class>(#name)
#define BEGIN_BIND_CLASS_DERIVE(class, name, ...) \
    class_<class, bases<__VA_ARGS__> >(#name)
#define END_BIND_CLASS(...) \
    ,
#define BEGIN_BIND_CLASS_WX(class, name) \
    BEGIN_BIND_CLASS_DERIVE(class, name, wxObject)

#define BIND_CTOR(...) \
    .def(constructor<__VA_ARGS__>())

#define BIND_FUNC(F) \
    def(#F, &F)

#define BIND_FUNC_WITH_NAME(name, F) \
    def(#name, &F)

#define BIND_STATIC_FUNC(class, F) \
    def(#F, &class::F)

#define BIND_STATIC_FUNC_WITH_NAME(name, class, F) \
    def(#name, &class::F)

#define BIND_MEMBER_FUNC(class, F) \
    .def(#F, &class::F)

#define BIND_MEMBER_FUNC_WITH_NAME(name, class, F) \
    .def(#name, &class::F)

#define BIND_MEMBER_DATA(class, D) \
    .def_readwrite(#D, &class::D)
#define BIND_MEMBER_DATA_RO(class, D) \
    .def_readonly(#D, &class::D)

#define BIND_MEMBER_DATA_WITH_NAME(name, class, D) \
    .def_readwrite(#name, &class::D)
#define BIND_MEMBER_DATA_RO_WITH_NAME(name, class, D) \
    .def_readonly(#name, &class::D)

#define BIND_CLASS_PRINT() \
    .def(tostring(self))

#define BIND_OPERATOR(op, arg1) \
    .def(self op other<arg1>())

#define BIND_OPERATOR_C(op, arg1) \
    .def(const_self op other<arg1>())

#define BEGIN_BIND_SCOPE() \
    .scope [
#define END_BIND_SCOPE() \
    ]

#define BEGIN_CLASS_ENUM(tag) \
    .enum_(#tag) [
#define END_CLASS_ENUM(tag) \
    ]

#define BIND_MEMBER_OVERLOAD(class, F, R, args) \
    .def(#F, (R(class::*)args)&class::F)

#endif  // WXLUABIND_LUABIND_HELPER_H_
