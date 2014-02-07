#include <precompile.h>

#include <wx/aui/aui.h>

// namespace for class wxAuiMDIParentFrame
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create3(wxAuiMDIParentFrame* self, wxWindow * parent, wxWindowID winid, const wxString& title)
    {
        return self->Create(parent,winid,title);
    }
    bool Create4(wxAuiMDIParentFrame* self, wxWindow * parent, wxWindowID winid, const wxString& title, const wxPoint& pos)
    {
        return self->Create(parent,winid,title,pos);
    }
    bool Create5(wxAuiMDIParentFrame* self, wxWindow * parent, wxWindowID winid, const wxString& title, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,winid,title,pos,size);
    }
    bool Create6(wxAuiMDIParentFrame* self, wxWindow * parent, wxWindowID winid, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,winid,title,pos,size,style);
    }
    bool Create7(wxAuiMDIParentFrame* self, wxWindow * parent, wxWindowID winid, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
    {
        return self->Create(parent,winid,title,pos,size,style,name);
    }

    // Auto generated CPP code for 'Tile'
    // =================================
    void Tile0(wxAuiMDIParentFrame* self)
    {
        return self->Tile();
    }
    void Tile1(wxAuiMDIParentFrame* self, wxOrientation orient)
    {
        return self->Tile(orient);
    }
}  // namespace for wxAuiMDIParentFrame

// namespace for class wxAuiMDIChildFrame
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create3(wxAuiMDIChildFrame* self, wxAuiMDIParentFrame * parent, wxWindowID winid, const wxString& title)
    {
        return self->Create(parent,winid,title);
    }
    bool Create4(wxAuiMDIChildFrame* self, wxAuiMDIParentFrame * parent, wxWindowID winid, const wxString& title, const wxPoint& pos)
    {
        return self->Create(parent,winid,title,pos);
    }
    bool Create5(wxAuiMDIChildFrame* self, wxAuiMDIParentFrame * parent, wxWindowID winid, const wxString& title, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,winid,title,pos,size);
    }
    bool Create6(wxAuiMDIChildFrame* self, wxAuiMDIParentFrame * parent, wxWindowID winid, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,winid,title,pos,size,style);
    }
    bool Create7(wxAuiMDIChildFrame* self, wxAuiMDIParentFrame * parent, wxWindowID winid, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
    {
        return self->Create(parent,winid,title,pos,size,style,name);
    }

    // Auto generated CPP code for 'CreateStatusBar'
    // =================================
    wxStatusBar* CreateStatusBar0(wxAuiMDIChildFrame* self)
    {
        return self->CreateStatusBar();
    }
    wxStatusBar* CreateStatusBar1(wxAuiMDIChildFrame* self, int number)
    {
        return self->CreateStatusBar(number);
    }
    wxStatusBar* CreateStatusBar2(wxAuiMDIChildFrame* self, int number, long style)
    {
        return self->CreateStatusBar(number,style);
    }
    wxStatusBar* CreateStatusBar3(wxAuiMDIChildFrame* self, int number, long style, wxWindowID winid)
    {
        return self->CreateStatusBar(number,style,winid);
    }
    wxStatusBar* CreateStatusBar4(wxAuiMDIChildFrame* self, int number, long style, wxWindowID winid, const wxString& name)
    {
        return self->CreateStatusBar(number,style,winid,name);
    }

    // Auto generated CPP code for 'SetStatusText'
    // =================================
    void SetStatusText1(wxAuiMDIChildFrame* self, const wxString & text)
    {
        return self->SetStatusText(text);
    }
    void SetStatusText2(wxAuiMDIChildFrame* self, const wxString & text, int number)
    {
        return self->SetStatusText(text,number);
    }

    // Auto generated CPP code for 'DoSetSizeHints'
    // =================================
    void DoSetSizeHints2(wxAuiMDIChildFrame* self, int minW, int minH)
    {
        return self->DoSetSizeHints(minW,minH);
    }
    void DoSetSizeHints3(wxAuiMDIChildFrame* self, int minW, int minH, int maxW)
    {
        return self->DoSetSizeHints(minW,minH,maxW);
    }
    void DoSetSizeHints4(wxAuiMDIChildFrame* self, int minW, int minH, int maxW, int maxH)
    {
        return self->DoSetSizeHints(minW,minH,maxW,maxH);
    }
    void DoSetSizeHints5(wxAuiMDIChildFrame* self, int minW, int minH, int maxW, int maxH, int incW)
    {
        return self->DoSetSizeHints(minW,minH,maxW,maxH,incW);
    }
    void DoSetSizeHints6(wxAuiMDIChildFrame* self, int minW, int minH, int maxW, int maxH, int incW, int incH)
    {
        return self->DoSetSizeHints(minW,minH,maxW,maxH,incW,incH);
    }

    // Auto generated CPP code for 'Maximize'
    // =================================
    void Maximize0(wxAuiMDIChildFrame* self)
    {
        return self->Maximize();
    }
    void Maximize1(wxAuiMDIChildFrame* self, bool (maximize))
    {
        return self->Maximize((maximize));
    }

    // Auto generated CPP code for 'Iconize'
    // =================================
    void Iconize0(wxAuiMDIChildFrame* self)
    {
        return self->Iconize();
    }
    void Iconize1(wxAuiMDIChildFrame* self, bool (iconize))
    {
        return self->Iconize((iconize));
    }
}  // namespace for wxAuiMDIChildFrame

