#include <precompile.h>

#include <wx/aui/aui.h>

// namespace for class wxAuiToolBar
namespace
{
    // Auto generated CPP code for 'AddTool'
    // =================================
    void AddTool3(wxAuiToolBar* self, int tool_id, const wxString& label, const wxBitmap& bitmap)
    {
        return self->AddTool(tool_id,label,bitmap);
    }
    void AddTool4(wxAuiToolBar* self, int tool_id, const wxString& label, const wxBitmap& bitmap, const wxString& short_help_string)
    {
        return self->AddTool(tool_id,label,bitmap,short_help_string);
    }
    void AddTool5(wxAuiToolBar* self, int tool_id, const wxString& label, const wxBitmap& bitmap, const wxString& short_help_string, wxItemKind kind)
    {
        return self->AddTool(tool_id,label,bitmap,short_help_string,kind);
    }

    // Auto generated CPP code for 'AddTool'
    // =================================
    void AddTool3(wxAuiToolBar* self, int tool_id, const wxBitmap& bitmap, const wxBitmap& disabled_bitmap)
    {
        return self->AddTool(tool_id,bitmap,disabled_bitmap);
    }
    void AddTool4(wxAuiToolBar* self, int tool_id, const wxBitmap& bitmap, const wxBitmap& disabled_bitmap, bool toggle)
    {
        return self->AddTool(tool_id,bitmap,disabled_bitmap,toggle);
    }
    void AddTool5(wxAuiToolBar* self, int tool_id, const wxBitmap& bitmap, const wxBitmap& disabled_bitmap, bool toggle, wxObject* client_data)
    {
        return self->AddTool(tool_id,bitmap,disabled_bitmap,toggle,client_data);
    }
    void AddTool6(wxAuiToolBar* self, int tool_id, const wxBitmap& bitmap, const wxBitmap& disabled_bitmap, bool toggle, wxObject* client_data, const wxString& short_help_string)
    {
        return self->AddTool(tool_id,bitmap,disabled_bitmap,toggle,client_data,short_help_string);
    }
    void AddTool7(wxAuiToolBar* self, int tool_id, const wxBitmap& bitmap, const wxBitmap& disabled_bitmap, bool toggle, wxObject* client_data, const wxString& short_help_string, const wxString& long_help_string)
    {
        return self->AddTool(tool_id,bitmap,disabled_bitmap,toggle,client_data,short_help_string,long_help_string);
    }

    // Auto generated CPP code for 'AddLabel'
    // =================================
    void AddLabel1(wxAuiToolBar* self, int tool_id)
    {
        return self->AddLabel(tool_id);
    }
    void AddLabel2(wxAuiToolBar* self, int tool_id, const wxString& label)
    {
        return self->AddLabel(tool_id,label);
    }
    void AddLabel3(wxAuiToolBar* self, int tool_id, const wxString& label, const int width)
    {
        return self->AddLabel(tool_id,label,width);
    }

    // Auto generated CPP code for 'AddControl'
    // =================================
    void AddControl1(wxAuiToolBar* self, wxControl* control)
    {
        return self->AddControl(control);
    }
    void AddControl2(wxAuiToolBar* self, wxControl* control, const wxString& label)
    {
        return self->AddControl(control,label);
    }

    // Auto generated CPP code for 'AddStretchSpacer'
    // =================================
    void AddStretchSpacer0(wxAuiToolBar* self)
    {
        return self->AddStretchSpacer();
    }
    void AddStretchSpacer1(wxAuiToolBar* self, int proportion)
    {
        return self->AddStretchSpacer(proportion);
    }
}  // namespace for wxAuiToolBar

