#include <precompile.h>

#include <wx/spinctrl.h>

// namespace for class wxSpinButton
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create1(wxSpinButton* self, wxWindow * parent)
    {
        return self->Create(parent);
    }
    bool Create2(wxSpinButton* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxSpinButton* self, wxWindow * parent, wxWindowID id, const wxPoint& pos)
    {
        return self->Create(parent,id,pos);
    }
    bool Create4(wxSpinButton* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,pos,size);
    }
    bool Create5(wxSpinButton* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,pos,size,style);
    }
    bool Create6(wxSpinButton* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
    {
        return self->Create(parent,id,pos,size,style,name);
    }
}  // namespace for wxSpinButton

// namespace for class wxSpinCtrl
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create1(wxSpinCtrl* self, wxWindow * parent)
    {
        return self->Create(parent);
    }
    bool Create2(wxSpinCtrl* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxSpinCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value)
    {
        return self->Create(parent,id,value);
    }
    bool Create4(wxSpinCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos)
    {
        return self->Create(parent,id,value,pos);
    }
    bool Create5(wxSpinCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,value,pos,size);
    }
    bool Create6(wxSpinCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,value,pos,size,style);
    }
    bool Create7(wxSpinCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style, int min)
    {
        return self->Create(parent,id,value,pos,size,style,min);
    }
    bool Create8(wxSpinCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style, int min, int max)
    {
        return self->Create(parent,id,value,pos,size,style,min,max);
    }
    bool Create9(wxSpinCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style, int min, int max, int initial)
    {
        return self->Create(parent,id,value,pos,size,style,min,max,initial);
    }
    bool Create10(wxSpinCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style, int min, int max, int initial, const wxString& name)
    {
        return self->Create(parent,id,value,pos,size,style,min,max,initial,name);
    }

    // Auto generated CPP code for 'Enable'
    // =================================
    bool Enable0(wxSpinCtrl* self)
    {
        return self->Enable();
    }
    bool Enable1(wxSpinCtrl* self, bool enable)
    {
        return self->Enable(enable);
    }

    // Auto generated CPP code for 'Show'
    // =================================
    bool Show0(wxSpinCtrl* self)
    {
        return self->Show();
    }
    bool Show1(wxSpinCtrl* self, bool show)
    {
        return self->Show(show);
    }
}  // namespace for wxSpinCtrl

BEGIN_WXLUA_BINDFUNC(spinctrl)
    BEGIN_BIND_MODULE(wx)
        // Bind class wxSpinButtonBase
        BEGIN_BIND_CLASS_CONTROL(wxSpinButtonBase)
        // Auto generated MACRO code for ctor of 'wxSpinButtonBase':
        // =================================
        BIND_MF(wxSpinButtonBase, GetValue)
        BIND_MF(wxSpinButtonBase, GetMin)
        BIND_MF(wxSpinButtonBase, GetMax)
        BIND_MF(wxSpinButtonBase, SetValue)
        BIND_MF(wxSpinButtonBase, SetMin)
        BIND_MF(wxSpinButtonBase, SetMax)
        BIND_MF(wxSpinButtonBase, SetRange)
        BIND_MF(wxSpinButtonBase, IsVertical)
        END_BIND_CLASS(wxSpinButtonBase)

        // Bind class wxSpinButton
        BEGIN_BIND_CPPCLASS(wxSpinButton, wxSpinButtonBase)
        // Auto generated MACRO code for ctor of 'wxSpinButton':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxSpinButton':
        // =================================
        BIND_CTOR(wxWindow *)
        BIND_CTOR(wxWindow *, wxWindowID)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 1,
        bool, (wxSpinButton*, wxWindow *))
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxSpinButton*, wxWindow *, wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxSpinButton*, wxWindow *, wxWindowID, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxSpinButton*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxSpinButton*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxSpinButton*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long, const wxString&))
        END_BIND_CLASS(wxSpinButton)

        // Bind class wxSpinEvent
        BEGIN_BIND_CLASS(wxSpinEvent, wxNotifyEvent)
        // Auto generated MACRO code for ctor of 'wxSpinEvent':
        // =================================
        BIND_CTOR(wxEventType)
        BIND_CTOR(wxEventType, int)
        BIND_MF(wxSpinEvent, GetPosition)
        BIND_MF(wxSpinEvent, SetPosition)
        END_BIND_CLASS(wxSpinEvent)

        END_BIND_MODULE(wx)

        BEGIN_LUA_TABLE(wx)
        BIND_MACRO(wxSPIN_BUTTON_NAME)
        END_LUA_TABLE(wx)

#if wxUSE_SPINCTRL
    BEGIN_BIND_MODULE(wx)
        // Bind class wxSpinCtrl
        BEGIN_BIND_CPPCLASS(wxSpinCtrl, wxSpinButton)
        // Auto generated MACRO code for ctor of 'wxSpinCtrl':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxSpinCtrl':
        // =================================
        BIND_CTOR(wxWindow *)
        BIND_CTOR(wxWindow *, wxWindowID)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, int)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, int, int)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, int, int, int)
#if 0 // FIXME:
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, int, int, int, const wxString&)
#endif
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 1,
        bool, (wxSpinCtrl*, wxWindow *))
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxSpinCtrl*, wxWindow *, wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxSpinCtrl*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxSpinCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxSpinCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxSpinCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxSpinCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, int))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxSpinCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, int, int))
        BIND_F2MF_OVERLOAD(Create, 9,
        bool, (wxSpinCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, int, int, int))

#if 0 // FIXME:
        BIND_F2MF_OVERLOAD(Create, 10,
        bool, (wxSpinCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, int, int, int, const wxString&))
#endif
        BIND_MF_OVERLOAD(wxSpinCtrl, SetValue,
        void, (const wxString&))
        BIND_MF(wxSpinCtrl, SetSelection)
        BIND_MF_OVERLOAD(wxSpinCtrl, SetValue,
        void, (int))
        BIND_MF(wxSpinCtrl, GetValue)
        BIND_MF(wxSpinCtrl, SetFont)
        BIND_MF(wxSpinCtrl, SetFocus)
        // Auto generated MACRO code for 'Enable':
        // =================================
        BIND_F2MF_OVERLOAD(Enable, 0,
        bool, (wxSpinCtrl*))
        BIND_F2MF_OVERLOAD(Enable, 1,
        bool, (wxSpinCtrl*, bool))
        // Auto generated MACRO code for 'Show':
        // =================================
        BIND_F2MF_OVERLOAD(Show, 0,
        bool, (wxSpinCtrl*))
        BIND_F2MF_OVERLOAD(Show, 1,
        bool, (wxSpinCtrl*, bool))
        BIND_MF(wxSpinCtrl, Reparent)
        BIND_MF(wxSpinCtrl, AcceptsFocus)
        END_BIND_CLASS(wxSpinCtrl)

    END_BIND_MODULE(wx)
#endif  // wxUSE_SPINCTRL
END_WXLUA_BINDFUNC(spinctrl)
