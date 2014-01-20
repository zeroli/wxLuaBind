#ifndef WXLUABIND_LUABIND_HELPER_H_
#define WXLUABIND_LUABIND_HELPER_H_

#define BEGIN_LUA_TABLE(class) { object g = globals(L); object table = g[#class];
#define BIND_CLASS_STATIC(class, name) table[#name] = class::name;
#define BIND_TABLE_VALUE(name, value) table[#name] = value;
#define BIND_VARIABLE(var) BIND_TABLE_VALUE(var, var)
#define BIND_MACRO(macro) table[#macro] = macro;
#define BIND_ENUM(ev) table[#ev] = (long)ev;
#define END_LUA_TABLE(class) }

#define BIND_CLASS(class, name) \
    class_<class>(#name)
#define BIND_CLASS_1(class, base, name) \
    class_<class, base>(#name)
#define BIND_CLASS_2(class, base1, base2, name) \
    class_<class, base_<base1, base2> >(#name)

#define BIND_CTOR_0() \
    .def(constructor<>())
#define BIND_CTOR_1(arg1) \
    .def(constructor<arg1>())
#define BIND_CTOR_2(arg1, arg2) \
    .def(constructor<arg1, arg2>())
#define BIND_CTOR_3(arg1, arg2, arg3) \
    .def(constructor<arg1, arg2, arg3>())
#define BIND_CTOR_4(arg1, arg2, arg3, arg4) \
    .def(constructor<arg1, arg2, arg3, arg4>())
#define BIND_CTOR_5(arg1, arg2, arg3, arg4, arg5) \
    .def(constructor<arg1, arg2, arg3, arg4, arg5>())
#define BIND_CTOR_6(arg1, arg2, arg3, arg4, arg5, arg6) \
    .def(constructor<arg1, arg2, arg3, arg4, arg5, arg6>())
#define BIND_CTOR_7(arg1, arg2, arg3, arg4, arg5, arg6, arg7) \
    .def(constructor<arg1, arg2, arg3, arg4, arg5, arg6, arg7>())
#define BIND_CTOR_8(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8) \
    .def(constructor<arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8>())
#define BIND_CTOR() BIND_CTOR_0()

#define BIND_FUNC(F) \
    def(#F, &F)

#define BIND_FUNC_WITH_NAME(name, F) \
    def(#name, &F)

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

#endif  // WXLUABIND_LUABIND_HELPER_H_
