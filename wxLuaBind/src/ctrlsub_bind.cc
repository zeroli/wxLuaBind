#include <precompile.h>

REGISTER_WXLUA_PREBIND(ctrlsub, BIND_NO_CTRLSUB)
{
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS(wxItemContainer)
        // Auto generated MACRO code for ctor of 'wxItemContainer':
        // =================================
        BIND_MF_OVERLOAD(wxItemContainer, Append,
        int, (const wxString&))
        BIND_MF_OVERLOAD(wxItemContainer, Append,
        int, (const wxString&, void *))
        BIND_MF_OVERLOAD(wxItemContainer, Append,
        int, (const wxString&, wxClientData *))
        BIND_MF(wxItemContainer, AppendString)
        BIND_MF_OVERLOAD(wxItemContainer, Append,
        void, (const wxArrayString&))
        BIND_MF_OVERLOAD(wxItemContainer, Insert,
        int, (const wxString&, unsigned int))
        BIND_MF_OVERLOAD(wxItemContainer, Insert,
        int, (const wxString&, unsigned int, void *))
        BIND_MF_OVERLOAD(wxItemContainer, Insert,
        int, (const wxString&, unsigned int, wxClientData *))
        BIND_MF(wxItemContainer, Clear)
        BIND_MF(wxItemContainer, Delete)
        BIND_MF(wxItemContainer, SetClientData)
        BIND_MF(wxItemContainer, GetClientData)
        BIND_MF(wxItemContainer, SetClientObject)
        BIND_MF(wxItemContainer, GetClientObject)
        BIND_MF(wxItemContainer, HasClientObjectData)
        BIND_MF(wxItemContainer, HasClientUntypedData)
        END_BIND_CLASS(wxItemContainer)

    END_BIND_MODULE(wx)
    return 0;
}