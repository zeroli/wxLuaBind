#include <precompile.h>

namespace
{
#if defined(__WXMSW__) || defined(__WXPM__) || defined(__WXPALMOS__)
    // Auto generated CPP code for 'FreeResource'
    // =================================
    bool FreeResource0(wxGDIObject* self)
    {
        return self->FreeResource();
    }
    bool FreeResource1(wxGDIObject* self, bool WXUNUSED(force))
    {
        return self->FreeResource(WXUNUSED(force));
    }
#endif
}  // namespace

BEGIN_WXLUA_BINDFUNC(gdiobj)
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS_OBJECT(wxGDIObject)
        BIND_CTOR()

        BIND_MF(wxGDIObject, IsNull)

#if defined(__WXMSW__) || defined(__WXPM__) || defined(__WXPALMOS__)
        BIND_MF(wxGDIObject, RealizeResource)
        // Auto generated MACRO code for 'FreeResource':
        // =================================
        BIND_F2MF_OVERLOAD(FreeResource, 0,
        bool, (wxGDIObject*))
        BIND_F2MF_OVERLOAD(FreeResource, 1,
        bool, (wxGDIObject*, bool))
        BIND_MF(wxGDIObject, IsFree)
        BIND_MF(wxGDIObject, GetResourceHandle)
#endif // defined(__WXMSW__) || defined(__WXPM__)

        END_BIND_CLASS(wxGDIObject)
    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(gdiobj)