REGISTER_WXLUA_BIND(auibar)
{
#if wxUSE_AUI

    BEGIN_BIND_MODULE(wx)
    // Bind class wxAuiToolBarEvent
    BEGIN_BIND_CLASS(wxAuiToolBarEvent, wxNotifyEvent)
    // Auto generated MACRO code for ctor of 'wxAuiToolBarEvent':
    // =================================
    BIND_CTOR(wxEventType)
    BIND_CTOR(wxEventType, int)
    // Auto generated MACRO code for ctor of 'wxAuiToolBarEvent':
    // =================================
    BIND_CTOR(const wxAuiToolBarEvent&)
    BIND_MF(wxAuiToolBarEvent, Clone)
    BIND_MF(wxAuiToolBarEvent, IsDropDownClicked)
    BIND_MF(wxAuiToolBarEvent, SetDropDownClicked)
    BIND_MF(wxAuiToolBarEvent, GetClickPoint)
    BIND_MF(wxAuiToolBarEvent, SetClickPoint)
    BIND_MF(wxAuiToolBarEvent, GetItemRect)
    BIND_MF(wxAuiToolBarEvent, SetItemRect)
    BIND_MF(wxAuiToolBarEvent, GetToolId)
    BIND_MF(wxAuiToolBarEvent, SetToolId)
    END_BIND_CLASS(wxAuiToolBarEvent)

    // Bind class wxAuiToolBarItem
    BEGIN_BIND_CLASS(wxAuiToolBarItem)
    // Auto generated MACRO code for ctor of 'wxAuiToolBarItem':
    // =================================
    BIND_CTOR()
    // Auto generated MACRO code for ctor of 'wxAuiToolBarItem':
    // =================================
    BIND_CTOR(const wxAuiToolBarItem&)
    BIND_MF_NAME(copy, wxAuiToolBarItem, operator =)
    BIND_MF(wxAuiToolBarItem, Assign)
    BIND_MF(wxAuiToolBarItem, SetWindow)
    BIND_MF(wxAuiToolBarItem, GetWindow)
    BIND_MF(wxAuiToolBarItem, SetId)
    BIND_MF(wxAuiToolBarItem, GetId)
    BIND_MF(wxAuiToolBarItem, SetKind)
    BIND_MF(wxAuiToolBarItem, GetKind)
    BIND_MF(wxAuiToolBarItem, SetState)
    BIND_MF(wxAuiToolBarItem, GetState)
    BIND_MF(wxAuiToolBarItem, SetSizerItem)
    BIND_MF(wxAuiToolBarItem, GetSizerItem)
    BIND_MF(wxAuiToolBarItem, SetLabel)
    BIND_MF(wxAuiToolBarItem, GetLabel)
    BIND_MF(wxAuiToolBarItem, SetBitmap)
    BIND_MF(wxAuiToolBarItem, GetBitmap)
    BIND_MF(wxAuiToolBarItem, SetDisabledBitmap)
    BIND_MF(wxAuiToolBarItem, GetDisabledBitmap)
    BIND_MF(wxAuiToolBarItem, SetHoverBitmap)
    BIND_MF(wxAuiToolBarItem, GetHoverBitmap)
    BIND_MF(wxAuiToolBarItem, SetShortHelp)
    BIND_MF(wxAuiToolBarItem, GetShortHelp)
    BIND_MF(wxAuiToolBarItem, SetLongHelp)
    BIND_MF(wxAuiToolBarItem, GetLongHelp)
    BIND_MF(wxAuiToolBarItem, SetMinSize)
    BIND_MF(wxAuiToolBarItem, GetMinSize)
    BIND_MF(wxAuiToolBarItem, SetSpacerPixels)
    BIND_MF(wxAuiToolBarItem, GetSpacerPixels)
    BIND_MF(wxAuiToolBarItem, SetProportion)
    BIND_MF(wxAuiToolBarItem, GetProportion)
    BIND_MF(wxAuiToolBarItem, SetActive)
    BIND_MF(wxAuiToolBarItem, IsActive)
    BIND_MF(wxAuiToolBarItem, SetHasDropDown)
    BIND_MF(wxAuiToolBarItem, HasDropDown)
    BIND_MF(wxAuiToolBarItem, SetSticky)
    BIND_MF(wxAuiToolBarItem, IsSticky)
    BIND_MF(wxAuiToolBarItem, SetUserData)
    BIND_MF(wxAuiToolBarItem, GetUserData)
    END_BIND_CLASS(wxAuiToolBarItem)

    BEGIN_BIND_CLASS(wxAuiToolBarArt)
    // Auto generated MACRO code for ctor of 'wxAuiToolBarArt':
    // =================================
    BIND_MF(wxAuiToolBarArt, Clone)
    BIND_MF(wxAuiToolBarArt, SetFlags)
    BIND_MF(wxAuiToolBarArt, SetFont)
    BIND_MF(wxAuiToolBarArt, SetTextOrientation)
    BIND_MF(wxAuiToolBarArt, DrawBackground)
    BIND_MF(wxAuiToolBarArt, DrawLabel)
    BIND_MF(wxAuiToolBarArt, DrawButton)
    BIND_MF(wxAuiToolBarArt, DrawDropDownButton)
    BIND_MF(wxAuiToolBarArt, DrawControlLabel)
    BIND_MF(wxAuiToolBarArt, DrawSeparator)
    BIND_MF(wxAuiToolBarArt, DrawGripper)
    BIND_MF(wxAuiToolBarArt, DrawOverflowButton)
    BIND_MF(wxAuiToolBarArt, GetLabelSize)
    BIND_MF(wxAuiToolBarArt, GetToolSize)
    BIND_MF(wxAuiToolBarArt, GetElementSize)
    BIND_MF(wxAuiToolBarArt, SetElementSize)
    BIND_MF(wxAuiToolBarArt, ShowDropDown)
    END_BIND_CLASS(wxAuiToolBarArt)

    BEGIN_BIND_CLASS(wxAuiDefaultToolBarArt, wxAuiToolBarArt)
    // Auto generated MACRO code for ctor of 'wxAuiDefaultToolBarArt':
    // =================================
    BIND_CTOR()
    BIND_MF(wxAuiDefaultToolBarArt, Clone)
    BIND_MF(wxAuiDefaultToolBarArt, SetFlags)
    BIND_MF(wxAuiDefaultToolBarArt, SetFont)
    BIND_MF(wxAuiDefaultToolBarArt, SetTextOrientation)
    BIND_MF(wxAuiDefaultToolBarArt, DrawBackground)
    BIND_MF(wxAuiDefaultToolBarArt, DrawLabel)
    BIND_MF(wxAuiDefaultToolBarArt, DrawButton)
    BIND_MF(wxAuiDefaultToolBarArt, DrawDropDownButton)
    BIND_MF(wxAuiDefaultToolBarArt, DrawControlLabel)
    BIND_MF(wxAuiDefaultToolBarArt, DrawSeparator)
    BIND_MF(wxAuiDefaultToolBarArt, DrawGripper)
    BIND_MF(wxAuiDefaultToolBarArt, DrawOverflowButton)
    BIND_MF(wxAuiDefaultToolBarArt, GetLabelSize)
    BIND_MF(wxAuiDefaultToolBarArt, GetToolSize)
    BIND_MF(wxAuiDefaultToolBarArt, GetElementSize)
    BIND_MF(wxAuiDefaultToolBarArt, SetElementSize)
    BIND_MF(wxAuiDefaultToolBarArt, ShowDropDown)
    END_BIND_CLASS(wxAuiDefaultToolBarArt)

    // Bind class wxAuiToolBar
    BEGIN_BIND_CLASS_CONTROL(wxAuiToolBar)
    // Auto generated MACRO code for ctor of 'wxAuiToolBar':
    // =================================
    BIND_CTOR(wxWindow*)
    BIND_CTOR(wxWindow*, wxWindowID)
    BIND_CTOR(wxWindow*, wxWindowID, const wxPoint&)
    BIND_CTOR(wxWindow*, wxWindowID, const wxPoint&, const wxSize&)
    BIND_CTOR(wxWindow*, wxWindowID, const wxPoint&, const wxSize&, long)
    BIND_MF(wxAuiToolBar, SetWindowStyleFlag)
    BIND_MF(wxAuiToolBar, SetArtProvider)
    BIND_MF(wxAuiToolBar, GetArtProvider)
    BIND_MF(wxAuiToolBar, SetFont)
    // Auto generated MACRO code for 'AddTool':
    // =================================
    BIND_F2MF_OVERLOAD(AddTool, 3,
    void, (wxAuiToolBar*, int, const wxString&, const wxBitmap&))
    BIND_F2MF_OVERLOAD(AddTool, 4,
    void, (wxAuiToolBar*, int, const wxString&, const wxBitmap&, const wxString&))
    BIND_F2MF_OVERLOAD(AddTool, 5,
    void, (wxAuiToolBar*, int, const wxString&, const wxBitmap&, const wxString&, wxItemKind))
    BIND_MF_OVERLOAD(wxAuiToolBar, AddTool,
    void, (int, const wxString&, const wxBitmap&, const wxBitmap&, wxItemKind, const wxString&, const wxString&, wxObject*))
    // Auto generated MACRO code for 'AddTool':
    // =================================
    BIND_F2MF_OVERLOAD(AddTool, 3,
    void, (wxAuiToolBar*, int, const wxBitmap&, const wxBitmap&))
    BIND_F2MF_OVERLOAD(AddTool, 4,
    void, (wxAuiToolBar*, int, const wxBitmap&, const wxBitmap&, bool))
    BIND_F2MF_OVERLOAD(AddTool, 5,
    void, (wxAuiToolBar*, int, const wxBitmap&, const wxBitmap&, bool, wxObject*))
    BIND_F2MF_OVERLOAD(AddTool, 6,
    void, (wxAuiToolBar*, int, const wxBitmap&, const wxBitmap&, bool, wxObject*, const wxString&))
    BIND_F2MF_OVERLOAD(AddTool, 7,
    void, (wxAuiToolBar*, int, const wxBitmap&, const wxBitmap&, bool, wxObject*, const wxString&, const wxString&))
    // Auto generated MACRO code for 'AddLabel':
    // =================================
    BIND_F2MF_OVERLOAD(AddLabel, 1,
    void, (wxAuiToolBar*, int))
    BIND_F2MF_OVERLOAD(AddLabel, 2,
    void, (wxAuiToolBar*, int, const wxString&))
    BIND_F2MF_OVERLOAD(AddLabel, 3,
    void, (wxAuiToolBar*, int, const wxString&, const int))
    // Auto generated MACRO code for 'AddControl':
    // =================================
    BIND_F2MF_OVERLOAD(AddControl, 1,
    void, (wxAuiToolBar*, wxControl*))
    BIND_F2MF_OVERLOAD(AddControl, 2,
    void, (wxAuiToolBar*, wxControl*, const wxString&))
    BIND_MF(wxAuiToolBar, AddSeparator)
    BIND_MF(wxAuiToolBar, AddSpacer)
    // Auto generated MACRO code for 'AddStretchSpacer':
    // =================================
    BIND_F2MF_OVERLOAD(AddStretchSpacer, 0,
    void, (wxAuiToolBar*))
    BIND_F2MF_OVERLOAD(AddStretchSpacer, 1,
    void, (wxAuiToolBar*, int))
    BIND_MF(wxAuiToolBar, Realize)
    BIND_MF(wxAuiToolBar, FindControl)
    BIND_MF(wxAuiToolBar, FindToolByPosition)
    BIND_MF(wxAuiToolBar, FindToolByIndex)
    BIND_MF(wxAuiToolBar, FindTool)
    BIND_MF(wxAuiToolBar, ClearTools)
    BIND_MF(wxAuiToolBar, Clear)
    BIND_MF(wxAuiToolBar, DeleteTool)
    BIND_MF(wxAuiToolBar, DeleteByIndex)
    BIND_MF(wxAuiToolBar, GetToolCount)
    BIND_MF(wxAuiToolBar, GetToolPos)
    BIND_MF(wxAuiToolBar, GetToolIndex)
    BIND_MF(wxAuiToolBar, GetToolFits)
    BIND_MF(wxAuiToolBar, GetToolRect)
    BIND_MF(wxAuiToolBar, GetToolFitsByIndex)
    BIND_MF(wxAuiToolBar, GetToolBarFits)
    BIND_MF_OVERLOAD(wxAuiToolBar, SetMargins,
    void, (const wxSize&))
    BIND_MF_OVERLOAD(wxAuiToolBar, SetMargins,
    void, (int, int))
    BIND_MF_OVERLOAD(wxAuiToolBar, SetMargins,
    void, (int, int, int, int))
    BIND_MF(wxAuiToolBar, SetToolBitmapSize)
    BIND_MF(wxAuiToolBar, GetToolBitmapSize)
    BIND_MF(wxAuiToolBar, GetOverflowVisible)
    BIND_MF(wxAuiToolBar, SetOverflowVisible)
    BIND_MF(wxAuiToolBar, GetGripperVisible)
    BIND_MF(wxAuiToolBar, SetGripperVisible)
    BIND_MF(wxAuiToolBar, ToggleTool)
    BIND_MF(wxAuiToolBar, GetToolToggled)
    BIND_MF(wxAuiToolBar, EnableTool)
    BIND_MF(wxAuiToolBar, GetToolEnabled)
    BIND_MF(wxAuiToolBar, SetToolDropDown)
    BIND_MF(wxAuiToolBar, GetToolDropDown)
    BIND_MF(wxAuiToolBar, SetToolBorderPadding)
    BIND_MF(wxAuiToolBar, GetToolBorderPadding)
    BIND_MF(wxAuiToolBar, SetToolTextOrientation)
    BIND_MF(wxAuiToolBar, GetToolTextOrientation)
    BIND_MF(wxAuiToolBar, SetToolPacking)
    BIND_MF(wxAuiToolBar, GetToolPacking)
    BIND_MF(wxAuiToolBar, SetToolProportion)
    BIND_MF(wxAuiToolBar, GetToolProportion)
    BIND_MF(wxAuiToolBar, SetToolSeparation)
    BIND_MF(wxAuiToolBar, GetToolSeparation)
    BIND_MF(wxAuiToolBar, SetToolSticky)
    BIND_MF(wxAuiToolBar, GetToolSticky)
    BIND_MF(wxAuiToolBar, GetToolLabel)
    BIND_MF(wxAuiToolBar, SetToolLabel)
    BIND_MF(wxAuiToolBar, GetToolBitmap)
    BIND_MF(wxAuiToolBar, SetToolBitmap)
    BIND_MF(wxAuiToolBar, GetToolShortHelp)
    BIND_MF(wxAuiToolBar, SetToolShortHelp)
    BIND_MF(wxAuiToolBar, GetToolLongHelp)
    BIND_MF(wxAuiToolBar, SetToolLongHelp)
    BIND_MF(wxAuiToolBar, SetCustomOverflowItems)
    END_BIND_CLASS(wxAuiToolBar)

    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
    // Bind enum wxAuiToolBarStyle (totally 8)
    BIND_ENUM(wxAUI_TB_TEXT)
    BIND_ENUM(wxAUI_TB_NO_TOOLTIPS)
    BIND_ENUM(wxAUI_TB_NO_AUTORESIZE)
    BIND_ENUM(wxAUI_TB_GRIPPER)
    BIND_ENUM(wxAUI_TB_OVERFLOW)
    BIND_ENUM(wxAUI_TB_VERTICAL)
    BIND_ENUM(wxAUI_TB_HORZ_LAYOUT)
    BIND_ENUM(wxAUI_TB_DEFAULT_STYLE)

    // Bind enum wxAuiToolBarArtSetting (totally 3)
    BIND_ENUM(wxAUI_TBART_SEPARATOR_SIZE)
    BIND_ENUM(wxAUI_TBART_GRIPPER_SIZE)
    BIND_ENUM(wxAUI_TBART_OVERFLOW_SIZE)

    // Bind enum wxAuiToolBarToolTextOrientation (totally 4)
    BIND_ENUM(wxAUI_TBTOOL_TEXT_LEFT)
    BIND_ENUM(wxAUI_TBTOOL_TEXT_RIGHT)
    BIND_ENUM(wxAUI_TBTOOL_TEXT_TOP)
    BIND_ENUM(wxAUI_TBTOOL_TEXT_BOTTOM)

    BIND_VARIABLE(wxEVT_COMMAND_AUITOOLBAR_TOOL_DROPDOWN)
    BIND_VARIABLE(wxEVT_COMMAND_AUITOOLBAR_OVERFLOW_CLICK)
    BIND_VARIABLE(wxEVT_COMMAND_AUITOOLBAR_RIGHT_CLICK)
    BIND_VARIABLE(wxEVT_COMMAND_AUITOOLBAR_MIDDLE_CLICK)
    BIND_VARIABLE(wxEVT_COMMAND_AUITOOLBAR_BEGIN_DRAG)

    END_LUA_TABLE(wx)
#endif // wxUSE_AUI
    return 0;
}