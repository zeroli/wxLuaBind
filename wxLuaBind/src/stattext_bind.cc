#include <precompile.h>

namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create3(wxStaticText* self, wxWindow * parent, wxWindowID id, const wxString& label)
    {
        return self->Create(parent,id,label);
    }
    bool Create4(wxStaticText* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos)
    {
        return self->Create(parent,id,label,pos);
    }
    bool Create5(wxStaticText* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,label,pos,size);
    }
    bool Create6(wxStaticText* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,label,pos,size,style);
    }
    bool Create7(wxStaticText* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
    {
        return self->Create(parent,id,label,pos,size,style,name);
    }
}  // namespace

BEGIN_WXLUA_BINDFUNC(stattext)
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS_CONTROL(wxStaticText)
        // Auto generated MACRO code for ctor of 'wxStaticText':
        // =================================
        BIND_CTOR()
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxStaticText*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxStaticText*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxStaticText*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxStaticText*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxStaticText*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxString&))
        BIND_MF(wxStaticText, SetLabel)
        BIND_MF(wxStaticText, SetFont)

        END_BIND_CLASS(wxStaticText)
    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
        BIND_TABLE_VALUE(wxStaticTextNameStr, &wxStaticTextNameStr[0])
    END_LUA_TABLE(wx)
END_WXLUA_BINDFUNC(stattext)
