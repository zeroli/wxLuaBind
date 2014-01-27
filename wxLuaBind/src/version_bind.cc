#include <precompile.h>

REGISTER_WXLUA_BIND(version)
{
    BEGIN_LUA_TABLE(wx)
        BIND_MACRO(wxMAJOR_VERSION)
        BIND_MACRO(wxMINOR_VERSION)
        BIND_MACRO(wxRELEASE_NUMBER)
        BIND_MACRO(wxSUBRELEASE_NUMBER)
        BIND_MACRO(wxVERSION_STRING)
    END_LUA_TABLE(wx)
    return 0;
}