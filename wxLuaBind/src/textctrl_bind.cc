#include <precompile.h>

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

REGISTER_WXLUA_BIND(wxtextctrl)
{
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS_CONTROL(wxTextCtrl)
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

        BIND_MF(wxTextCtrl, GetValue)
        BIND_MF(wxTextCtrl, IsEmpty)
        BIND_MF(wxTextCtrl, SetValue)
        BIND_MF(wxTextCtrl, ChangeValue)
        BIND_MF(wxTextCtrl, GetRange)
        BIND_MF(wxTextCtrl, GetLineLength)
        BIND_MF(wxTextCtrl, GetLineText)
        BIND_MF(wxTextCtrl, GetNumberOfLines)
        BIND_MF(wxTextCtrl, IsModified)
        BIND_MF(wxTextCtrl, IsEditable)
        BIND_MF(wxTextCtrl, IsSingleLine)
        BIND_MF(wxTextCtrl, IsMultiLine)
        BIND_MF(wxTextCtrl, GetSelection)
        BIND_MF(wxTextCtrl, GetStringSelection)
        BIND_MF(wxTextCtrl, Clear)
        BIND_MF(wxTextCtrl, Replace)
        BIND_MF(wxTextCtrl, Remove)
        // Auto generated MACRO code for 'LoadFile':
        // =================================
        BIND_F2MF_OVERLOAD(LoadFile, 1,
        bool, (wxTextCtrl*, const wxString&))
        BIND_F2MF_OVERLOAD(LoadFile, 2,
        bool, (wxTextCtrl*, const wxString&, int))
        // Auto generated MACRO code for 'SaveFile':
        // =================================
        BIND_F2MF_OVERLOAD(SaveFile, 0,
        bool, (wxTextCtrl*))
        BIND_F2MF_OVERLOAD(SaveFile, 1,
        bool, (wxTextCtrl*, const wxString&))
        BIND_F2MF_OVERLOAD(SaveFile, 2,
        bool, (wxTextCtrl*, const wxString&, int))
        BIND_MF(wxTextCtrl, DoLoadFile)
        BIND_MF(wxTextCtrl, DoSaveFile)
        BIND_MF(wxTextCtrl, MarkDirty)
        BIND_MF(wxTextCtrl, DiscardEdits)
        BIND_MF(wxTextCtrl, SetModified)
        BIND_MF(wxTextCtrl, SetMaxLength)
        BIND_MF(wxTextCtrl, WriteText)
        BIND_MF(wxTextCtrl, AppendText)
        BIND_MF(wxTextCtrl, EmulateKeyPress)
        BIND_MF(wxTextCtrl, SetStyle)
        BIND_MF(wxTextCtrl, GetStyle)
        BIND_MF(wxTextCtrl, SetDefaultStyle)
        BIND_MF(wxTextCtrl, GetDefaultStyle)
        BIND_MF(wxTextCtrl, XYToPosition)
        BIND_MF(wxTextCtrl, PositionToXY)
        BIND_MF(wxTextCtrl, ShowPosition)
        BIND_MF_OVERLOAD(wxTextCtrl, HitTest,
        wxTextCtrlHitTestResult, (const wxPoint&, long *) const)
        BIND_MF_OVERLOAD(wxTextCtrl, HitTest,
        wxTextCtrlHitTestResult, (const wxPoint&, wxTextCoord *, wxTextCoord *) const)
        BIND_MF(wxTextCtrl, Copy)
        BIND_MF(wxTextCtrl, Cut)
        BIND_MF(wxTextCtrl, Paste)
        BIND_MF(wxTextCtrl, CanCopy)
        BIND_MF(wxTextCtrl, CanCut)
        BIND_MF(wxTextCtrl, CanPaste)
        BIND_MF(wxTextCtrl, Undo)
        BIND_MF(wxTextCtrl, Redo)
        BIND_MF(wxTextCtrl, CanUndo)
        BIND_MF(wxTextCtrl, CanRedo)
        BIND_MF(wxTextCtrl, SetInsertionPoint)
        BIND_MF(wxTextCtrl, SetInsertionPointEnd)
        BIND_MF(wxTextCtrl, GetInsertionPoint)
        BIND_MF(wxTextCtrl, GetLastPosition)
        BIND_MF(wxTextCtrl, SetSelection)
        BIND_MF(wxTextCtrl, SelectAll)
        BIND_MF(wxTextCtrl, SetEditable)
        BIND_MF_OVERLOAD_NAME(print, wxTextCtrl, operator <<,
        wxTextCtrl&, (const wxString&))
        BIND_MF_OVERLOAD_NAME(print, wxTextCtrl, operator <<,
        wxTextCtrl&, (int))
        BIND_MF_OVERLOAD_NAME(print, wxTextCtrl, operator <<,
        wxTextCtrl&, (long))
        BIND_MF_OVERLOAD_NAME(print, wxTextCtrl, operator <<,
        wxTextCtrl& , (float))
        BIND_MF_OVERLOAD_NAME(print, wxTextCtrl, operator <<,
        wxTextCtrl&, (double))
        BIND_MF_OVERLOAD_NAME(print, wxTextCtrl, operator <<,
        wxTextCtrl&, (const wxChar))
        BIND_MF(wxTextCtrl, SendTextUpdatedEvent)
        BIND_MF(wxTextCtrl, DoUpdateWindowUI)
        BIND_MF(wxTextCtrl, ShouldInheritColours)

        END_BIND_CLASS(wxTextCtrl)
    END_BIND_MODULE(wx)
    return 0;
}