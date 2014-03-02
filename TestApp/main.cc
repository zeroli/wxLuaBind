#include <iostream>
#include <cstdlib>

extern "C" {
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
};

#include <wx/wxprec.h>
#include "wx_luabind.h"

void LuaError(lua_State* L)
{
    wxString msg;
    msg.Printf("ERROR: %s", lua_tostring(L, -1));
    lua_pop(L, 1);

    fprintf(stderr, msg.c_str());
    if (wxTheApp)
        wxMessageBox(msg, "ERROR", wxICON_ERROR);
}

int dofile(lua_State* L, const char* luafile)
{
    luaL_openlibs(L);

    if (luaL_loadfile(L, luafile) ||
        lua_pcall(L, 0, 0, 0))
    {
        LuaError(L);
    }

    return 0;
}

const char* luafile =
    "D:\\cpp_lua\\wxLuaBind\\luasample\\minimal.wx.lua";

class MyApp : public wxApp
{
public:
    MyApp() : m_L(lua_open())
    {
    }

    ~MyApp()
    {
        lua_close(m_L);
    }

    virtual bool OnInit()
    {
        luaopen_wx(m_L);

        dofile(m_L, luafile);

        return true;
    }

private:
    lua_State* m_L;
};

IMPLEMENT_APP(MyApp)
