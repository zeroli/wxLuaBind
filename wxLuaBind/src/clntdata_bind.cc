#include <precompile.h>

REGISTER_WXLUA_PREBIND(clntdata, BIND_NO_CLIENTDATA)
{
    BEGIN_BIND_MODULE(wx)
        // wxClientDataContainer bind
        BEGIN_BIND_CLASS(wxClientDataContainer)
        // Auto generated MACRO code for ctor of 'wxClientDataContainer':
        // =================================
        BIND_CTOR()
        BIND_MF(wxClientDataContainer, SetClientObject)
        BIND_MF(wxClientDataContainer, GetClientObject)
        BIND_MF(wxClientDataContainer, SetClientData)
        BIND_MF(wxClientDataContainer, GetClientData)
        END_BIND_CLASS(wxClientDataContainer)

    END_BIND_MODULE(wx)

    return 0;
}