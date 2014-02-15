#include <precompile.h>

typedef wxColourBase::ChannelType ChannelType;

namespace
{
    // Auto generated CPP code for 'Set'
    // =================================
    void Set3(wxColour* self, ChannelType red, ChannelType green, ChannelType blue)
    {
        return self->Set(red,green,blue);
    }
    void Set4(wxColour* self, ChannelType red, ChannelType green, ChannelType blue, ChannelType alpha)
    {
        return self->Set(red,green,blue,alpha);
    }

    // Auto generated CPP code for 'GetAsString'
    // =================================
    wxString GetAsString0(wxColour* self)
    {
        return self->GetAsString();
    }
    wxString GetAsString1(wxColour* self, long flags)
    {
        return self->GetAsString(flags);
    }
}  // namespace

REGISTER_WXLUA_BIND(color)
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS(wxColour, wxGDIObject)
        // Auto generated MACRO code for ctor of 'wxColour':
        // =================================
        BIND_CTOR()
        BIND_CTOR(ChannelType, ChannelType, ChannelType)
        BIND_CTOR(ChannelType, ChannelType, ChannelType, ChannelType)
        // Auto generated MACRO code for ctor of 'wxColour':
        // =================================
        BIND_CTOR(unsigned long)
        // Auto generated MACRO code for ctor of 'wxColour':
        // =================================
        BIND_CTOR(const wxString&)
        // Auto generated MACRO code for ctor of 'wxColour':
        // =================================
        BIND_CTOR(const wxChar *)
        // Auto generated MACRO code for 'Set':
        // =================================
        BIND_F2MF_OVERLOAD(Set, 3,
        void, (wxColour*, ChannelType, ChannelType, ChannelType))
        BIND_F2MF_OVERLOAD(Set, 4,
        void, (wxColour*, ChannelType, ChannelType, ChannelType, ChannelType))
        BIND_MF_OVERLOAD(wxColour, Set,
        bool, (const wxChar *))
        BIND_MF_OVERLOAD(wxColour, Set,
        bool, (const wxString &))
        BIND_MF_OVERLOAD(wxColour, Set,
        void, (unsigned long))
        BIND_MF(wxColour, Ok)
        BIND_MF(wxColour, IsOk)
        BIND_MF(wxColour, Red)
        BIND_MF(wxColour, Green)
        BIND_MF(wxColour, Blue)
        BIND_MF(wxColour, Alpha)
        // Auto generated MACRO code for 'GetAsString':
        // =================================
        BIND_F2MF_OVERLOAD(GetAsString, 0,
        wxString, (wxColour*))
        BIND_F2MF_OVERLOAD(GetAsString, 1,
        wxString, (wxColour*, long))
        //BIND_OP(==, other<const wxColour&>)
        BIND_MF_NAME(eq, wxColour, operator ==)
        // FIXME: cannot bind !=
        BIND_MF_NAME(ne, wxColour, operator !=)

        END_BIND_CLASS(wxColour)
    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
        BIND_VARIABLE(wxNullColour)
    END_LUA_TABLE(wx)
END_REGISTER(colour)
