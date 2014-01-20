#include <precompile.h>

#include "wx_luabind.h"

int luaopen_wx(lua_State* L)
{
    open(L);

    NEW_LUA_TABLE(wx);

    return wxLuaBindInfo::BindAll(L);
}
