#include <precompile.h>

BEGIN_WXLUA_BINDFUNC(object)
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CPPCLASS(wxObject)
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
        // Bind class wxObjectRefData
        BEGIN_BIND_CLASS(wxObjectRefData)
        BIND_CTOR()
        BIND_MF(wxObjectRefData, GetRefCount)
        END_BIND_CLASS(wxObjectRefData)

    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(object)
