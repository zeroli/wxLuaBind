#include <precompile.h>

// namespace for class wxTextCtrlBase
namespace
{
    // Auto generated CPP code for 'LoadFile'
    // =================================
    bool LoadFile1(wxTextCtrlBase* self, const wxString& file)
    {
        return self->LoadFile(file);
    }
    bool LoadFile2(wxTextCtrlBase* self, const wxString& file, int fileType)
    {
        return self->LoadFile(file,fileType);
    }

    // Auto generated CPP code for 'SaveFile'
    // =================================
    bool SaveFile0(wxTextCtrlBase* self)
    {
        return self->SaveFile();
    }
    bool SaveFile1(wxTextCtrlBase* self, const wxString& file)
    {
        return self->SaveFile(file);
    }
    bool SaveFile2(wxTextCtrlBase* self, const wxString& file, int fileType)
    {
        return self->SaveFile(file,fileType);
    }
}  // namespace for wxTextCtrlBase

namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxTextCtrl* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxTextCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value)
    {
        return self->Create(parent,id,value);
    }
    bool Create4(wxTextCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos)
    {
        return self->Create(parent,id,value,pos);
    }
    bool Create5(wxTextCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,value,pos,size);
    }
    bool Create6(wxTextCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,value,pos,size,style);
    }
    bool Create7(wxTextCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,value,pos,size,style,validator);
    }
    bool Create8(wxTextCtrl* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,value,pos,size,style,validator,name);
    }

    // Auto generated CPP code for 'LoadFile'
    // =================================
    bool LoadFile1(wxTextCtrl* self, const wxString& file)
    {
        return self->LoadFile(file);
    }
    bool LoadFile2(wxTextCtrl* self, const wxString& file, int fileType)
    {
        return self->LoadFile(file,fileType);
    }

    // Auto generated CPP code for 'SaveFile'
    // =================================
    bool SaveFile0(wxTextCtrl* self)
    {
        return self->SaveFile();
    }
    bool SaveFile1(wxTextCtrl* self, const wxString& file)
    {
        return self->SaveFile(file);
    }
    bool SaveFile2(wxTextCtrl* self, const wxString& file, int fileType)
    {
        return self->SaveFile(file,fileType);
    }
}  // namespace

// namespace for class wxTextAttr
namespace
{
    // Auto generated CPP code for 'SetFont'
    // =================================
    void SetFont1(wxTextAttr* self, const wxFont& font)
    {
        return self->SetFont(font);
    }
    void SetFont2(wxTextAttr* self, const wxFont& font, long flags)
    {
        return self->SetFont(font,flags);
    }

    // Auto generated CPP code for 'SetLeftIndent'
    // =================================
    void SetLeftIndent1(wxTextAttr* self, int indent)
    {
        return self->SetLeftIndent(indent);
    }
    void SetLeftIndent2(wxTextAttr* self, int indent, int subIndent)
    {
        return self->SetLeftIndent(indent,subIndent);
    }
}  // namespace for wxTextAttr

