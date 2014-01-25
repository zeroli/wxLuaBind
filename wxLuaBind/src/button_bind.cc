#include <precompile.h>

namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxButton* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxButton* self, wxWindow * parent, wxWindowID id, const wxString& label)
    {
        return self->Create(parent,id,label);
    }
    bool Create4(wxButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos)
    {
        return self->Create(parent,id,label,pos);
    }
    bool Create5(wxButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,label,pos,size);
    }
    bool Create6(wxButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,label,pos,size,style);
    }
    bool Create7(wxButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,label,pos,size,style,validator);
    }
    bool Create8(wxButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,label,pos,size,style,validator,name);
    }
}  // namespace

REGISTER_WXLUA_BIND(wxbutton)
{
    BEGIN_LUA_TABLE(wx)
        BIND_MACRO(wxBU_EXACTFIT)
        BIND_TABLE_VALUE(wxButtonNameStr, &wxButtonNameStr[0])
    END_LUA_TABLE(wx)

    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS_CONTROL(wxButton)
        // Auto generated MACRO code for ctor of 'wxButton':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxButton':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxButton*, wxWindow *, wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxButton*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&))
        BIND_MF(wxButton, SetImageLabel)
        BIND_MF(wxButton, SetImageMargins)
        BIND_MF(wxButton, SetDefault)
        BIND_MF(wxButton, ShouldInheritColours)
        BEGIN_BIND_SCOPE()
        BIND_SMF(wxButton, GetDefaultSize)
        END_BIND_SCOPE()
        END_BIND_CLASS(wxButton)
    END_BIND_MODULE(wx)
    return 0;
}