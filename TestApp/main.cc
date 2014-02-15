#include <iostream>
#include <cstdlib>

extern "C" {
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
};

#include <wx/wxprec.h>

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

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s %s\n", argv[0], argv[1]);
        exit(1);
    }

    const char* luafile = argv[1];

    lua_State* L = lua_open();
    dofile(L, luafile);

    lua_close(L);

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
