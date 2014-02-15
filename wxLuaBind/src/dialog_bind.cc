#include <precompile.h>

#include <wx/colordlg.h>

// namespace for class wxDialog
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create3(wxDialog* self, wxWindow * parent, wxWindowID id, const wxString& title)
    {
        return self->Create(parent,id,title);
    }
    bool Create4(wxDialog* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos)
    {
        return self->Create(parent,id,title,pos);
    }
    bool Create5(wxDialog* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,title,pos,size);
    }
    bool Create6(wxDialog* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,title,pos,size,style);
    }
    bool Create7(wxDialog* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
    {
        return self->Create(parent,id,title,pos,size,style,name);
    }
#if wxUSE_TOOLBAR && defined(__POCKETPC__)
    // Auto generated CPP code for 'CreateToolBar'
    // =================================
    wxToolBar* CreateToolBar0(wxDialog* self)
    {
        return self->CreateToolBar();
    }
    wxToolBar* CreateToolBar1(wxDialog* self, long style)
    {
        return self->CreateToolBar(style);
    }
    wxToolBar* CreateToolBar2(wxDialog* self, long style, wxWindowID winid)
    {
        return self->CreateToolBar(style,winid);
    }
    wxToolBar* CreateToolBar3(wxDialog* self, long style, wxWindowID winid, const wxString& name)
    {
        return self->CreateToolBar(style,winid,name);
    }
#endif
    // Auto generated CPP code for 'Show'
    // =================================
    bool Show0(wxDialog* self)
    {
        return self->Show();
    }
    bool Show1(wxDialog* self, bool show)
    {
        return self->Show(show);
    }
}  // namespace for wxDialog

// namespace for class wxColourDialog
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create1(wxColourDialog* self, wxWindow * parent)
    {
        return self->Create(parent);
    }
    bool Create2(wxColourDialog* self, wxWindow * parent, wxColourData * data)
    {
        return self->Create(parent,data);
    }
}  // namespace for wxColourDialog

REGISTER_WXLUA_BIND(dialog)
    BEGIN_BIND_MODULE(wx)
        // Bind class wxDialogBase
        BEGIN_BIND_CPPCLASS(wxDialogBase, wxTopLevelWindow)
        BIND_MF(wxDialogBase, ShowModal)
        BIND_MF(wxDialogBase, EndModal)
        BIND_MF(wxDialogBase, IsModal)
        BIND_MF(wxDialogBase, SetReturnCode)
        BIND_MF(wxDialogBase, GetReturnCode)
        BIND_MF(wxDialogBase, SetAffirmativeId)
        BIND_MF(wxDialogBase, GetAffirmativeId)
        BIND_MF(wxDialogBase, SetEscapeId)
        BIND_MF(wxDialogBase, GetEscapeId)
#if wxUSE_STATTEXT // && wxUSE_TEXTCTRL
        BIND_MF(wxDialogBase, CreateTextSizer)
#endif
        BIND_MF(wxDialogBase, CreateButtonSizer)
        BIND_MF(wxDialogBase, CreateSeparatedButtonSizer)
#if wxUSE_BUTTON
        BIND_MF(wxDialogBase, CreateStdDialogButtonSizer)
#endif
        END_BIND_CLASS(wxDialogBase)

        // Bind class wxDialog
        BEGIN_BIND_CPPCLASS(wxDialog, wxDialogBase)
        // Auto generated MACRO code for ctor of 'wxDialog':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxDialog':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxDialog*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxDialog*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxDialog*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxDialog*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxDialog*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxString&))
        BIND_MF(wxDialog, IsModal)
        BIND_MF(wxDialog, ShowModal)
        BIND_MF(wxDialog, EndModal)
#if wxUSE_TOOLBAR && defined(__POCKETPC__)
        // Auto generated MACRO code for 'CreateToolBar':
        // =================================
        BIND_F2MF_OVERLOAD(CreateToolBar, 0,
        wxToolBar*, (wxDialog*))
        BIND_F2MF_OVERLOAD(CreateToolBar, 1,
        wxToolBar*, (wxDialog*, long))
        BIND_F2MF_OVERLOAD(CreateToolBar, 2,
        wxToolBar*, (wxDialog*, long, wxWindowID))
        BIND_F2MF_OVERLOAD(CreateToolBar, 3,
        wxToolBar*, (wxDialog*, long, wxWindowID, const wxString&))
        BIND_MF(wxDialog, OnCreateToolBar)
        BIND_MF(wxDialog, GetToolBar)
#endif
        // Auto generated MACRO code for 'Show':
        // =================================
        BIND_F2MF_OVERLOAD(Show, 0,
        bool, (wxDialog*))
        BIND_F2MF_OVERLOAD(Show, 1,
        bool, (wxDialog*, bool))
        BIND_MF(wxDialog, Raise)
#ifdef __POCKETPC__
        BIND_MF(wxDialog, DoOK)
#endif
        END_BIND_CLASS(wxDialog)

#if wxUSE_COLOURDLG
        // Bind class wxColourDialog
        BEGIN_BIND_CPPCLASS(wxColourDialog, wxDialog)
        // Auto generated MACRO code for ctor of 'wxColourDialog':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxColourDialog':
        // =================================
        BIND_CTOR(wxWindow *)
        BIND_CTOR(wxWindow *, wxColourData *)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 1,
        bool, (wxColourDialog*, wxWindow *))
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxColourDialog*, wxWindow *, wxColourData *))
        BIND_MF(wxColourDialog, GetColourData)
#if defined(__WXMSW__) && !defined(__WXUNIVERSAL__)
        BIND_MF(wxColourDialog, SetTitle)
        BIND_MF(wxColourDialog, GetTitle)
#endif
        BIND_MF(wxColourDialog, ShowModal)
        END_BIND_CLASS(wxColourDialog)
#endif

    END_BIND_MODULE(wx)
END_REGISTER(dialog)
