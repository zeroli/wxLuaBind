#include <precompile.h>

#include <wx/anidecod.h>

REGISTER_WXLUA_BIND(anidecod)
    BEGIN_BIND_MODULE(wx)
#if wxUSE_STREAMS && wxUSE_ICO_CUR
        // Bind class wxANIDecoder
        BEGIN_BIND_CLASS(wxANIDecoder)
        // Auto generated MACRO code for ctor of 'wxANIDecoder':
        // =================================
        BIND_CTOR()
        BIND_MF(wxANIDecoder, GetFrameSize)
        BIND_MF(wxANIDecoder, GetFramePosition)
        BIND_MF(wxANIDecoder, GetDisposalMethod)
        BIND_MF(wxANIDecoder, GetDelay)
        BIND_MF(wxANIDecoder, GetTransparentColour)
        BIND_MF(wxANIDecoder, CanRead)
        BIND_MF(wxANIDecoder, Load)
        BIND_MF(wxANIDecoder, ConvertToImage)
        BIND_MF(wxANIDecoder, Clone)
        BIND_MF(wxANIDecoder, GetType)
        END_BIND_CLASS(wxANIDecoder)
#endif
    END_BIND_MODULE(wx)
END_REGISTER(anidecod)

