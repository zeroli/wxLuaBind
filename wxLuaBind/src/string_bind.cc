#include <precompile.h>

EXTERN_C
int luaopen_wxstring(lua_State* L);

REGISTER_WXLUA_BIND(wxstring)

int luaopen_wxstring(lua_State* L)
{
    module(L, "wx")
    [
        class_<wxString>("String")
            BIND_CTOR()
            BIND_CTOR(const wxString&)
            BIND_CTOR(wxChar, size_t)
            BIND_CTOR(size_t, wxChar)
            BIND_CTOR(const wxChar*)
            BIND_CTOR(const wxChar*, size_t)

            BIND_MEMBER_FUNC(wxString, Len)
            BIND_MEMBER_FUNC(wxString, IsEmpty)
            BIND_MEMBER_FUNC(wxString, Truncate)
            BIND_MEMBER_FUNC(wxString, Empty)
            BIND_MEMBER_FUNC(wxString, Clear)

    ];
    return 0;
}
