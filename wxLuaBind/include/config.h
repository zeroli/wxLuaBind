#ifndef WXLUABIND_CONFIG_H_
#define WXLUABIND_CONFIG_H_

#ifdef WXLUABIND_DYNAMIC_LINK
    #ifdef WXLUABIND_BUILDING
        #define WXLUABIND_API __declspec(dllexport)
    #else
        #define WXLUABIND_API __declspec(dllimport)
    #endif
#endif

#ifndef WXLUABIND_API
#define WXLUABIND_API
#endif

#ifdef __cplusplus
#define EXTERN_C extern "C"
#else
#define EXTERN_C
#endif

#endif  // WXLUABIND_CONFIG_H_
