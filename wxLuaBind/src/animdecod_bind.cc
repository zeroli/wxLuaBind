#include <precompile.h>

#include <wx/animdecod.h>

BEGIN_WXLUA_BINDFUNC(animdecod)
    BEGIN_BIND_MODULE(wx)
        // Bind class wxAnimationDecoder
        BEGIN_BIND_CLASS(wxAnimationDecoder, wxObjectRefData)
        // Auto generated MACRO code for ctor of 'wxAnimationDecoder':
        // =================================
        BIND_MF(wxAnimationDecoder, Load)
        BIND_MF(wxAnimationDecoder, CanRead)
        BIND_MF(wxAnimationDecoder, Clone)
        BIND_MF(wxAnimationDecoder, GetType)
        BIND_MF(wxAnimationDecoder, ConvertToImage)
        BIND_MF(wxAnimationDecoder, GetFrameSize)
        BIND_MF(wxAnimationDecoder, GetFramePosition)
        BIND_MF(wxAnimationDecoder, GetDisposalMethod)
        BIND_MF(wxAnimationDecoder, GetDelay)
        BIND_MF(wxAnimationDecoder, GetTransparentColour)
        BIND_MF(wxAnimationDecoder, GetAnimationSize)
        BIND_MF(wxAnimationDecoder, GetBackgroundColour)
        BIND_MF(wxAnimationDecoder, GetFrameCount)
        END_BIND_CLASS(wxAnimationDecoder)

    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
    // Bind enum wxAnimationDisposal (totally 4)
    BIND_ENUM(wxANIM_UNSPECIFIED)
    BIND_ENUM(wxANIM_DONOTREMOVE)
    BIND_ENUM(wxANIM_TOBACKGROUND)
    BIND_ENUM(wxANIM_TOPREVIOUS)

    // Bind enum wxAnimationType (totally 4)
    BIND_ENUM(wxANIMATION_TYPE_INVALID)
    BIND_ENUM(wxANIMATION_TYPE_GIF)
    BIND_ENUM(wxANIMATION_TYPE_ANI)
    BIND_ENUM(wxANIMATION_TYPE_ANY)

    END_LUA_TABLE(wx)
END_WXLUA_BINDFUNC(animdecod)
