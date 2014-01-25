#include <precompile.h>

// namespace for class wxItemContainerImmutable
namespace
{
    // Auto generated CPP code for 'FindString'
    // =================================
    int FindString1(wxItemContainerImmutable* self, const wxString& s)
    {
        return self->FindString(s);
    }
    int FindString2(wxItemContainerImmutable* self, const wxString& s, bool bCase)
    {
        return self->FindString(s,bCase);
    }
}  // namespace for wxItemContainerImmutable

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

        // Bind class wxControlWithItems
        BEGIN_BIND_CLASS(wxControlWithItems, wxControl, wxItemContainer)
        // Auto generated MACRO code for ctor of 'wxControlWithItems':
        // =================================
        BIND_MF_OVERLOAD(wxControlWithItems, SetClientData,
        void, (void *))
        BIND_MF_OVERLOAD(wxControlWithItems, GetClientData,
        void *, () const)
        BIND_MF_OVERLOAD(wxControlWithItems, SetClientObject,
        void, (wxClientData *))
        BIND_MF_OVERLOAD(wxControlWithItems, GetClientObject,
        wxClientData *, () const)
        BIND_MF_OVERLOAD(wxControlWithItems, SetClientData,
        void, (unsigned int, void*))
        BIND_MF_OVERLOAD(wxControlWithItems, GetClientData,
        void*, (unsigned int) const)
        BIND_MF_OVERLOAD(wxControlWithItems, SetClientObject,
        void, (unsigned int, wxClientData*))
        BIND_MF_OVERLOAD(wxControlWithItems, GetClientObject,
        wxClientData*, (unsigned int) const)
        BIND_MF(wxControlWithItems, ShouldInheritColours)
        END_BIND_CLASS(wxControlWithItems)

        // Bind class wxItemContainerImmutable
        BEGIN_BIND_CLASS(wxItemContainerImmutable)
        BIND_MF(wxItemContainerImmutable, GetCount)
        BIND_MF(wxItemContainerImmutable, IsEmpty)
        BIND_MF(wxItemContainerImmutable, GetString)
        BIND_MF(wxItemContainerImmutable, GetStrings)
        BIND_MF(wxItemContainerImmutable, SetString)
        // Auto generated MACRO code for 'FindString':
        // =================================
        BIND_F2MF_OVERLOAD(FindString, 1,
        int, (wxItemContainerImmutable*, const wxString&))
        BIND_F2MF_OVERLOAD(FindString, 2,
        int, (wxItemContainerImmutable*, const wxString&, bool))
        BIND_MF(wxItemContainerImmutable, SetSelection)
        BIND_MF(wxItemContainerImmutable, GetSelection)
        BIND_MF(wxItemContainerImmutable, SetStringSelection)
        BIND_MF(wxItemContainerImmutable, GetStringSelection)
        BIND_MF(wxItemContainerImmutable, Select)
        END_BIND_CLASS(wxItemContainerImmutable)

    END_BIND_MODULE(wx)
    return 0;
}