// namespace for class wxAuiMDIClientWindow
namespace
{
    // Auto generated CPP code for 'CreateClient'
    // =================================
    bool CreateClient1(wxAuiMDIClientWindow* self, wxAuiMDIParentFrame * parent)
    {
        return self->CreateClient(parent);
    }
    bool CreateClient2(wxAuiMDIClientWindow* self, wxAuiMDIParentFrame * parent, long style)
    {
        return self->CreateClient(parent,style);
    }
}  // namespace for wxAuiMDIClientWindow

REGISTER_WXLUA_BIND(tabmdi)
{
#if wxUSE_AUI
    BEGIN_BIND_MODULE(wx)
#if 0
        // Bind class wxAuiMDIParentFrame
        BEGIN_BIND_CLASS(wxAuiMDIParentFrame, wxFrame)
        // Auto generated MACRO code for ctor of 'wxAuiMDIParentFrame':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxAuiMDIParentFrame':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxAuiMDIParentFrame*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxAuiMDIParentFrame*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxAuiMDIParentFrame*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxAuiMDIParentFrame*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxAuiMDIParentFrame*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxString&))
        BIND_MF(wxAuiMDIParentFrame, SetArtProvider)
        BIND_MF(wxAuiMDIParentFrame, GetArtProvider)
        BIND_MF(wxAuiMDIParentFrame, GetNotebook)
        BIND_MF(wxAuiMDIParentFrame, GetWindowMenu)
        BIND_MF(wxAuiMDIParentFrame, SetWindowMenu)
        BIND_MF(wxAuiMDIParentFrame, SetMenuBar)
        BIND_MF(wxAuiMDIParentFrame, SetChildMenuBar)
        BIND_MF(wxAuiMDIParentFrame, ProcessEvent)
        BIND_MF(wxAuiMDIParentFrame, GetActiveChild)
        BIND_MF(wxAuiMDIParentFrame, SetActiveChild)
        BIND_MF(wxAuiMDIParentFrame, GetClientWindow)
        BIND_MF(wxAuiMDIParentFrame, OnCreateClient)
        BIND_MF(wxAuiMDIParentFrame, Cascade)
        // Auto generated MACRO code for 'Tile':
        // =================================
        BIND_F2MF_OVERLOAD(Tile, 0,
        void, (wxAuiMDIParentFrame*))
        BIND_F2MF_OVERLOAD(Tile, 1,
        void, (wxAuiMDIParentFrame*, wxOrientation))
        BIND_MF(wxAuiMDIParentFrame, ArrangeIcons)
        BIND_MF(wxAuiMDIParentFrame, ActivateNext)
        BIND_MF(wxAuiMDIParentFrame, ActivatePrevious)
        END_BIND_CLASS(wxAuiMDIParentFrame)

        // Bind class wxAuiMDIChildFrame
        BEGIN_BIND_CLASS(wxAuiMDIChildFrame, wxPanel)
        // Auto generated MACRO code for ctor of 'wxAuiMDIChildFrame':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxAuiMDIChildFrame':
        // =================================
        BIND_CTOR(wxAuiMDIParentFrame *, wxWindowID, const wxString&)
        BIND_CTOR(wxAuiMDIParentFrame *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxAuiMDIParentFrame *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxAuiMDIParentFrame *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxAuiMDIParentFrame *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxAuiMDIChildFrame*, wxAuiMDIParentFrame *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxAuiMDIChildFrame*, wxAuiMDIParentFrame *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxAuiMDIChildFrame*, wxAuiMDIParentFrame *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxAuiMDIChildFrame*, wxAuiMDIParentFrame *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxAuiMDIChildFrame*, wxAuiMDIParentFrame *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxString&))
#if wxUSE_MENUS
        BIND_MF(wxAuiMDIChildFrame, SetMenuBar)
        BIND_MF(wxAuiMDIChildFrame, GetMenuBar)
#endif // wxUSE_MENUS
        BIND_MF(wxAuiMDIChildFrame, SetTitle)
        BIND_MF(wxAuiMDIChildFrame, GetTitle)
        BIND_MF(wxAuiMDIChildFrame, SetIcons)
        BIND_MF(wxAuiMDIChildFrame, GetIcons)
        BIND_MF(wxAuiMDIChildFrame, SetIcon)
        BIND_MF(wxAuiMDIChildFrame, GetIcon)
        BIND_MF(wxAuiMDIChildFrame, Activate)
        BIND_MF(wxAuiMDIChildFrame, Destroy)
