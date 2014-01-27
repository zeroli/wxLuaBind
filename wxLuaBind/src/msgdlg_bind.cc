#include <precompile.h>

REGISTER_WXLUA_BIND(msgdlg)
{
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
    return 0;
}