#include <precompile.h>

namespace FrameNS
{
    // 4 default arguments
    wxStatusBar* CreateStatusBar(wxFrame* self)
    {
        return self->CreateStatusBar(1, wxST_SIZEGRIP|wxFULL_REPAINT_ON_RESIZE, 0, wxStatusLineNameStr);
    }
    wxStatusBar* CreateStatusBar(wxFrame* self, int number)
    {
        return self->CreateStatusBar(number);
    }
    wxStatusBar* CreateStatusBar(wxFrame* self, int number,
        long style)
    {
        return self->CreateStatusBar(number, style);
    }
    wxStatusBar* CreateStatusBar(wxFrame* self, int number,
        long style, wxWindowID winid)
    {
        return self->CreateStatusBar(number, style, winid);
    }
    wxStatusBar* CreateStatusBar(wxFrame* self, int number,
        long style, wxWindowID winid, const wxString& name)
    {
        return self->CreateStatusBar(number, style, winid, name);
    }

    // =========================
    void SetStatusText(wxFrame* self, const wxString &text)
    {
        self->SetStatusText(text);
    }
    void SetStatusText(wxFrame* self, const wxString &text, int number)
    {
        self->SetStatusText(text, number);
    }

    void PushStatusText(wxFrame* self, const wxString &text)
    {
        self->PushStatusText(text);
    }
    void PushStatusText(wxFrame* self, const wxString &text, int number )
    {
        self->PushStatusText(text, number);
    }
    void PopStatusText(wxFrame* self)
    {
        self->PopStatusText();
    }
    void PopStatusText(wxFrame* self, int number)
    {
        self->PopStatusText(number);
    }
} // namespace FrameNS

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

            BIND_F2MF_OVERLOAD(FrameNS, CreateStatusBar,
                wxStatusBar*, (wxFrame*))
            BIND_F2MF_OVERLOAD(FrameNS, CreateStatusBar,
                wxStatusBar*, (wxFrame*, int))
            BIND_F2MF_OVERLOAD(FrameNS, CreateStatusBar,
                wxStatusBar*, (wxFrame*, int, long))
            BIND_F2MF_OVERLOAD(FrameNS, CreateStatusBar,
                wxStatusBar*, (wxFrame*, int, long, wxWindowID))
            BIND_MF(wxFrame, CreateStatusBar)

            BIND_MF(wxFrame, OnCreateStatusBar)

            BIND_MF(wxFrame, GetStatusBar)
            BIND_MF(wxFrame, SetStatusBar)

            BIND_F2MF_OVERLOAD(FrameNS, SetStatusText,
                void, (wxFrame*, const wxString&))
            BIND_F2MF_OVERLOAD(FrameNS, SetStatusText,
                void, (wxFrame*, const wxString&, int))

            BIND_MF(wxFrame, SetStatusText)
            BIND_MF(wxFrame, SetStatusWidths)

            BIND_F2MF_OVERLOAD(FrameNS, PushStatusText,
                void, (wxFrame*, const wxString&))
            BIND_F2MF_OVERLOAD(FrameNS, PushStatusText,
                void, (wxFrame*, const wxString&, int))
            BIND_F2MF_OVERLOAD(FrameNS, PopStatusText,
                void, (wxFrame*))
            BIND_F2MF_OVERLOAD(FrameNS, PopStatusText,
                void, (wxFrame*, int))

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
