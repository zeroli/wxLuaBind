#include <precompile.h>

REGISTER_WXLUA_PREBIND(wxobject, BIND_NO_OBJECT)
{
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS(wxObject)
            BIND_CTOR()
            BIND_CTOR(const wxObject&)

            // FIXME: cannot compile
            //BIND_OPERATOR(=, const wxObject&)
            BIND_MF_NAME(copy, wxObject, operator=)

            BIND_MF(wxObject, IsKindOf)

            BIND_MF(wxObject, GetRefData)
            BIND_MF(wxObject, SetRefData)
            BIND_MF(wxObject, Ref)
            BIND_MF(wxObject, UnRef)
            BIND_MF(wxObject, UnShare)

            BIND_MF(wxObject, IsSameAs)
        END_BIND_CLASS(wxObject)
    END_BIND_MODULE(wx)
    return 0;
}
