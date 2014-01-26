#include <precompile.h>

#include <wx/combo.h>

// namespace for class wxComboCtrlBase
namespace
{
    // Auto generated CPP code for 'Enable'
    // =================================
    bool Enable0(wxComboCtrlBase* self)
    {
        return self->Enable();
    }
    bool Enable1(wxComboCtrlBase* self, bool enable)
    {
        return self->Enable(enable);
    }

    // Auto generated CPP code for 'Show'
    // =================================
    bool Show0(wxComboCtrlBase* self)
    {
        return self->Show();
    }
    bool Show1(wxComboCtrlBase* self, bool show)
    {
        return self->Show(show);
    }

    // Auto generated CPP code for 'SetValueWithEvent'
    // =================================
    void SetValueWithEvent1(wxComboCtrlBase* self, const wxString& value)
    {
        return self->SetValueWithEvent(value);
    }
    void SetValueWithEvent2(wxComboCtrlBase* self, const wxString& value, bool withEvent)
    {
        return self->SetValueWithEvent(value,withEvent);
    }

    // Auto generated CPP code for 'SetButtonPosition'
    // =================================
    void SetButtonPosition0(wxComboCtrlBase* self)
    {
        return self->SetButtonPosition();
    }
    void SetButtonPosition1(wxComboCtrlBase* self, int width)
    {
        return self->SetButtonPosition(width);
    }
    void SetButtonPosition2(wxComboCtrlBase* self, int width, int height)
    {
        return self->SetButtonPosition(width,height);
    }
    void SetButtonPosition3(wxComboCtrlBase* self, int width, int height, int side)
    {
        return self->SetButtonPosition(width,height,side);
    }
    void SetButtonPosition4(wxComboCtrlBase* self, int width, int height, int side, int spacingX)
    {
        return self->SetButtonPosition(width,height,side,spacingX);
    }

    // Auto generated CPP code for 'SetButtonBitmaps'
    // =================================
    void SetButtonBitmaps1(wxComboCtrlBase* self, const wxBitmap& bmpNormal)
    {
        return self->SetButtonBitmaps(bmpNormal);
    }
    void SetButtonBitmaps2(wxComboCtrlBase* self, const wxBitmap& bmpNormal, bool pushButtonBg)
    {
        return self->SetButtonBitmaps(bmpNormal,pushButtonBg);
    }
    void SetButtonBitmaps3(wxComboCtrlBase* self, const wxBitmap& bmpNormal, bool pushButtonBg, const wxBitmap& bmpPressed)
    {
        return self->SetButtonBitmaps(bmpNormal,pushButtonBg,bmpPressed);
    }
    void SetButtonBitmaps4(wxComboCtrlBase* self, const wxBitmap& bmpNormal, bool pushButtonBg, const wxBitmap& bmpPressed, const wxBitmap& bmpHover)
    {
        return self->SetButtonBitmaps(bmpNormal,pushButtonBg,bmpPressed,bmpHover);
    }
    void SetButtonBitmaps5(wxComboCtrlBase* self, const wxBitmap& bmpNormal, bool pushButtonBg, const wxBitmap& bmpPressed, const wxBitmap& bmpHover, const wxBitmap& bmpDisabled)
    {
        return self->SetButtonBitmaps(bmpNormal,pushButtonBg,bmpPressed,bmpHover,bmpDisabled);
    }

    // Auto generated CPP code for 'UseAltPopupWindow'
    // =================================
    void UseAltPopupWindow0(wxComboCtrlBase* self)
    {
        return self->UseAltPopupWindow();
    }
    void UseAltPopupWindow1(wxComboCtrlBase* self, bool enable)
    {
        return self->UseAltPopupWindow(enable);
    }

    // Auto generated CPP code for 'EnablePopupAnimation'
    // =================================
    void EnablePopupAnimation0(wxComboCtrlBase* self)
    {
        return self->EnablePopupAnimation();
    }
    void EnablePopupAnimation1(wxComboCtrlBase* self, bool enable)
    {
        return self->EnablePopupAnimation(enable);
    }
}  // namespace for wxComboCtrlBase

