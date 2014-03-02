#include <precompile.h>

// namespace for class wxRadioButton
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create3(wxRadioButton* self, wxWindow * parent, wxWindowID id, const wxString& label)
    {
        return self->Create(parent,id,label);
    }
    bool Create4(wxRadioButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos)
    {
        return self->Create(parent,id,label,pos);
    }
    bool Create5(wxRadioButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,label,pos,size);
    }
    bool Create6(wxRadioButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,label,pos,size,style);
    }
    bool Create7(wxRadioButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,label,pos,size,style,validator);
    }
    bool Create8(wxRadioButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,label,pos,size,style,validator,name);
    }
}  // namespace for wxRadioButton

BEGIN_WXLUA_BINDFUNC(radiobut)
    BEGIN_BIND_MODULE(wx)
        // Bind class wxRadioButton
        BEGIN_BIND_CLASS_CONTROL(wxRadioButton)
        // Auto generated MACRO code for ctor of 'wxRadioButton':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxRadioButton':
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
        bool, (wxRadioButton*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxRadioButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxRadioButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxRadioButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxRadioButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxRadioButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&))
        BIND_MF(wxRadioButton, SetValue)
        BIND_MF(wxRadioButton, GetValue)
        END_BIND_CLASS(wxRadioButton)

    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(radiobut)
