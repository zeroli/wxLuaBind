#include <precompile.h>

namespace
{
    // Auto generated CPP code for 'Set'
    // =================================
    void Set3(wxAcceleratorEntry* self, int flags, int keyCode, int cmd)
    {
        return self->Set(flags,keyCode,cmd);
    }
    void Set4(wxAcceleratorEntry* self, int flags, int keyCode, int cmd, wxMenuItem * item)
    {
        return self->Set(flags,keyCode,cmd,item);
    }
}  // namespace

REGISTER_WXLUA_BIND(accel)
    BEGIN_BIND_MODULE(wx)
        // wxAcceleratorEntry binding
        BEGIN_BIND_CLASS(wxAcceleratorEntry)
        // Auto generated MACRO code for ctor of 'wxAcceleratorEntry':
        // =================================
        BIND_CTOR(int)
        BIND_CTOR(int, int)
        BIND_CTOR(int, int, int)
        BIND_CTOR(int, int, int, wxMenuItem *)
        // Auto generated MACRO code for ctor of 'wxAcceleratorEntry':
        // =================================
        BIND_CTOR(const wxAcceleratorEntry&)
        BEGIN_BIND_SCOPE()
        BIND_SMF(wxAcceleratorEntry, Create)
        END_BIND_SCOPE()
        BIND_MF_NAME(copy, wxAcceleratorEntry, operator =)
        // Auto generated MACRO code for 'Set':
        // =================================
        BIND_F2MF_OVERLOAD(Set, 3,
        void, (wxAcceleratorEntry*, int, int, int))
        BIND_F2MF_OVERLOAD(Set, 4,
        void, (wxAcceleratorEntry*, int, int, int, wxMenuItem *))
        BIND_MF(wxAcceleratorEntry, SetMenuItem)
        BIND_MF(wxAcceleratorEntry, GetFlags)
        BIND_MF(wxAcceleratorEntry, GetKeyCode)
        BIND_MF(wxAcceleratorEntry, GetCommand)
        BIND_MF(wxAcceleratorEntry, GetMenuItem)
        BIND_MF_NAME(eq, wxAcceleratorEntry, operator ==)
        BIND_MF_NAME(ne, wxAcceleratorEntry, operator !=)
#if defined(__WXMOTIF__)
        BIND_MF(wxAcceleratorEntry, MatchesEvent)
#endif
        BIND_MF(wxAcceleratorEntry, IsOk)
        BIND_MF(wxAcceleratorEntry, ToString)
        BIND_MF(wxAcceleratorEntry, FromString)
        END_BIND_CLASS(wxAcceleratorEntry)

    END_BIND_MODULE(wx)
END_REGISTER(accel)