// namespace for class wxComboCtrl
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create1(wxComboCtrl* self, wxWindow * parent)
    {
        return self->Create(parent);
    }
    bool Create2(wxComboCtrl* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxComboCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value)
    {
        return self->Create(parent,id,value);
    }
    bool Create4(wxComboCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos)
    {
        return self->Create(parent,id,value,pos);
    }
    bool Create5(wxComboCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,value,pos,size);
    }
    bool Create6(wxComboCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,value,pos,size,style);
    }
    bool Create7(wxComboCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,value,pos,size,style,validator);
    }
    bool Create8(wxComboCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,value,pos,size,style,validator,name);
    }
}  // namespace for wxComboCtrl

REGISTER_WXLUA_PREBIND(combo, BIND_NO_COMBO)
{
    BEGIN_BIND_MODULE(wx)
#if wxUSE_COMBOCTRL
        // Bind class wxComboCtrlBase
        BEGIN_BIND_CLASS_CONTROL(wxComboCtrlBase)
        BIND_MF(wxComboCtrlBase, Create)
        BIND_MF(wxComboCtrlBase, ShowPopup)
        BIND_MF(wxComboCtrlBase, HidePopup)
        BIND_MF(wxComboCtrlBase, OnButtonClick)
        BIND_MF(wxComboCtrlBase, IsPopupShown)
        BIND_MF(wxComboCtrlBase, SetPopupControl)
        BIND_MF(wxComboCtrlBase, GetPopupControl)
        BIND_MF(wxComboCtrlBase, GetPopupWindow)
        BIND_MF(wxComboCtrlBase, GetTextCtrl)
        BIND_MF(wxComboCtrlBase, GetButton)
        // Auto generated MACRO code for 'Enable':
        // =================================
        BIND_F2MF_OVERLOAD(Enable, 0,
        bool, (wxComboCtrlBase*))
        BIND_F2MF_OVERLOAD(Enable, 1,
        bool, (wxComboCtrlBase*, bool))
        // Auto generated MACRO code for 'Show':
        // =================================
        BIND_F2MF_OVERLOAD(Show, 0,
        bool, (wxComboCtrlBase*))
        BIND_F2MF_OVERLOAD(Show, 1,
        bool, (wxComboCtrlBase*, bool))
        BIND_MF(wxComboCtrlBase, SetFont)
#if wxUSE_VALIDATORS
        BIND_MF(wxComboCtrlBase, SetValidator)
        BIND_MF(wxComboCtrlBase, GetValidator)
#endif
        BIND_MF(wxComboCtrlBase, GetValue)
        BIND_MF(wxComboCtrlBase, SetValue)
        BIND_MF(wxComboCtrlBase, Copy)
        BIND_MF(wxComboCtrlBase, Cut)
        BIND_MF(wxComboCtrlBase, Paste)
        BIND_MF(wxComboCtrlBase, SetInsertionPoint)
        BIND_MF(wxComboCtrlBase, SetInsertionPointEnd)
        BIND_MF(wxComboCtrlBase, GetInsertionPoint)
        BIND_MF(wxComboCtrlBase, GetLastPosition)
        BIND_MF(wxComboCtrlBase, Replace)
        BIND_MF(wxComboCtrlBase, Remove)
        BIND_MF(wxComboCtrlBase, SetSelection)
        BIND_MF(wxComboCtrlBase, Undo)
        BIND_MF(wxComboCtrlBase, SetText)
        // Auto generated MACRO code for 'SetValueWithEvent':
        // =================================
        BIND_F2MF_OVERLOAD(SetValueWithEvent, 1,
        void, (wxComboCtrlBase*, const wxString&))
        BIND_F2MF_OVERLOAD(SetValueWithEvent, 2,
        void, (wxComboCtrlBase*, const wxString&, bool))
        BIND_MF(wxComboCtrlBase, SetPopupMinWidth)
        BIND_MF(wxComboCtrlBase, SetPopupMaxHeight)
        BIND_MF(wxComboCtrlBase, SetPopupExtents)
        BIND_MF(wxComboCtrlBase, SetCustomPaintWidth)
        BIND_MF(wxComboCtrlBase, GetCustomPaintWidth)
        BIND_MF(wxComboCtrlBase, SetPopupAnchor)
        // Auto generated MACRO code for 'SetButtonPosition':
        // =================================
        BIND_F2MF_OVERLOAD(SetButtonPosition, 0,
        void, (wxComboCtrlBase*))
        BIND_F2MF_OVERLOAD(SetButtonPosition, 1,
        void, (wxComboCtrlBase*, int))
        BIND_F2MF_OVERLOAD(SetButtonPosition, 2,
        void, (wxComboCtrlBase*, int, int))
        BIND_F2MF_OVERLOAD(SetButtonPosition, 3,
        void, (wxComboCtrlBase*, int, int, int))
        BIND_F2MF_OVERLOAD(SetButtonPosition, 4,
        void, (wxComboCtrlBase*, int, int, int, int))
        BIND_MF(wxComboCtrlBase, GetButtonSize)
        // Auto generated MACRO code for 'SetButtonBitmaps':
        // =================================
        BIND_F2MF_OVERLOAD(SetButtonBitmaps, 1,
        void, (wxComboCtrlBase*, const wxBitmap&))
        BIND_F2MF_OVERLOAD(SetButtonBitmaps, 2,
        void, (wxComboCtrlBase*, const wxBitmap&, bool))
        BIND_F2MF_OVERLOAD(SetButtonBitmaps, 3,
        void, (wxComboCtrlBase*, const wxBitmap&, bool, const wxBitmap&))
        BIND_F2MF_OVERLOAD(SetButtonBitmaps, 4,
        void, (wxComboCtrlBase*, const wxBitmap&, bool, const wxBitmap&, const wxBitmap&))
        BIND_F2MF_OVERLOAD(SetButtonBitmaps, 5,
        void, (wxComboCtrlBase*, const wxBitmap&, bool, const wxBitmap&, const wxBitmap&, const wxBitmap&))
        BIND_MF(wxComboCtrlBase, SetTextIndent)
        BIND_MF(wxComboCtrlBase, GetTextIndent)
        BIND_MF(wxComboCtrlBase, GetTextRect)
        // Auto generated MACRO code for 'UseAltPopupWindow':
        // =================================
        BIND_F2MF_OVERLOAD(UseAltPopupWindow, 0,
        void, (wxComboCtrlBase*))
        BIND_F2MF_OVERLOAD(UseAltPopupWindow, 1,
        void, (wxComboCtrlBase*, bool))
        // Auto generated MACRO code for 'EnablePopupAnimation':
        // =================================
        BIND_F2MF_OVERLOAD(EnablePopupAnimation, 0,
        void, (wxComboCtrlBase*))
        BIND_F2MF_OVERLOAD(EnablePopupAnimation, 1,
        void, (wxComboCtrlBase*, bool))
        BIND_MF(wxComboCtrlBase, IsKeyPopupToggle)
        BIND_MF(wxComboCtrlBase, PrepareBackground)
        BIND_MF(wxComboCtrlBase, ShouldDrawFocus)
        BIND_MF(wxComboCtrlBase, GetBitmapNormal)
        BIND_MF(wxComboCtrlBase, GetBitmapPressed)
        BIND_MF(wxComboCtrlBase, GetBitmapHover)
        BIND_MF(wxComboCtrlBase, GetBitmapDisabled)
        BIND_MF(wxComboCtrlBase, GetInternalFlags)
        BIND_MF(wxComboCtrlBase, IsCreated)
        BIND_MF(wxComboCtrlBase, OnPopupDismiss)
        BIND_MF(wxComboCtrlBase, IsPopupWindowState)
        BIND_MF(wxComboCtrlBase, GetPopupWindowState)
        BIND_MF(wxComboCtrlBase, SetCtrlMainWnd)

        BEGIN_CLASS_ENUM(constant)
        // Bind enum  (totally 3)
        BIND_CLASS_ENUM(wxComboCtrlBase, Hidden)
        BIND_CLASS_ENUM(wxComboCtrlBase, Animating)
        BIND_CLASS_ENUM(wxComboCtrlBase, Visible)
        END_CLASS_ENUM(constant)

        END_BIND_CLASS(wxComboCtrlBase)

        // Bind class wxComboPopup
        BEGIN_BIND_CLASS(wxComboPopup)
        BIND_MF(wxComboPopup, Init)
        BIND_MF(wxComboPopup, Create)
        BIND_MF(wxComboPopup, GetControl)
        BIND_MF(wxComboPopup, OnPopup)
        BIND_MF(wxComboPopup, OnDismiss)
        BIND_MF(wxComboPopup, SetStringValue)
        BIND_MF(wxComboPopup, GetStringValue)
        BIND_MF(wxComboPopup, PaintComboControl)
        BIND_MF(wxComboPopup, OnComboKeyEvent)
        BIND_MF(wxComboPopup, OnComboDoubleClick)
        BIND_MF(wxComboPopup, GetAdjustedSize)
        BIND_MF(wxComboPopup, LazyCreate)
        BIND_MF(wxComboPopup, Dismiss)
        BIND_MF(wxComboPopup, IsCreated)
        BEGIN_BIND_SCOPE()
        BIND_SMF(wxComboPopup, DefaultPaintComboControl)
        END_BIND_SCOPE()
        END_BIND_CLASS(wxComboPopup)

        // Bind class wxComboCtrl
        BEGIN_BIND_CLASS(wxComboCtrl, wxComboCtrlBase)
        // Auto generated MACRO code for ctor of 'wxComboCtrl':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxComboCtrl':
        // =================================
        BIND_CTOR(wxWindow *)
        BIND_CTOR(wxWindow *, wxWindowID)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 1,
        bool, (wxComboCtrl*, wxWindow *))
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxComboCtrl*, wxWindow *, wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxComboCtrl*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxComboCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxComboCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxComboCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxComboCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxComboCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&))
        BIND_MF(wxComboCtrl, PrepareBackground)
        BIND_MF(wxComboCtrl, IsKeyPopupToggle)
        END_BIND_CLASS(wxComboCtrl)

        BEGIN_BIND_CLASS(wxComboCtrlFeatures,)
        BEGIN_CLASS_ENUM(constant)
        // Bind enum  (totally 8)
        BIND_CLASS_ENUM(wxComboCtrlFeatures, MovableButton)
        BIND_CLASS_ENUM(wxComboCtrlFeatures, BitmapButton)
        BIND_CLASS_ENUM(wxComboCtrlFeatures, ButtonSpacing)
        BIND_CLASS_ENUM(wxComboCtrlFeatures, TextIndent)
        BIND_CLASS_ENUM(wxComboCtrlFeatures, PaintControl)
        BIND_CLASS_ENUM(wxComboCtrlFeatures, PaintWritable)
        BIND_CLASS_ENUM(wxComboCtrlFeatures, Borderless)
        BIND_CLASS_ENUM(wxComboCtrlFeatures, Borderless)
        END_CLASS_ENUM(constantl)

        END_BIND_CLASS()