#if wxUSE_STATUSBAR
        // Auto generated MACRO code for 'CreateStatusBar':
        // =================================
        BIND_F2MF_OVERLOAD(CreateStatusBar, 0,
        wxStatusBar*, (wxAuiMDIChildFrame*))
        BIND_F2MF_OVERLOAD(CreateStatusBar, 1,
        wxStatusBar*, (wxAuiMDIChildFrame*, int))
        BIND_F2MF_OVERLOAD(CreateStatusBar, 2,
        wxStatusBar*, (wxAuiMDIChildFrame*, int, long))
        BIND_F2MF_OVERLOAD(CreateStatusBar, 3,
        wxStatusBar*, (wxAuiMDIChildFrame*, int, long, wxWindowID))
        BIND_F2MF_OVERLOAD(CreateStatusBar, 4,
        wxStatusBar*, (wxAuiMDIChildFrame*, int, long, wxWindowID, const wxString&))
        BIND_MF(wxAuiMDIChildFrame, GetStatusBar)
        // Auto generated MACRO code for 'SetStatusText':
        // =================================
        BIND_F2MF_OVERLOAD(SetStatusText, 1,
        void, (wxAuiMDIChildFrame*, const wxString &))
        BIND_F2MF_OVERLOAD(SetStatusText, 2,
        void, (wxAuiMDIChildFrame*, const wxString &, int))
        BIND_MF(wxAuiMDIChildFrame, SetStatusWidths)
#endif
        // Auto generated MACRO code for 'DoSetSizeHints':
        // =================================
        BIND_F2MF_OVERLOAD(DoSetSizeHints, 2,
        void, (wxAuiMDIChildFrame*, int, int))
        BIND_F2MF_OVERLOAD(DoSetSizeHints, 3,
        void, (wxAuiMDIChildFrame*, int, int, int))
        BIND_F2MF_OVERLOAD(DoSetSizeHints, 4,
        void, (wxAuiMDIChildFrame*, int, int, int, int))
        BIND_F2MF_OVERLOAD(DoSetSizeHints, 5,
        void, (wxAuiMDIChildFrame*, int, int, int, int, int))
        BIND_F2MF_OVERLOAD(DoSetSizeHints, 6,
        void, (wxAuiMDIChildFrame*, int, int, int, int, int, int))
#if wxUSE_TOOLBAR
        BIND_MF(wxAuiMDIChildFrame, CreateToolBar)
        BIND_MF(wxAuiMDIChildFrame, GetToolBar)
#endif
        // Auto generated MACRO code for 'Maximize':
        // =================================
        BIND_F2MF_OVERLOAD(Maximize, 0,
        void, (wxAuiMDIChildFrame*))
        BIND_F2MF_OVERLOAD(Maximize, 1,
        void, (wxAuiMDIChildFrame*, bool))
        BIND_MF(wxAuiMDIChildFrame, Restore)
        // Auto generated MACRO code for 'Iconize':
        // =================================
        BIND_F2MF_OVERLOAD(Iconize, 0,
        void, (wxAuiMDIChildFrame*))
        BIND_F2MF_OVERLOAD(Iconize, 1,
        void, (wxAuiMDIChildFrame*, bool))
        BIND_MF(wxAuiMDIChildFrame, IsMaximized)
        BIND_MF(wxAuiMDIChildFrame, IsIconized)
        BIND_MF(wxAuiMDIChildFrame, ShowFullScreen)
        BIND_MF(wxAuiMDIChildFrame, IsFullScreen)
        BIND_MF(wxAuiMDIChildFrame, IsTopLevel)
        BIND_MF(wxAuiMDIChildFrame, OnMenuHighlight)
        BIND_MF(wxAuiMDIChildFrame, OnActivate)
        BIND_MF(wxAuiMDIChildFrame, OnCloseWindow)
        BIND_MF(wxAuiMDIChildFrame, SetMDIParentFrame)
        BIND_MF(wxAuiMDIChildFrame, GetMDIParentFrame)
        END_BIND_CLASS(wxAuiMDIChildFrame)

        // Bind class wxAuiMDIClientWindow
        BEGIN_BIND_CLASS(wxAuiMDIClientWindow, wxAuiNotebook)
        // Auto generated MACRO code for ctor of 'wxAuiMDIClientWindow':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxAuiMDIClientWindow':
        // =================================
        BIND_CTOR(wxAuiMDIParentFrame *)
        BIND_CTOR(wxAuiMDIParentFrame *, long)
        // Auto generated MACRO code for 'CreateClient':
        // =================================
        BIND_F2MF_OVERLOAD(CreateClient, 1,
        bool, (wxAuiMDIClientWindow*, wxAuiMDIParentFrame *))
        BIND_F2MF_OVERLOAD(CreateClient, 2,
        bool, (wxAuiMDIClientWindow*, wxAuiMDIParentFrame *, long))
        BIND_MF(wxAuiMDIClientWindow, SetSelection)
        END_BIND_CLASS(wxAuiMDIClientWindow)
#endif

    END_BIND_MODULE(wx)
#endif // wxUSE_AUI
    return 0;
}