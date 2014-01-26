#include <precompile.h>

#include <wx/treebase.h>

REGISTER_WXLUA_BIND(treebase)
{
    BEGIN_BIND_MODULE(wx)
#if wxUSE_TREECTRL
        // Bind class wxTreeItemId
        BEGIN_BIND_CLASS(wxTreeItemId)
            // Auto generated MACRO code for ctor of 'wxTreeItemId':
            // =================================
            BIND_CTOR()
            // Auto generated MACRO code for ctor of 'wxTreeItemId':
            // =================================
            BIND_MF(wxTreeItemId, IsOk)
            BIND_MF(wxTreeItemId, Unset)

            // bind operator ==/!= as "eq"/"ne" functions
            .def("eq", (bool (*)(const wxTreeItemId&, const wxTreeItemId&))&operator==)
            .def("ne", (bool (*)(const wxTreeItemId&, const wxTreeItemId&))&operator !=)
        END_BIND_CLASS(wxTreeItemId)
        // Bind class wxTreeItemData
        BEGIN_BIND_CLASS(wxTreeItemData, wxClientData)
            // Auto generated MACRO code for ctor of 'wxTreeItemData':
            // =================================
            BIND_CTOR()
            BIND_MF(wxTreeItemData, GetId)
            BIND_MF(wxTreeItemData, SetId)
        END_BIND_CLASS(wxTreeItemData)

#endif
        // Bind class wxTreeItemAttr
        BEGIN_BIND_CLASS(wxTreeItemAttr)
            // Auto generated MACRO code for ctor of 'wxTreeItemAttr':
            // =================================
            BIND_CTOR()
            BIND_MF(wxTreeItemAttr, SetTextColour)
            BIND_MF(wxTreeItemAttr, SetBackgroundColour)
            BIND_MF(wxTreeItemAttr, SetFont)
            BIND_MF(wxTreeItemAttr, HasTextColour)
            BIND_MF(wxTreeItemAttr, HasBackgroundColour)
            BIND_MF(wxTreeItemAttr, HasFont)
            BIND_MF(wxTreeItemAttr, GetTextColour)
            BIND_MF(wxTreeItemAttr, GetBackgroundColour)
            BIND_MF(wxTreeItemAttr, GetFont)
        END_BIND_CLASS(wxTreeItemAttr)

        // Bind class wxTreeEvent
        BEGIN_BIND_CLASS(wxTreeEvent, wxNotifyEvent)
            // Auto generated MACRO code for ctor of 'wxTreeEvent':
            // =================================
            BIND_CTOR(wxEventType, wxTreeCtrlBase *)
            BIND_CTOR(wxEventType, wxTreeCtrlBase *, const wxTreeItemId &)
            // Auto generated MACRO code for ctor of 'wxTreeEvent':
            // =================================
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, int)
            // Auto generated MACRO code for ctor of 'wxTreeEvent':
            // =================================
            BIND_CTOR(const wxTreeEvent&)
            BIND_MF(wxTreeEvent, Clone)
            BIND_MF(wxTreeEvent, GetItem)
            BIND_MF(wxTreeEvent, SetItem)
            BIND_MF(wxTreeEvent, GetOldItem)
            BIND_MF(wxTreeEvent, SetOldItem)
            BIND_MF(wxTreeEvent, GetPoint)
            BIND_MF(wxTreeEvent, SetPoint)
            BIND_MF(wxTreeEvent, GetKeyEvent)
            BIND_MF(wxTreeEvent, GetKeyCode)
            BIND_MF(wxTreeEvent, SetKeyEvent)
            BIND_MF(wxTreeEvent, GetLabel)
            BIND_MF(wxTreeEvent, SetLabel)
            BIND_MF(wxTreeEvent, IsEditCancelled)
            BIND_MF(wxTreeEvent, SetEditCanceled)
            BIND_MF(wxTreeEvent, SetToolTip)
            BIND_MF(wxTreeEvent, GetToolTip)
        END_BIND_CLASS(wxTreeEvent)

    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
        // Bind enum wxTreeItemIcon (totally 5)
        BIND_ENUM(wxTreeItemIcon_Normal)
        BIND_ENUM(wxTreeItemIcon_Selected)
        BIND_ENUM(wxTreeItemIcon_Expanded)
        BIND_ENUM(wxTreeItemIcon_SelectedExpanded)
        BIND_ENUM(wxTreeItemIcon_Max)

        // wxTreeCtrl flags
        BIND_MACRO(wxTR_NO_BUTTONS)
        BIND_MACRO(wxTR_HAS_BUTTONS)
        BIND_MACRO(wxTR_NO_LINES)
        BIND_MACRO(wxTR_LINES_AT_ROOT)
        BIND_MACRO(wxTR_TWIST_BUTTONS)
        BIND_MACRO(wxTR_SINGLE)
        BIND_MACRO(wxTR_MULTIPLE)
        BIND_MACRO(wxTR_EXTENDED)
        BIND_MACRO(wxTR_HAS_VARIABLE_ROW_HEIGHT)
        BIND_MACRO(wxTR_EDIT_LABELS)
        BIND_MACRO(wxTR_ROW_LINES)
        BIND_MACRO(wxTR_HIDE_ROOT)
        BIND_MACRO(wxTR_FULL_ROW_HIGHLIGHT)
        BIND_MACRO(wxTR_HIDE_ROOT)
        BIND_MACRO(wxTR_DEFAULT_STYLE)

        BIND_VARIABLE(wxTREE_HITTEST_ABOVE)
        BIND_VARIABLE(wxTREE_HITTEST_BELOW)
        BIND_VARIABLE(wxTREE_HITTEST_NOWHERE)
        BIND_VARIABLE(wxTREE_HITTEST_ONITEMBUTTON)
        BIND_VARIABLE(wxTREE_HITTEST_ONITEMICON)
        BIND_VARIABLE(wxTREE_HITTEST_ONITEMINDENT)
        BIND_VARIABLE(wxTREE_HITTEST_ONITEMLABEL)
        BIND_VARIABLE(wxTREE_HITTEST_ONITEMRIGHT)
        BIND_VARIABLE(wxTREE_HITTEST_ONITEMSTATEICON)
        BIND_VARIABLE(wxTREE_HITTEST_TOLEFT)
        BIND_VARIABLE(wxTREE_HITTEST_TORIGHT)
        BIND_VARIABLE(wxTREE_HITTEST_ONITEMUPPERPART)
        BIND_VARIABLE(wxTREE_HITTEST_ONITEMLOWERPART)
        BIND_VARIABLE(wxTREE_HITTEST_ONITEM)

        BIND_TABLE_VALUE(wxTreeCtrlNameStr, &wxTreeCtrlNameStr[0])

        // tree control events and macros for handling them
        BIND_ENUM(wxEVT_COMMAND_TREE_BEGIN_DRAG)
        BIND_ENUM(wxEVT_COMMAND_TREE_BEGIN_RDRAG)
        BIND_ENUM(wxEVT_COMMAND_TREE_BEGIN_LABEL_EDIT)
        BIND_ENUM(wxEVT_COMMAND_TREE_END_LABEL_EDIT)
        BIND_ENUM(wxEVT_COMMAND_TREE_DELETE_ITEM)
        BIND_ENUM(wxEVT_COMMAND_TREE_GET_INFO)
        BIND_ENUM(wxEVT_COMMAND_TREE_SET_INFO)
        BIND_ENUM(wxEVT_COMMAND_TREE_ITEM_EXPANDED)
        BIND_ENUM(wxEVT_COMMAND_TREE_ITEM_EXPANDING)
        BIND_ENUM(wxEVT_COMMAND_TREE_ITEM_COLLAPSED)
        BIND_ENUM(wxEVT_COMMAND_TREE_ITEM_COLLAPSING)
        BIND_ENUM(wxEVT_COMMAND_TREE_SEL_CHANGED)
        BIND_ENUM(wxEVT_COMMAND_TREE_SEL_CHANGING)
        BIND_ENUM(wxEVT_COMMAND_TREE_KEY_DOWN)
        BIND_ENUM(wxEVT_COMMAND_TREE_ITEM_ACTIVATED)
        BIND_ENUM(wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK)
        BIND_ENUM(wxEVT_COMMAND_TREE_ITEM_MIDDLE_CLICK)
        BIND_ENUM(wxEVT_COMMAND_TREE_END_DRAG)
        BIND_ENUM(wxEVT_COMMAND_TREE_STATE_IMAGE_CLICK)
        BIND_ENUM(wxEVT_COMMAND_TREE_ITEM_GETTOOLTIP)
        BIND_ENUM(wxEVT_COMMAND_TREE_ITEM_MENU)
    END_LUA_TABLE(wx)
    return 0;
}