#endif
    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
    BIND_MACRO(wxACTION_COMBOBOX_POPUP)
    BIND_MACRO(wxACTION_COMBOBOX_DISMISS)
    // Bind enum  (totally 1)
    BIND_ENUM(wxCP_IFLAG_CREATED)
    // Bind enum  (totally 2)
    BIND_ENUM(wxCC_SPECIAL_DCLICK)
    BIND_ENUM(wxCC_STD_BUTTON)
    // Bind enum  (totally 9)
    BIND_ENUM(wxCC_BUTTON_OUTSIDE_BORDER)
    BIND_ENUM(wxCC_POPUP_ON_MOUSE_UP)
    BIND_ENUM(wxCC_NO_TEXT_AUTO_SELECT)
    BIND_ENUM(wxCC_IFLAG_CREATED)
    BIND_ENUM(wxCC_IFLAG_BUTTON_OUTSIDE)
    BIND_ENUM(wxCC_IFLAG_INDENT_SET)
    BIND_ENUM(wxCC_IFLAG_PARENT_TAB_TRAVERSAL)
    BIND_ENUM(wxCC_IFLAG_USE_ALT_POPUP)
    BIND_ENUM(wxCC_IFLAG_DISABLE_POPUP_ANIM)
    // Bind enum  (totally 2)
    BIND_ENUM(wxCC_MF_ON_BUTTON)
    BIND_ENUM(wxCC_MF_ON_CLICK_AREA)

    END_LUA_TABLE(wx)
    return 0;
}