#include <precompile.h>

#if wxUSE_TOOLTIPS
BEGIN_WXLUA_BINDFUNC(tooltip)
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS(wxToolTip)
            BIND_CTOR(const wxString&)

            BIND_MF(wxToolTip, SetTip)
            BIND_MF(wxToolTip, SetWindow)
            BIND_MF(wxToolTip, Enable)
            BEGIN_BIND_SCOPE()
            BIND_SMF(wxToolTip, SetDelay)
            END_BIND_SCOPE()

        END_BIND_CLASS(wxToolTip)
    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(tooltip)
#endif
