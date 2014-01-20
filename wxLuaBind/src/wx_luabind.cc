#include <precompile.h>

#include "wx_luabind.h"

#include "object_bind.h"
#include "defs_bind.h"
#include "string_bind.h"
#include "app_bind.h"
#include "window_bind.h"
#include "frame_bind.h"
#include "gdicmn_bind.h"
#include "toplevel_bind.h"

int luaopen_wx(lua_State* L)
{
    open(L);

    module(L, "wx");

    luaopen_wxobject(L);
    luaopen_wxstring(L);

    luaopen_wxapp(L);
    luaopen_wxwindow(L);
    luaopen_toplevel(L);
    luaopen_wxframe(L);

    luaopen_wxdefs(L);
    luaopen_gdicmn(L);

    return 0;
}