REGISTER_WXLUA_BIND(wxtextctrl)
{
    BEGIN_BIND_MODULE(wx)
        // Bind class wxTextAttr
        BEGIN_BIND_CLASS(wxTextAttr)
        // Auto generated MACRO code for ctor of 'wxTextAttr':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxTextAttr':
        // =================================
        BIND_CTOR(const wxColour&)
        BIND_CTOR(const wxColour&, const wxColour&)
        BIND_CTOR(const wxColour&, const wxColour&, const wxFont&)
        BIND_CTOR(const wxColour&, const wxColour&, const wxFont&, wxTextAttrAlignment)
        BIND_MF(wxTextAttr, Init)
        BEGIN_BIND_SCOPE()
        BIND_SMF_OVERLOAD(wxTextAttr, Merge,
        wxTextAttr, (const wxTextAttr&, const wxTextAttr&))
        END_BIND_SCOPE()
        BIND_MF_OVERLOAD(wxTextAttr, Merge,
        void, (const wxTextAttr&))
        BIND_MF_NAME(copy, wxTextAttr, operator =)
        BIND_MF(wxTextAttr, SetTextColour)
        BIND_MF(wxTextAttr, SetBackgroundColour)
        // Auto generated MACRO code for 'SetFont':
        // =================================
        BIND_F2MF_OVERLOAD(SetFont, 1,
        void, (wxTextAttr*, const wxFont&))
        BIND_F2MF_OVERLOAD(SetFont, 2,
        void, (wxTextAttr*, const wxFont&, long))
        BIND_MF(wxTextAttr, SetAlignment)
        BIND_MF(wxTextAttr, SetTabs)
        // Auto generated MACRO code for 'SetLeftIndent':
        // =================================
        BIND_F2MF_OVERLOAD(SetLeftIndent, 1,
        void, (wxTextAttr*, int))
        BIND_F2MF_OVERLOAD(SetLeftIndent, 2,
        void, (wxTextAttr*, int, int))
        BIND_MF(wxTextAttr, SetRightIndent)
        BIND_MF(wxTextAttr, SetFlags)
        BIND_MF(wxTextAttr, HasTextColour)
        BIND_MF(wxTextAttr, HasBackgroundColour)
        BIND_MF(wxTextAttr, HasFont)
        BIND_MF(wxTextAttr, HasAlignment)
        BIND_MF(wxTextAttr, HasTabs)
        BIND_MF(wxTextAttr, HasLeftIndent)
        BIND_MF(wxTextAttr, HasRightIndent)
        BIND_MF(wxTextAttr, HasFlag)
        BIND_MF(wxTextAttr, GetTextColour)
        BIND_MF(wxTextAttr, GetBackgroundColour)
        BIND_MF(wxTextAttr, GetFont)
        BIND_MF(wxTextAttr, GetAlignment)
        BIND_MF(wxTextAttr, GetTabs)
        BIND_MF(wxTextAttr, GetLeftIndent)
        BIND_MF(wxTextAttr, GetLeftSubIndent)
        BIND_MF(wxTextAttr, GetRightIndent)
        BIND_MF(wxTextAttr, GetFlags)
        BIND_MF(wxTextAttr, IsDefault)
        BEGIN_BIND_SCOPE()
        BIND_SMF(wxTextAttr, Combine)
        END_BIND_SCOPE()
        END_BIND_CLASS(wxTextAttr)

        // Bind class wxTextCtrlBase
        BEGIN_BIND_CLASS_CONTROL(wxTextCtrlBase)
        BIND_MF(wxTextCtrlBase, GetValue)
        BIND_MF(wxTextCtrlBase, IsEmpty)
        BIND_MF(wxTextCtrlBase, SetValue)
        BIND_MF(wxTextCtrlBase, ChangeValue)
        BIND_MF(wxTextCtrlBase, GetRange)
        BIND_MF(wxTextCtrlBase, GetLineLength)
        BIND_MF(wxTextCtrlBase, GetLineText)
        BIND_MF(wxTextCtrlBase, GetNumberOfLines)
        BIND_MF(wxTextCtrlBase, IsModified)
        BIND_MF(wxTextCtrlBase, IsEditable)
        BIND_MF(wxTextCtrlBase, IsSingleLine)
        BIND_MF(wxTextCtrlBase, IsMultiLine)
        BIND_MF(wxTextCtrlBase, GetSelection)
        BIND_MF(wxTextCtrlBase, GetStringSelection)
        BIND_MF(wxTextCtrlBase, Clear)
        BIND_MF(wxTextCtrlBase, Replace)
        BIND_MF(wxTextCtrlBase, Remove)
        // Auto generated MACRO code for 'LoadFile':
        // =================================
        BIND_F2MF_OVERLOAD(LoadFile, 1,
        bool, (wxTextCtrlBase*, const wxString&))
        BIND_F2MF_OVERLOAD(LoadFile, 2,
        bool, (wxTextCtrlBase*, const wxString&, int))
        // Auto generated MACRO code for 'SaveFile':
        // =================================
        BIND_F2MF_OVERLOAD(SaveFile, 0,
        bool, (wxTextCtrlBase*))
        BIND_F2MF_OVERLOAD(SaveFile, 1,
        bool, (wxTextCtrlBase*, const wxString&))
        BIND_F2MF_OVERLOAD(SaveFile, 2,
        bool, (wxTextCtrlBase*, const wxString&, int))
        BIND_MF(wxTextCtrlBase, DoLoadFile)
        BIND_MF(wxTextCtrlBase, DoSaveFile)
        BIND_MF(wxTextCtrlBase, MarkDirty)
        BIND_MF(wxTextCtrlBase, DiscardEdits)
        BIND_MF(wxTextCtrlBase, SetModified)
        BIND_MF(wxTextCtrlBase, SetMaxLength)
        BIND_MF(wxTextCtrlBase, WriteText)
        BIND_MF(wxTextCtrlBase, AppendText)
        BIND_MF(wxTextCtrlBase, EmulateKeyPress)
        BIND_MF(wxTextCtrlBase, SetStyle)
        BIND_MF(wxTextCtrlBase, GetStyle)
        BIND_MF(wxTextCtrlBase, SetDefaultStyle)
        BIND_MF(wxTextCtrlBase, GetDefaultStyle)
        BIND_MF(wxTextCtrlBase, XYToPosition)
        BIND_MF(wxTextCtrlBase, PositionToXY)
        BIND_MF(wxTextCtrlBase, ShowPosition)
        BIND_MF_OVERLOAD(wxTextCtrlBase, HitTest,
        wxTextCtrlHitTestResult, (const wxPoint&, long *) const)
        BIND_MF_OVERLOAD(wxTextCtrlBase, HitTest,
        wxTextCtrlHitTestResult, (const wxPoint&, wxTextCoord *, wxTextCoord *) const)
        BIND_MF(wxTextCtrlBase, Copy)
        BIND_MF(wxTextCtrlBase, Cut)
        BIND_MF(wxTextCtrlBase, Paste)
        BIND_MF(wxTextCtrlBase, CanCopy)
        BIND_MF(wxTextCtrlBase, CanCut)
        BIND_MF(wxTextCtrlBase, CanPaste)
        BIND_MF(wxTextCtrlBase, Undo)
        BIND_MF(wxTextCtrlBase, Redo)
        BIND_MF(wxTextCtrlBase, CanUndo)
        BIND_MF(wxTextCtrlBase, CanRedo)
        BIND_MF(wxTextCtrlBase, SetInsertionPoint)
        BIND_MF(wxTextCtrlBase, SetInsertionPointEnd)
        BIND_MF(wxTextCtrlBase, GetInsertionPoint)
        BIND_MF(wxTextCtrlBase, GetLastPosition)
        BIND_MF(wxTextCtrlBase, SetSelection)
        BIND_MF(wxTextCtrlBase, SelectAll)
        BIND_MF(wxTextCtrlBase, SetEditable)
        BIND_MF_OVERLOAD_NAME(print, wxTextCtrlBase, operator <<,
        wxTextCtrl&, (const wxString&))
        BIND_MF_OVERLOAD_NAME(print, wxTextCtrlBase, operator <<,
        wxTextCtrl&, (int))
        BIND_MF_OVERLOAD_NAME(print, wxTextCtrlBase, operator <<,
        wxTextCtrl&, (long))
        BIND_MF_OVERLOAD_NAME(print, wxTextCtrlBase, operator <<,
        wxTextCtrl& , (float))
        BIND_MF_OVERLOAD_NAME(print, wxTextCtrlBase, operator <<,
        wxTextCtrl&, (double))
        BIND_MF_OVERLOAD_NAME(print, wxTextCtrlBase, operator <<,
        wxTextCtrl&, (const wxChar))
        BIND_MF(wxTextCtrlBase, SendTextUpdatedEvent)
        BIND_MF(wxTextCtrlBase, DoUpdateWindowUI)
        BIND_MF(wxTextCtrlBase, ShouldInheritColours)
        END_BIND_CLASS(wxTextCtrlBase)

        BEGIN_BIND_CLASS(wxTextCtrl, wxTextCtrlBase)
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxTextCtrl':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxTextCtrl*, wxWindow *, wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxTextCtrl*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxTextCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxTextCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxTextCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxTextCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxTextCtrl*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&))

        END_BIND_CLASS(wxTextCtrl)

        // Bind class wxTextUrlEvent
        BEGIN_BIND_CLASS(wxTextUrlEvent)
        BIND_MF(wxTextUrlEvent, GetMouseEvent)
        BIND_MF(wxTextUrlEvent, GetURLStart)
        BIND_MF(wxTextUrlEvent, GetURLEnd)
        END_BIND_CLASS(wxTextUrlEvent)

    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
        BIND_MACRO(wxTE_NO_VSCROLL)
        BIND_MACRO(wxTE_AUTO_SCROLL)
        BIND_MACRO(wxTE_READONLY)
        BIND_MACRO(wxTE_MULTILINE)
        BIND_MACRO(wxTE_PROCESS_TAB)

        BIND_MACRO(wxTE_LEFT)
        BIND_MACRO(wxTE_CENTER)
        BIND_MACRO(wxTE_RIGHT)
        BIND_MACRO(wxTE_CENTRE)
        BIND_MACRO(wxTE_RICH)
        BIND_MACRO(wxTE_PROCESS_ENTER)
        BIND_MACRO(wxTE_PASSWORD)
        BIND_MACRO(wxTE_AUTO_URL)
        BIND_MACRO(wxTE_NOHIDESEL)
        BIND_MACRO(wxTE_DONTWRAP)
        BIND_MACRO(wxTE_CHARWRAP)
        BIND_MACRO(wxTE_WORDWRAP)
        BIND_MACRO(wxTE_BESTWRAP)
        BIND_MACRO(wxTE_RICH2)
        BIND_MACRO(wxTE_CAPITALIZE)
        BIND_MACRO(wxTEXT_TYPE_ANY)

        // Bind enum wxTextCtrlHitTestResult (totally 5)
        BIND_ENUM(wxTE_HT_UNKNOWN)
        BIND_ENUM(wxTE_HT_BEFORE)
        BIND_ENUM(wxTE_HT_ON_TEXT)
        BIND_ENUM(wxTE_HT_BELOW)
        BIND_ENUM(wxTE_HT_BEYOND)

        // Bind enum wxTextAttrAlignment (totally 6)
        BIND_ENUM(wxTEXT_ALIGNMENT_DEFAULT)
        BIND_ENUM(wxTEXT_ALIGNMENT_LEFT)
        BIND_ENUM(wxTEXT_ALIGNMENT_CENTRE)
        BIND_ENUM(wxTEXT_ALIGNMENT_CENTER)
        BIND_ENUM(wxTEXT_ALIGNMENT_RIGHT)
        BIND_ENUM(wxTEXT_ALIGNMENT_JUSTIFIED)

        BIND_MACRO(wxTEXT_ATTR_TEXT_COLOUR)
        BIND_MACRO(wxTEXT_ATTR_BACKGROUND_COLOUR)
        BIND_MACRO(wxTEXT_ATTR_FONT_FACE)
        BIND_MACRO(wxTEXT_ATTR_FONT_SIZE)
        BIND_MACRO(wxTEXT_ATTR_FONT_WEIGHT)
        BIND_MACRO(wxTEXT_ATTR_FONT_ITALIC)
        BIND_MACRO(wxTEXT_ATTR_FONT_UNDERLINE)
        BIND_MACRO(wxTEXT_ATTR_FONT)
        BIND_MACRO(wxTEXT_ATTR_LEFT_INDENT)
        BIND_MACRO(wxTEXT_ATTR_RIGHT_INDENT)
        BIND_MACRO(wxTEXT_ATTR_TABS)

        BIND_ENUM(wxEVT_COMMAND_TEXT_UPDATED)
        BIND_ENUM(wxEVT_COMMAND_TEXT_ENTER)
        BIND_ENUM(wxEVT_COMMAND_TEXT_URL)
        BIND_ENUM(wxEVT_COMMAND_TEXT_MAXLEN)
    END_LUA_TABLE(wx)
    return 0;
}