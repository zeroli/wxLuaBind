#include <iostream>
#include <cstdlib>

extern "C" {
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
};

#include <wx/wxprec.h>

const char* luafile = "D:\\cpp_lua\\wxLuaBind\\luasample\\minimal.wx.lua";

void LuaError(lua_State* L)
{
    wxString msg;
    msg.Printf("ERROR: %s", lua_tostring(L, -1));
    lua_pop(L, 1);

    fprintf(stderr, msg.c_str());
    if (wxTheApp)
        wxMessageBox(msg, "ERROR", wxICON_ERROR);
}

int dofile(lua_State* L)
{
    luaL_openlibs(L);

    if (luaL_loadfile(L, luafile) ||
        lua_pcall(L, 0, 0, 0))
    {
        LuaError(L);
    }

    return 0;
}

#define BIND_VAR_ARGS(name, ...) name##__VA_ARGS__

int main()
{
    //const char* tyes = "tyes=>test ok";
    //const char* tyesno = "tyesno=>testfail";
    //fprintf(stderr, "args= %s\n", BIND_VAR_ARGS(t, yes));

    //return 0;

    lua_State* L = lua_open();
    dofile(L);

    // FIXME: adding it will crash at lua's gc
    //lua_close(L);

    return 0;
}

//class MyApp : public wxApp
//{
//public:
//    MyApp() : m_L(lua_open()) { }
//    ~MyApp() {
//        //lua_close(m_L);
//    }
//
//    virtual bool OnInit()
//    {
//        dofile(m_L);
//
//        return true;
//    }
//
//private:
//    lua_State* m_L;
//};
//
//IMPLEMENT_APP(MyApp)
