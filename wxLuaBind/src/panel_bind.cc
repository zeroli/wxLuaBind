#include <precompile.h>

REGISTER_WXLUA_BIND(wxpanel)
{
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS_WIN(wxPanel)
            BIND_WIN_ALL_CTORS()
            BIND_CTOR(wxWindow*,int,int,int,int,long,const wxString&)

            BIND_WIN_CREATE_FUNC(wxPanel)

            BIND_MF(wxPanel, OnSize)
            BIND_MF(wxPanel, InitDialog)
        END_BIND_CLASS(wxPanel)
    END_BIND_MODULE(wx)

    return 0;
}