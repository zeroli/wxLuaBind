#include <precompile.h>

#if wxUSE_TOOLTIPS
BEGIN_WXLUA_BINDFUNC(tooltip)
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS(wxToolTip)
            BIND_CTOR(const wxString&)

            BIND_MF(wxToolTip, SetTip)
            BIND_MF(wxToolTip, GetTip)
#ifdef __WXMSW__
            BIND_MF(wxToolTip, SetWindow)
#elif defined(__WXGTK20__)
            BIND_MF(wxToolTip, GetWindow)
            BIND_MF(wxToolTip, IsOk)
#endif
            BEGIN_BIND_SCOPE()
            BIND_SMF(wxToolTip, SetDelay)
            END_BIND_SCOPE()

        END_BIND_CLASS(wxToolTip)
    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(tooltip)
#endif
