#include <precompile.h>

REGISTER_WXLUA_BIND(wxtooltip)
{
    BEGIN_BIND_MODULE(wx)
#if wxUSE_TOOLTIPS
        BEGIN_BIND_CLASS(wxToolTip)
            BIND_CTOR(const wxString&)

            BIND_MF(wxToolTip, SetTip)
            BIND_MF(wxToolTip, SetWindow)
            BIND_MF(wxToolTip, Enable)
            BEGIN_BIND_SCOPE()
            BIND_SMF(wxToolTip, SetDelay)
            END_BIND_SCOPE()

        END_BIND_CLASS(wxToolTip)
#endif
    END_BIND_MODULE(wx)
    return 0;
}