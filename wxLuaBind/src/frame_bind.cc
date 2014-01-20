#include <precompile.h>

#include "frame_bind.h"

REGISTER_WXLUA_BIND(wxframe)

int luaopen_wxframe( lua_State* L )
{
    module(L, "wx")
    [
        BEGIN_BIND_CLASS(wxFrame, Frame, wxWindow)
            BIND_TITLE_WIN_ALL_CTORS()
            BIND_WIN_CREATE_FUNC(wxFrame)
    ];

    return 0;
}
