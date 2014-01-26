#include <precompile.h>

// namespace for class wxDirDialogBase
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create1(wxDirDialogBase* self, wxWindow * parent)
    {
        return self->Create(parent);
    }
    bool Create2(wxDirDialogBase* self, wxWindow * parent, const wxString& title)
    {
        return self->Create(parent,title);
    }
    bool Create3(wxDirDialogBase* self, wxWindow * parent, const wxString& title, const wxString& defaultPath)
    {
        return self->Create(parent,title,defaultPath);
    }
    bool Create4(wxDirDialogBase* self, wxWindow * parent, const wxString& title, const wxString& defaultPath, long style)
    {
        return self->Create(parent,title,defaultPath,style);
    }
    bool Create5(wxDirDialogBase* self, wxWindow * parent, const wxString& title, const wxString& defaultPath, long style, const wxPoint& pos)
    {
        return self->Create(parent,title,defaultPath,style,pos);
    }
    bool Create6(wxDirDialogBase* self, wxWindow * parent, const wxString& title, const wxString& defaultPath, long style, const wxPoint& pos, const wxSize& sz)
    {
        return self->Create(parent,title,defaultPath,style,pos,sz);
    }
    bool Create7(wxDirDialogBase* self, wxWindow * parent, const wxString& title, const wxString& defaultPath, long style, const wxPoint& pos, const wxSize& sz, const wxString& name)
    {
        return self->Create(parent,title,defaultPath,style,pos,sz,name);
    }
}  // namespace for wxDirDialogBase

REGISTER_WXLUA_BIND(dirdlg)
{
    BEGIN_LUA_TABLE(wx)
        BIND_TABLE_VALUE(wxDirDialogNameStr, &wxDirDialogNameStr[0])
        BIND_TABLE_VALUE(wxDirDialogDefaultFolderStr, &wxDirDialogDefaultFolderStr[0])
        BIND_TABLE_VALUE(wxDirSelectorPromptStr, &wxDirSelectorPromptStr[0])
        BIND_MACRO(wxDD_CHANGE_DIR)
        BIND_MACRO(wxDD_DIR_MUST_EXIST)
        BIND_MACRO(wxDD_NEW_DIR_BUTTON)
        BIND_MACRO(wxDD_DEFAULT_STYLE)
    END_LUA_TABLE(wx)

    BEGIN_BIND_MODULE(wx)
        // Bind class wxDirDialogBase
        BEGIN_BIND_CLASS(wxDirDialogBase, wxDialog)
        // Auto generated MACRO code for ctor of 'wxDirDialogBase':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxDirDialogBase':
        // =================================
        BIND_CTOR(wxWindow *)
        BIND_CTOR(wxWindow *, const wxString&)
        BIND_CTOR(wxWindow *, const wxString&, const wxString&)
        BIND_CTOR(wxWindow *, const wxString&, const wxString&, long)
        BIND_CTOR(wxWindow *, const wxString&, const wxString&, long, const wxPoint&)
        BIND_CTOR(wxWindow *, const wxString&, const wxString&, long, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, const wxString&, const wxString&, long, const wxPoint&, const wxSize&, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 1,
        bool, (wxDirDialogBase*, wxWindow *))
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxDirDialogBase*, wxWindow *, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxDirDialogBase*, wxWindow *, const wxString&, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxDirDialogBase*, wxWindow *, const wxString&, const wxString&, long))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxDirDialogBase*, wxWindow *, const wxString&, const wxString&, long, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxDirDialogBase*, wxWindow *, const wxString&, const wxString&, long, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxDirDialogBase*, wxWindow *, const wxString&, const wxString&, long, const wxPoint&, const wxSize&, const wxString&))
        BIND_MF(wxDirDialogBase, SetMessage)
        BIND_MF(wxDirDialogBase, SetPath)
        BIND_MF(wxDirDialogBase, GetMessage)
        BIND_MF(wxDirDialogBase, GetPath)
        END_BIND_CLASS(wxDirDialogBase)

        // Bind class wxDirDialog
        BEGIN_BIND_CLASS(wxDirDialog, wxDialogBase)
        // Auto generated MACRO code for ctor of 'wxDirDialog':
        // =================================
        BIND_CTOR(wxWindow *)
        BIND_CTOR(wxWindow *, const wxString&)
        BIND_CTOR(wxWindow *, const wxString&, const wxString&)
        BIND_CTOR(wxWindow *, const wxString&, const wxString&, long)
        BIND_CTOR(wxWindow *, const wxString&, const wxString&, long, const wxPoint&)
        BIND_CTOR(wxWindow *, const wxString&, const wxString&, long, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, const wxString&, const wxString&, long, const wxPoint&, const wxSize&, const wxString&)
        END_BIND_CLASS(wxDirDialog)

        BIND_FUNC(wxDirSelector)
    END_BIND_MODULE(wx)
    return 0;
}