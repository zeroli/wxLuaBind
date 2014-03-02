#include <precompile.h>

BEGIN_WXLUA_BINDFUNC(msgdlg)
    BEGIN_BIND_MODULE(wx)
        // Auto generated MACRO code for 'wxMessageBox':
        // =================================
        BIND_FUNC_OVERLOAD(wxMessageBox,
            int, (const wxString&))
        BIND_FUNC_OVERLOAD(wxMessageBox,
            int, (const wxString&, const wxString&))
        BIND_FUNC_OVERLOAD(wxMessageBox,
            int, (const wxString&, const wxString&, long))
        BIND_FUNC_OVERLOAD(wxMessageBox,
            int, (const wxString&, const wxString&, long, wxWindow*))
        BIND_FUNC_OVERLOAD(wxMessageBox,
            int, (const wxString&, const wxString&, long, wxWindow*, int))
        BIND_FUNC_OVERLOAD(wxMessageBox,
            int, (const wxString&, const wxString&, long, wxWindow*, int, int))

    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(msgdlg)
