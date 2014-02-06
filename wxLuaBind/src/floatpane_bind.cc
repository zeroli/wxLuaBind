#include <precompile.h>

#include <wx/aui/aui.h>

#if defined( __WXMSW__ ) || defined( __WXMAC__ ) ||  defined( __WXGTK__ )
#include "wx/minifram.h"

// namespace for class wxMiniFrame
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create3(wxMiniFrame* self, wxWindow * parent, wxWindowID id, const wxString& title)
    {
        return self->Create(parent,id,title);
    }
    bool Create4(wxMiniFrame* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos)
    {
        return self->Create(parent,id,title,pos);
    }
    bool Create5(wxMiniFrame* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,title,pos,size);
    }
    bool Create6(wxMiniFrame* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,title,pos,size,style);
    }
    bool Create7(wxMiniFrame* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
    {
        return self->Create(parent,id,title,pos,size,style,name);
    }
}  // namespace for wxMiniFrame

#else
#endif

REGISTER_WXLUA_BIND(floatpane)
{
#if wxUSE_AUI
    BEGIN_BIND_MODULE(wx)
#if defined( __WXMSW__ ) || defined( __WXMAC__ ) ||  defined( __WXGTK__ )
        // Bind class wxMiniFrame
        BEGIN_BIND_CLASS(wxMiniFrame, wxFrame)
        // Auto generated MACRO code for ctor of 'wxMiniFrame':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxMiniFrame*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxMiniFrame*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxMiniFrame*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxMiniFrame*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxMiniFrame*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxString&))
        // Auto generated MACRO code for ctor of 'wxMiniFrame':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxString&)
        END_BIND_CLASS(wxMiniFrame)
#endif

        // Bind class wxAuiFloatingFrame
        BEGIN_BIND_CLASS(wxAuiFloatingFrame, wxAuiFloatingFrameBaseClass)
        // Auto generated MACRO code for ctor of 'wxAuiFloatingFrame':
        // =================================
        BIND_CTOR(wxWindow*, wxAuiManager*, const wxAuiPaneInfo&)
        BIND_CTOR(wxWindow*, wxAuiManager*, const wxAuiPaneInfo&, wxWindowID)
        BIND_CTOR(wxWindow*, wxAuiManager*, const wxAuiPaneInfo&, wxWindowID, long)
        BIND_MF(wxAuiFloatingFrame, SetPaneWindow)
        BIND_MF(wxAuiFloatingFrame, GetOwnerManager)
        END_BIND_CLASS(wxAuiFloatingFrame)

    END_BIND_MODULE(wx)
#endif // wxUSE_AUI
    return 0;
}