#include <precompile.h>

#include <wx/busyinfo.h>

BEGIN_WXLUA_BINDFUNC(busyinfo)
    BEGIN_BIND_MODULE(wx)
#if wxUSE_BUSYINFO
        BEGIN_BIND_CLASS_OBJECT(wxBusyInfo)
        // Auto generated MACRO code for ctor of 'wxBusyInfo':
        // =================================
        BIND_CTOR(const wxString&)
        BIND_CTOR(const wxString&, wxWindow *)
        END_BIND_CLASS(wxBusyInfo)
#endif
    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(busyinfo)

// TODO: how to implement RAII??

