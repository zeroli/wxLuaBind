#include <precompile.h>

namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create3(wxFrame* self, wxWindow * parent, wxWindowID id, const wxString& title)
    {
        return self->Create(parent,id,title);
    }
    bool Create4(wxFrame* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos)
    {
        return self->Create(parent,id,title,pos);
    }
    bool Create5(wxFrame* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,title,pos,size);
    }
    bool Create6(wxFrame* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,title,pos,size,style);
    }
    bool Create7(wxFrame* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
    {
        return self->Create(parent,id,title,pos,size,style,name);
    }

    // Auto generated CPP code for 'CreateStatusBar'
    // =================================
    wxStatusBar* CreateStatusBar0(wxFrame* self)
    {
        return self->CreateStatusBar();
    }
    wxStatusBar* CreateStatusBar1(wxFrame* self, int number)
    {
        return self->CreateStatusBar(number);
    }
    wxStatusBar* CreateStatusBar2(wxFrame* self, int number, long style)
    {
        return self->CreateStatusBar(number,style);
    }
    wxStatusBar* CreateStatusBar3(wxFrame* self, int number, long style, wxWindowID winid)
    {
        return self->CreateStatusBar(number,style,winid);
    }
    wxStatusBar* CreateStatusBar4(wxFrame* self, int number, long style, wxWindowID winid, const wxString& name)
    {
        return self->CreateStatusBar(number,style,winid,name);
    }

    // Auto generated CPP code for 'SetStatusText'
    // =================================
    void SetStatusText1(wxFrame* self, const wxString & text)
    {
        return self->SetStatusText(text);
    }
    void SetStatusText2(wxFrame* self, const wxString & text, int number)
    {
        return self->SetStatusText(text,number);
    }

    // Auto generated CPP code for 'PushStatusText'
    // =================================
    void PushStatusText1(wxFrame* self, const wxString & text)
    {
        return self->PushStatusText(text);
    }
    void PushStatusText2(wxFrame* self, const wxString & text, int number)
    {
        return self->PushStatusText(text,number);
    }

    // Auto generated CPP code for 'PopStatusText'
    // =================================
    void PopStatusText0(wxFrame* self)
    {
        return self->PopStatusText();
    }
    void PopStatusText1(wxFrame* self, int number)
    {
        return self->PopStatusText(number);
    }

    // Auto generated CPP code for 'CreateToolBar'
    // =================================
    wxToolBar* CreateToolBar0(wxFrame* self)
    {
        return self->CreateToolBar();
    }
    wxToolBar* CreateToolBar1(wxFrame* self, long style)
    {
        return self->CreateToolBar(style);
    }
    wxToolBar* CreateToolBar2(wxFrame* self, long style, wxWindowID winid)
    {
        return self->CreateToolBar(style,winid);
    }
    wxToolBar* CreateToolBar3(wxFrame* self, long style, wxWindowID winid, const wxString& name)
    {
        return self->CreateToolBar(style,winid,name);
    }

    // Auto generated CPP code for 'UpdateWindowUI'
    // =================================
    void UpdateWindowUI0(wxFrame* self)
    {
        return self->UpdateWindowUI();
    }
    void UpdateWindowUI1(wxFrame* self, long flags)
    {
        return self->UpdateWindowUI(flags);
    }
}  // namespace

