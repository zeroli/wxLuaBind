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
        CleanUp();
        SetInstance(NULL);

        wxUninitialize();
    }
private:
    void DoInit()
    {
        SetInstance(this);
        SetExitOnFrameDelete(true);

        wxInitialize();
    }
};

wxApp* GetApp()
{
    return wxTheApp;
}

BEGIN_WXLUA_BINDFUNC(app)
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
END_WXLUA_BINDFUNC(app)
