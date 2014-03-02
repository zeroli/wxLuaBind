#include <precompile.h>

// namespace for class wxCheckBox
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create3(wxCheckBox* self, wxWindow * parent, wxWindowID id, const wxString& label)
    {
        return self->Create(parent,id,label);
    }
    bool Create4(wxCheckBox* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos)
    {
        return self->Create(parent,id,label,pos);
    }
    bool Create5(wxCheckBox* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,label,pos,size);
    }
    bool Create6(wxCheckBox* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,label,pos,size,style);
    }
    bool Create7(wxCheckBox* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,label,pos,size,style,validator);
    }
    bool Create8(wxCheckBox* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,label,pos,size,style,validator,name);
    }
}  // namespace for wxCheckBox

#if wxUSE_CHECKBOX
BEGIN_WXLUA_BINDFUNC(checkbox)
    BEGIN_LUA_TABLE(wx)
        BIND_MACRO(wxCHK_2STATE)
        BIND_MACRO(wxCHK_3STATE)
        BIND_MACRO(wxCHK_ALLOW_3RD_STATE_FOR_USER)

        // Bind enum wxCheckBoxState (totally 3)
        BIND_ENUM(wxCHK_UNCHECKED)
        BIND_ENUM(wxCHK_CHECKED)
        BIND_ENUM(wxCHK_UNDETERMINED)

        BIND_TABLE_VALUE(wxCheckBoxNameStr, &wxCheckBoxNameStr[0])

    END_LUA_TABLE(wx)

    BEGIN_BIND_MODULE(wx)
        // Bind class wxCheckBoxBase
        BEGIN_BIND_CLASS_CONTROL(wxCheckBoxBase)
        BIND_MF(wxCheckBoxBase, SetValue)
        BIND_MF(wxCheckBoxBase, GetValue)
        BIND_MF(wxCheckBoxBase, IsChecked)
        BIND_MF(wxCheckBoxBase, Get3StateValue)
        BIND_MF(wxCheckBoxBase, Set3StateValue)
        BIND_MF(wxCheckBoxBase, Is3State)
        BIND_MF(wxCheckBoxBase, Is3rdStateAllowedForUser)
        BIND_MF(wxCheckBoxBase, HasTransparentBackground)
        BIND_MF(wxCheckBoxBase, DoUpdateWindowUI)
        END_BIND_CLASS(wxCheckBoxBase)

        // Bind class wxCheckBox
        BEGIN_BIND_CPPCLASS(wxCheckBox, wxCheckBoxBase)
        // Auto generated MACRO code for ctor of 'wxCheckBox':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxCheckBox':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxCheckBox*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxCheckBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxCheckBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxCheckBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxCheckBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxCheckBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&))
        BIND_MF(wxCheckBox, SetValue)
        BIND_MF(wxCheckBox, GetValue)
        END_BIND_CLASS(wxCheckBox)

    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(checkbox)

#endif