REGISTER_WXLUA_BIND(wxframe)
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS_WIN(wxFrame)
            BIND_TITLE_WIN_ALL_CTORS()
            // Auto generated MACRO code for 'Create':
            // =================================
            BIND_F2MF_OVERLOAD(Create, 3,
            bool, (wxFrame*, wxWindow *, wxWindowID, const wxString&))
            BIND_F2MF_OVERLOAD(Create, 4,
            bool, (wxFrame*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
            BIND_F2MF_OVERLOAD(Create, 5,
            bool, (wxFrame*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
            BIND_F2MF_OVERLOAD(Create, 6,
            bool, (wxFrame*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
            BIND_F2MF_OVERLOAD(Create, 7,
            bool, (wxFrame*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxString&))

            BIND_MF(wxFrame, GetClientAreaOrigin)
            BIND_MF(wxFrame, SendSizeEvent)

#if wxUSE_MENUS
            BIND_MF(wxFrame, SetMenuBar)
            BIND_MF(wxFrame, GetMenuBar)
#endif
            BIND_MF(wxFrame, ProcessCommand)

#if wxUSE_STATUSBAR

            // Auto generated MACRO code for 'CreateStatusBar':
            // =================================
            BIND_F2MF_OVERLOAD(CreateStatusBar, 0,
            wxStatusBar*, (wxFrame*))
            BIND_F2MF_OVERLOAD(CreateStatusBar, 1,
            wxStatusBar*, (wxFrame*,int))
            BIND_F2MF_OVERLOAD(CreateStatusBar, 2,
            wxStatusBar*, (wxFrame*,int,long))
            BIND_F2MF_OVERLOAD(CreateStatusBar, 3,
            wxStatusBar*, (wxFrame*,int,long,wxWindowID))
            BIND_F2MF_OVERLOAD(CreateStatusBar, 4,
            wxStatusBar*, (wxFrame*,int,long,wxWindowID,const wxString&))

            // Auto generated MACRO code for 'SetStatusText':
            // =================================
            BIND_F2MF_OVERLOAD(SetStatusText, 1,
            void, (wxFrame*,const wxString &))
            BIND_F2MF_OVERLOAD(SetStatusText, 2,
            void, (wxFrame*,const wxString &,int))

            // Auto generated MACRO code for 'PushStatusText':
            // =================================
            BIND_F2MF_OVERLOAD(PushStatusText, 1,
            void, (wxFrame*,const wxString &))
            BIND_F2MF_OVERLOAD(PushStatusText, 2,
            void, (wxFrame*,const wxString &,int))

            // Auto generated MACRO code for 'PopStatusText':
            // =================================
            BIND_F2MF_OVERLOAD(PopStatusText, 0,
            void, (wxFrame*))
            BIND_F2MF_OVERLOAD(PopStatusText, 1,
            void, (wxFrame*,int))

            BIND_MF(wxFrame, OnCreateStatusBar)

            BIND_MF(wxFrame, GetStatusBar)
            BIND_MF(wxFrame, SetStatusBar)

            BIND_MF(wxFrame, SetStatusText)
            BIND_MF(wxFrame, SetStatusWidths)

            BIND_MF(wxFrame, SetStatusBarPane)
            BIND_MF(wxFrame, GetStatusBarPane)
#endif
#if wxUSE_TOOLBAR
            // Auto generated MACRO code for 'CreateToolBar':
            // =================================
            BIND_F2MF_OVERLOAD(CreateToolBar, 0,
            wxToolBar*, (wxFrame*))
            BIND_F2MF_OVERLOAD(CreateToolBar, 1,
            wxToolBar*, (wxFrame*,long))
            BIND_F2MF_OVERLOAD(CreateToolBar, 2,
            wxToolBar*, (wxFrame*,long,wxWindowID))
            BIND_F2MF_OVERLOAD(CreateToolBar, 3,
            wxToolBar*, (wxFrame*,long,wxWindowID,const wxString&))

            BIND_MF(wxFrame, OnCreateToolBar)
            BIND_MF(wxFrame, GetToolBar)
            BIND_MF(wxFrame, SetToolBar)
#endif

#ifndef wxTopLevelWindowNative
            BIND_MF(wxFrame, ShowFullScreen)
            BIND_MF(wxFrame, IsFullScreen)
#endif
            // Auto generated MACRO code for 'UpdateWindowUI':
            // =================================
            BIND_F2MF_OVERLOAD(UpdateWindowUI, 0,
            void, (wxFrame*))
            BIND_F2MF_OVERLOAD(UpdateWindowUI, 1,
            void, (wxFrame*,long))
        END_BIND_CLASS(wxFrame)
    END_BIND_MODULE(wx)
END_REGISTER(frame)
