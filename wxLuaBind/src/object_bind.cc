#include <precompile.h>

#include "object_bind.h"

int luaopen_wxobject(lua_State* L)
{
    module(L, "wx")
    [
        BEGIN_BIND_CLASS(wxObject, Object)
            BIND_CTOR()
            BIND_CTOR(const wxObject&)

            // FIXME: cannot compile
            //BIND_OPERATOR(=, const wxObject&)
            BIND_MEMBER_FUNC_WITH_NAME(assign, wxObject, operator=)

            BIND_MEMBER_FUNC(wxObject, IsKindOf)

            BIND_MEMBER_FUNC(wxObject, GetRefData)
            BIND_MEMBER_FUNC(wxObject, SetRefData)
            BIND_MEMBER_FUNC(wxObject, Ref)
            BIND_MEMBER_FUNC(wxObject, UnRef)
            BIND_MEMBER_FUNC(wxObject, UnShare)

            BIND_MEMBER_FUNC(wxObject, IsSameAs)
    ];
    return 0;
}