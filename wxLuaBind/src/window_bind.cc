#include <precompile.h>

#include "window_bind.h"

int luaopen_wxwindow( lua_State* L )
{
    module(L, "wx")
    [
        BEGIN_BIND_CLASS_WX(wxWindow, Window)
            BIND_WIN_ALL_CTORS()
            BIND_WIN_CREATE_FUNC(wxWindow)

            BIND_MEMBER_FUNC(wxWindow, SetLabel)
            BIND_MEMBER_FUNC(wxWindow, GetLabel)

            BIND_MEMBER_FUNC(wxWindow, SetName)
            BIND_MEMBER_FUNC(wxWindow, GetName)

            BIND_MEMBER_FUNC(wxWindow, SetWindowVariant)
            BIND_MEMBER_FUNC(wxWindow, GetWindowVariant)

            BIND_MEMBER_FUNC(wxWindow, SetId)
            BIND_MEMBER_FUNC(wxWindow, GetId)

            BIND_MEMBER_FUNC(wxWindow, GetLayoutDirection)
            BIND_MEMBER_FUNC(wxWindow, SetLayoutDirection)

            BIND_MEMBER_FUNC(wxWindow, AdjustForLayoutDirection)

            BIND_MEMBER_OVERLOAD(wxWindow, SetSize,
                void, (int, int, int, int, int))
            BIND_MEMBER_OVERLOAD(wxWindow, SetSize,
                void, (int, int))
            BIND_MEMBER_OVERLOAD(wxWindow, SetSize,
                void, (const wxSize&))
            BIND_MEMBER_OVERLOAD(wxWindow, SetSize,
                void, (const wxRect&, int))

            BIND_MEMBER_FUNC(wxWindow, Raise)
            BIND_MEMBER_FUNC(wxWindow, Lower)
            BIND_MEMBER_FUNC(wxWindow, Show)
            BIND_MEMBER_FUNC(wxWindow, Enable)
            BIND_MEMBER_FUNC(wxWindow, SetFocus)
            BIND_MEMBER_FUNC(wxWindow, GetLabel)
    ];

    return 0;
}