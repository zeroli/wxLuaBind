#include <precompile.h>

// namespace for class wxStaticBox
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create3(wxStaticBox* self, wxWindow * parent, wxWindowID id, const wxString& label)
    {
        return self->Create(parent,id,label);
    }
    bool Create4(wxStaticBox* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos)
    {
        return self->Create(parent,id,label,pos);
    }
    bool Create5(wxStaticBox* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,label,pos,size);
    }
    bool Create6(wxStaticBox* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,label,pos,size,style);
    }
    bool Create7(wxStaticBox* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
    {
        return self->Create(parent,id,label,pos,size,style,name);
    }
}  // namespace for wxStaticBox

REGISTER_WXLUA_BIND(statbox)
{
    BEGIN_BIND_MODULE(wx)
        // Bind class wxStaticBoxBase
        BEGIN_BIND_CLASS_CONTROL(wxStaticBoxBase)
        BIND_MF(wxStaticBoxBase, AcceptsFocus)
        BIND_MF(wxStaticBoxBase, HasTransparentBackground)
        BIND_MF(wxStaticBoxBase, GetBordersForSizer)
        END_BIND_CLASS(wxStaticBoxBase)

        // Bind class wxStaticBox
        BEGIN_BIND_CLASS(wxStaticBox, wxStaticBoxBase)
        // Auto generated MACRO code for ctor of 'wxStaticBox':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxStaticBox':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxStaticBox*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxStaticBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxStaticBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxStaticBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxStaticBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxString&))
        BIND_MF(wxStaticBox, GetBordersForSizer)
        END_BIND_CLASS(wxStaticBox)

    END_BIND_MODULE(wx)
    return 0;
}