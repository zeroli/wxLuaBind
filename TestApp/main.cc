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
    if (luaL_dofile(L, luafile))
    {
        LuaError(L);
    }

    return 0;
}

const char* luafile =
    "D:\\cpp_lua\\wxLuaBind\\luasample\\minimal.wx.lua";

#if 0

/* The function we'll call from the lua script */
static int average(lua_State *L)
{
    /* get number of arguments */
    int n = lua_gettop(L);
    double sum = 0;
    int i;

    /* loop through each argument */
    for (i = 1; i <= n; i++)
    {
        if (!lua_isnumber(L, i))
        {
            lua_pushstring(L, "Incorrect argument to 'average'");
            lua_error(L);
        }

        /* total the arguments */
        sum += lua_tonumber(L, i);
    }

    /* push the average */
    lua_pushnumber(L, sum / n);

    /* push the sum */
    lua_pushnumber(L, sum);

    /* return the number of results */
    return 2;
}

int main()
{
    lua_State* L = lua_open();
    luaL_openlibs(L);
    /* register our function */
    // this is to extend lua using C function
    // call from lua into C
    lua_register(L, "average", average);

    dofile(L, luafile);

    // this is to embed lua in C
    // call from C into lua
	/* the function name */
	lua_getglobal(L, "add");

	/* the first argument */
	lua_pushnumber(L, 41 );

	/* the second argument */
	lua_pushnumber(L, 22 );

	/* call the function with 2
	   arguments, return 1 result */
	lua_call(L, 2, 1);

	/* get the result */
	int sum = (int)lua_tonumber(L, -1);
	lua_pop(L, 1);

	/* print the result */
	printf( "The result is %d\n", sum );

    /* the function name */
    lua_getglobal(L, "calc_average");
    lua_call(L, 0, 0);

    lua_close(L);

    return 0;
}

#else

class MyApp : public wxApp
{
public:
    MyApp() : m_L(lua_open())
    {
        luaL_openlibs(m_L);
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

#endif
