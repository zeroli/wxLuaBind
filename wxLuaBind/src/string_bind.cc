#include <precompile.h>

REGISTER_WXLUA_BIND(wxstring)
{
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS(wxString)
            BIND_CTOR()
            BIND_CTOR(const wxString&)
            BIND_CTOR(wxChar, size_t)
            BIND_CTOR(size_t, wxChar)
            BIND_CTOR(const wxChar*)
            BIND_CTOR(const wxChar*, size_t)

            BIND_MF(wxString, Len)
            BIND_MF(wxString, IsEmpty)
            BIND_MF(wxString, Truncate)
            BIND_MF(wxString, Empty)
            BIND_MF(wxString, Clear)
        END_BIND_CLASS(wxString)
    END_BIND_MODULE(wx)
    return 0;
}
