#include <precompile.h>

namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create1(wxPanel* self, wxWindow * parent)
    {
        return self->Create(parent);
    }
    bool Create2(wxPanel* self, wxWindow * parent, wxWindowID winid)
    {
        return self->Create(parent,winid);
    }
    bool Create3(wxPanel* self, wxWindow * parent, wxWindowID winid, const wxPoint& pos)
    {
        return self->Create(parent,winid,pos);
    }
    bool Create4(wxPanel* self, wxWindow * parent, wxWindowID winid, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,winid,pos,size);
    }
    bool Create5(wxPanel* self, wxWindow * parent, wxWindowID winid, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,winid,pos,size,style);
    }
    bool Create6(wxPanel* self, wxWindow * parent, wxWindowID winid, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
    {
        return self->Create(parent,winid,pos,size,style,name);
    }
}  // namespace

BEGIN_WXLUA_BINDFUNC(panel)
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS_WIN(wxPanel)
        // Auto generated MACRO code for ctor of 'wxPanel':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxPanel':
        // =================================
        BIND_CTOR(wxWindow *, int, int, int, int)
        BIND_CTOR(wxWindow *, int, int, int, int, long)
        BIND_CTOR(wxWindow *, int, int, int, int, long, const wxString&)
        // Auto generated MACRO code for ctor of 'wxPanel':
        // =================================
        BIND_CTOR(wxWindow *)
        BIND_CTOR(wxWindow *, wxWindowID)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long, const wxString&)

            // Auto generated MACRO code for 'Create':
            // =================================
            BIND_F2MF_OVERLOAD(Create, 1,
            bool, (wxPanel*, wxWindow *))
            BIND_F2MF_OVERLOAD(Create, 2,
            bool, (wxPanel*, wxWindow *, wxWindowID))
            BIND_F2MF_OVERLOAD(Create, 3,
            bool, (wxPanel*, wxWindow *, wxWindowID, const wxPoint&))
            BIND_F2MF_OVERLOAD(Create, 4,
            bool, (wxPanel*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&))
            BIND_F2MF_OVERLOAD(Create, 5,
            bool, (wxPanel*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long))
            BIND_F2MF_OVERLOAD(Create, 6,
            bool, (wxPanel*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long, const wxString&))

            BIND_MF(wxPanel, OnSize)
            BIND_MF(wxPanel, InitDialog)
        END_BIND_CLASS(wxPanel)
    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(panel)
