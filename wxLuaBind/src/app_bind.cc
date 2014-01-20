#include <precompile.h>

#include "app_bind.h"

class wxLuaApp : public wxApp
{
public:
    wxLuaApp()
    {
        DoInit();
    }
    ~wxLuaApp()
    {
        wxUninitialize();
    }

private:
    void DoInit()
    {
        SetInstance(this);
        wxInitialize();
        SetExitOnFrameDelete(true);
    }
};

wxApp* GetApp()
{
    return wxTheApp;
}

int luaopen_wxapp(lua_State* L)
{
    module(L, "wx")
    [
        BIND_FUNC(GetApp)
            ,
        class_<wxApp>("wxApp")
            ,

        class_<wxLuaApp, wxApp>("App")
            BIND_CTOR_0()
            BIND_MEMBER_FUNC(wxApp, MainLoop)
            BIND_MEMBER_FUNC(wxApp, Yield)

            BIND_MEMBER_FUNC(wxApp, SetTopWindow)
            BIND_MEMBER_FUNC(wxApp, GetTopWindow)

    ];
    return 0;
}