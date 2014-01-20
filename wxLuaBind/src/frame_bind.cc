#include <precompile.h>

#include "frame_bind.h"

int luaopen_wxframe( lua_State* L )
{
    module(L, "wx")
    [
        class_<wxFrame, wxWindow>("Frame")
            BIND_TITLE_WIN_ALL_CTORS()
            BIND_WIN_CREATE_FUNC(wxFrame)
    ];

    return 0;
}
