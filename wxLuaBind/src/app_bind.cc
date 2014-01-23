#include <precompile.h>

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

REGISTER_WXLUA_BIND(wxapp)
{
    BEGIN_BIND_MODULE(wx)
        BIND_FUNC(GetApp)

        BEGIN_BIND_CLASS_NAME(wxAppBase, wxApp)
        END_BIND_CLASS(wxApp)

        BEGIN_BIND_CLASS_NAME(wxApp, wxLuaApp, wxApp)
            BIND_CTOR()
            BIND_MF(wxApp, MainLoop)
            BIND_MF(wxApp, Yield)

            BIND_MF(wxApp, SetTopWindow)
            BIND_MF(wxApp, GetTopWindow)
        END_BIND_CLASS(wxLuaApp)

    END_BIND_MODULE(wx)

    return 0;
}

