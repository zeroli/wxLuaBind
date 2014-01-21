#include <precompile.h>

REGISTER_WXLUA_BIND(wxframe)
{
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS(wxFrame, Frame, wxWindow)
            BIND_TITLE_WIN_ALL_CTORS()
            BIND_WIN_CREATE_FUNC(wxFrame)

            BIND_MF(wxFrame, GetClientAreaOrigin)
            BIND_MF(wxFrame, SendSizeEvent)

#if wxUSE_MENUS
            BIND_MF(wxFrame, SetMenuBar)
            BIND_MF(wxFrame, GetMenuBar)
#endif
            BIND_MF(wxFrame, ProcessCommand)
#if wxUSE_STATUSBAR
            BIND_MF(wxFrame, CreateStatusBar)
            BIND_MF(wxFrame, OnCreateStatusBar)

            BIND_MF(wxFrame, GetStatusBar)
            BIND_MF(wxFrame, SetStatusBar)

            BIND_MF(wxFrame, SetStatusText)
            BIND_MF(wxFrame, SetStatusWidths)

            BIND_MF(wxFrame, PushStatusText)
            BIND_MF(wxFrame, PopStatusText)

            BIND_MF(wxFrame, SetStatusBarPane)
            BIND_MF(wxFrame, GetStatusBarPane)
#endif
#if wxUSE_TOOLBAR
            BIND_MF(wxFrame, CreateToolBar)
            BIND_MF(wxFrame, OnCreateToolBar)
            BIND_MF(wxFrame, GetToolBar)
            BIND_MF(wxFrame, SetToolBar)
#endif

            BIND_MF(wxFrame, UpdateWindowUI)

#ifndef wxTopLevelWindowNative
            BIND_MF(wxFrame, ShowFullScreen)
            BIND_MF(wxFrame, IsFullScreen)
#endif
        END_BIND_CLASS(wxFrame)
    END_BIND_MODULE(wx)

    return 0;
}
