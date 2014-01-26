#include <precompile.h>

// namespace for class wxShadowObject
namespace
{
    // Auto generated CPP code for 'AddField'
    // =================================
    void AddField1(wxShadowObject* self, const wxString & name)
    {
        return self->AddField(name);
    }
    void AddField2(wxShadowObject* self, const wxString & name, void* initialValue)
    {
        return self->AddField(name,initialValue);
    }

    // Auto generated CPP code for 'GetField'
    // =================================
    void* GetField1(wxShadowObject* self, const wxString & name)
    {
        return self->GetField(name);
    }
    void* GetField2(wxShadowObject* self, const wxString & name, void * defaultValue)
    {
        return self->GetField(name,defaultValue);
    }
}  // namespace for wxShadowObject

REGISTER_WXLUA_PREBIND(clntdata, BIND_NO_CLIENTDATA)
{
    BEGIN_LUA_TABLE(wx)
        // Bind enum wxClientDataType (totally 3)
        BIND_ENUM(wxClientData_None)
        BIND_ENUM(wxClientData_Object)
        BIND_ENUM(wxClientData_Void)

    END_LUA_TABLE(wx)

    BEGIN_BIND_MODULE(wx)
        // Bind class wxClientData
        BEGIN_BIND_CLASS(wxClientData)
            // Auto generated MACRO code for ctor of 'wxClientData':
            // =================================
            BIND_CTOR()
        END_BIND_CLASS(wxClientData)

        // Bind class wxStringClientData
        BEGIN_BIND_CLASS(wxStringClientData, wxClientData)
            BIND_CTOR()
            BIND_CTOR(const wxString&)
            BIND_MF(wxStringClientData, SetData)
            BIND_MF(wxStringClientData, GetData)
        END_BIND_CLASS(wxStringClientData)

        // Bind class wxClientDataContainer
        BEGIN_BIND_CLASS(wxClientDataContainer)
            // Auto generated MACRO code for ctor of 'wxClientDataContainer':
            // =================================
            BIND_CTOR()
            BIND_MF(wxClientDataContainer, SetClientObject)
            BIND_MF(wxClientDataContainer, GetClientObject)
            BIND_MF(wxClientDataContainer, SetClientData)
            BIND_MF(wxClientDataContainer, GetClientData)
        END_BIND_CLASS(wxClientDataContainer)

        // Bind class wxClientDataDictionaryPair
        BEGIN_BIND_CLASS(wxClientDataDictionaryPair)
            BIND_CTOR(size_t)
            BIND_MD(wxClientDataDictionaryPair, index)
            BIND_MD(wxClientDataDictionaryPair, data)
        END_BIND_CLASS(wxClientDataDictionaryPair)

        // Bind class wxClientDataDictionary
        BEGIN_BIND_CLASS(wxClientDataDictionary)
            // Auto generated MACRO code for ctor of 'wxClientDataDictionary':
            // =================================
            BIND_CTOR()
            BIND_MF(wxClientDataDictionary, DestroyData)
            BIND_MF(wxClientDataDictionary, Set)
            BIND_MF(wxClientDataDictionary, Get)
            BIND_MF(wxClientDataDictionary, Delete)
        END_BIND_CLASS(wxClientDataDictionary)

    END_BIND_MODULE(wx)

    return 0;
}