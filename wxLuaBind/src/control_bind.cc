#include <precompile.h>

namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxControl* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxControl* self, wxWindow * parent, wxWindowID id, const wxPoint& pos)
    {
        return self->Create(parent,id,pos);
    }
    bool Create4(wxControl* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,pos,size);
    }
    bool Create5(wxControl* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,pos,size,style);
    }
    bool Create6(wxControl* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,pos,size,style,validator);
    }
    bool Create7(wxControl* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,pos,size,style,validator,name);
    }
}  // namespace

REGISTER_WXLUA_PREBIND(wxcontrol, BIND_NO_CONTROL)
{
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS_WIN(wxControl, Control)
            // Auto generated MACRO code for ctor of 'wxControl':
            // =================================
            BIND_CTOR()
            BIND_CTOR(wxWindow *, wxWindowID)
            BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&)
            BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&)
            BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long)
            BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long, const wxValidator&)
            BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&)

            // Auto generated MACRO code for 'Create':
            // =================================
            BIND_F2MF_OVERLOAD(Create, 2,
            bool, (wxControl*,wxWindow *,wxWindowID))
            BIND_F2MF_OVERLOAD(Create, 3,
            bool, (wxControl*,wxWindow *,wxWindowID,const wxPoint&))
            BIND_F2MF_OVERLOAD(Create, 4,
            bool, (wxControl*,wxWindow *,wxWindowID,const wxPoint&,const wxSize&))
            BIND_F2MF_OVERLOAD(Create, 5,
            bool, (wxControl*,wxWindow *,wxWindowID,const wxPoint&,const wxSize&,long))
            BIND_F2MF_OVERLOAD(Create, 6,
            bool, (wxControl*,wxWindow *,wxWindowID,const wxPoint&,const wxSize&,long,const wxValidator&))
            BIND_F2MF_OVERLOAD(Create, 7,
            bool, (wxControl*,wxWindow *,wxWindowID,const wxPoint&,const wxSize&,long,const wxValidator&,const wxString&))
            // Auto generated MACRO code for mem funcs:
            BIND_MF(wxControl, GetAlignment)
            BIND_MF(wxControl, ShouldInheritColours)
            BIND_MF(wxControl, Command)
            BIND_MF(wxControl, SetLabel)
            BIND_MF(wxControl, SetFont)
            BIND_MF(wxControl, DoUpdateWindowUI)

            BIND_MF_OVERLOAD(wxControl, GetLabelText,
                wxString, () const)
            BEGIN_BIND_SCOPE()
                BIND_SMF_OVERLOAD(wxControl, GetLabelText,
                    wxString, (const wxString&))
            END_BIND_SCOPE()
        END_BIND_CLASS(wxControl)
    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
        // bind const wxChar wxControlNameStr[]
        BIND_TABLE_VALUE(wxControlNameStr, &wxControlNameStr[0])
    END_LUA_TABLE(wx)
    return 0;
}