#include <precompile.h>

#include "string_bind.h"

int luaopen_wxstring(lua_State* L)
{
    module(L, "wx")
    [
        class_<wxString>("String")
            BIND_CTOR_0()
            BIND_CTOR_1(const wxString&)
            BIND_CTOR_2(wxChar, size_t)
            BIND_CTOR_2(size_t, wxChar)
            BIND_CTOR_1(const wxChar*)
            BIND_CTOR_2(const wxChar*, size_t)

            BIND_MEMBER_FUNC(wxString, Len)
            BIND_MEMBER_FUNC(wxString, IsEmpty)
            BIND_MEMBER_FUNC(wxString, Truncate)
            BIND_MEMBER_FUNC(wxString, Empty)
            BIND_MEMBER_FUNC(wxString, Clear)

    ];
    return 0;
}
