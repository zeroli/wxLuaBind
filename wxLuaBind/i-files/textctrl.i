enum wxTextCtrlHitTestResult
{
    wxTE_HT_UNKNOWN = -2,   // this means HitTest() is simply not implemented
    wxTE_HT_BEFORE,         // either to the left or upper
    wxTE_HT_ON_TEXT,        // directly on
    wxTE_HT_BELOW,          // below [the last line]
    wxTE_HT_BEYOND          // after [the end of line]
};


enum wxTextAttrAlignment
{
    wxTEXT_ALIGNMENT_DEFAULT,
    wxTEXT_ALIGNMENT_LEFT,
    wxTEXT_ALIGNMENT_CENTRE,
    wxTEXT_ALIGNMENT_CENTER = wxTEXT_ALIGNMENT_CENTRE,
    wxTEXT_ALIGNMENT_RIGHT,
    wxTEXT_ALIGNMENT_JUSTIFIED
};

class wxTextAttr
{
public:
    // ctors
    wxTextAttr() { Init(); }
    wxTextAttr(const wxColour& colText,
               const wxColour& colBack = wxNullColour,
               const wxFont& font = wxNullFont,
               wxTextAttrAlignment alignment = wxTEXT_ALIGNMENT_DEFAULT);

    // operations
    void Init();

    // merges the attributes of the base and the overlay objects and returns
    // the result; the parameter attributes take precedence
    //
    // WARNING: the order of arguments is the opposite of Combine()
    static wxTextAttr Merge(const wxTextAttr& base, const wxTextAttr& overlay)
    {
        return Combine(overlay, base, NULL);
    }

    // merges the attributes of this object and overlay
    void Merge(const wxTextAttr& overlay)
    {
        *this = Merge(*this, overlay);
    }


    // operators
    void operator= (const wxTextAttr& attr);

    // setters
    void SetTextColour(const wxColour& colText) { m_colText = colText; m_flags |= wxTEXT_ATTR_TEXT_COLOUR; }
    void SetBackgroundColour(const wxColour& colBack) { m_colBack = colBack; m_flags |= wxTEXT_ATTR_BACKGROUND_COLOUR; }
    void SetFont(const wxFont& font, long flags = wxTEXT_ATTR_FONT) { m_font = font; m_flags |= flags; }
    void SetAlignment(wxTextAttrAlignment alignment) { m_textAlignment = alignment; m_flags |= wxTEXT_ATTR_ALIGNMENT; }
    void SetTabs(const wxArrayInt& tabs) { m_tabs = tabs; m_flags |= wxTEXT_ATTR_TABS; }
    void SetLeftIndent(int indent, int subIndent = 0) { m_leftIndent = indent; m_leftSubIndent = subIndent; m_flags |= wxTEXT_ATTR_LEFT_INDENT; }
    void SetRightIndent(int indent) { m_rightIndent = indent; m_flags |= wxTEXT_ATTR_RIGHT_INDENT; }
    void SetFlags(long flags) { m_flags = flags; }

    // accessors
    bool HasTextColour() const { return m_colText.Ok() && HasFlag(wxTEXT_ATTR_TEXT_COLOUR) ; }
    bool HasBackgroundColour() const { return m_colBack.Ok() && HasFlag(wxTEXT_ATTR_BACKGROUND_COLOUR) ; }
    bool HasFont() const { return m_font.Ok() && HasFlag(wxTEXT_ATTR_FONT) ; }
    bool HasAlignment() const { return (m_textAlignment != wxTEXT_ALIGNMENT_DEFAULT) && ((m_flags & wxTEXT_ATTR_ALIGNMENT) != 0) ; }
    bool HasTabs() const { return (m_flags & wxTEXT_ATTR_TABS) != 0 ; }
    bool HasLeftIndent() const { return (m_flags & wxTEXT_ATTR_LEFT_INDENT) != 0 ; }
    bool HasRightIndent() const { return (m_flags & wxTEXT_ATTR_RIGHT_INDENT) != 0 ; }
    bool HasFlag(long flag) const { return (m_flags & flag) != 0; }

    const wxColour& GetTextColour() const { return m_colText; }
    const wxColour& GetBackgroundColour() const { return m_colBack; }
    const wxFont& GetFont() const { return m_font; }
    wxTextAttrAlignment GetAlignment() const { return m_textAlignment; }
    const wxArrayInt& GetTabs() const { return m_tabs; }
    long GetLeftIndent() const { return m_leftIndent; }
    long GetLeftSubIndent() const { return m_leftSubIndent; }
    long GetRightIndent() const { return m_rightIndent; }
    long GetFlags() const { return m_flags; }

    // returns false if we have any attributes set, true otherwise
    bool IsDefault() const
    {
        return !HasTextColour() && !HasBackgroundColour() && !HasFont() && !HasAlignment() &&
               !HasTabs() && !HasLeftIndent() && !HasRightIndent() ;
    }

    // return the attribute having the valid font and colours: it uses the
    // attributes set in attr and falls back first to attrDefault and then to
    // the text control font/colours for those attributes which are not set
    static wxTextAttr Combine(const wxTextAttr& attr,
                              const wxTextAttr& attrDef,
                              const wxTextCtrlBase *text);
};


class WXDLLEXPORT wxTextCtrlBase : public wxControl
#if wxHAS_TEXT_WINDOW_STREAM
                                 , public wxSTD streambuf
#endif

{
public:
    // creation
    // --------

    wxTextCtrlBase(){}
    virtual ~wxTextCtrlBase(){}

    // accessors
    // ---------

    virtual wxString GetValue() const = 0;
    virtual bool IsEmpty() const { return GetValue().empty(); }

    virtual void SetValue(const wxString& value)
        { DoSetValue(value, SetValue_SendEvent); }
    virtual void ChangeValue(const wxString& value)
        { DoSetValue(value); }

    virtual wxString GetRange(long from, long to) const;

    virtual int GetLineLength(long lineNo) const = 0;
    virtual wxString GetLineText(long lineNo) const = 0;
    virtual int GetNumberOfLines() const = 0;

    virtual bool IsModified() const = 0;
    virtual bool IsEditable() const = 0;

    // more readable flag testing methods
    bool IsSingleLine() const { return !HasFlag(wxTE_MULTILINE); }
    bool IsMultiLine() const { return !IsSingleLine(); }

    // If the return values from and to are the same, there is no selection.
    virtual void GetSelection(long* from, long* to) const = 0;

    virtual wxString GetStringSelection() const;

    // operations
    // ----------

    // editing
    virtual void Clear() = 0;
    virtual void Replace(long from, long to, const wxString& value) = 0;
    virtual void Remove(long from, long to) = 0;

    // load/save the control's contents from/to a file
    bool LoadFile(const wxString& file, int fileType = wxTEXT_TYPE_ANY) { return DoLoadFile(file, fileType); }
    bool SaveFile(const wxString& file = wxEmptyString, int fileType = wxTEXT_TYPE_ANY);

    // implementation for loading/saving
    virtual bool DoLoadFile(const wxString& file, int fileType);
    virtual bool DoSaveFile(const wxString& file, int fileType);

    // sets/clears the dirty flag
    virtual void MarkDirty() = 0;
    virtual void DiscardEdits() = 0;
    void SetModified(bool modified)
    {
        if ( modified )
            MarkDirty();
        else
            DiscardEdits();
    }

    // set the max number of characters which may be entered in a single line
    // text control
    virtual void SetMaxLength(unsigned long WXUNUSED(len)) { }

    // writing text inserts it at the current position, appending always
    // inserts it at the end
    virtual void WriteText(const wxString& text) = 0;
    virtual void AppendText(const wxString& text) = 0;

    // insert the character which would have resulted from this key event,
    // return true if anything has been inserted
    virtual bool EmulateKeyPress(const wxKeyEvent& event);

    // text control under some platforms supports the text styles: these
    // methods allow to apply the given text style to the given selection or to
    // set/get the style which will be used for all appended text
    virtual bool SetStyle(long start, long end, const wxTextAttr& style);
    virtual bool GetStyle(long position, wxTextAttr& style);
    virtual bool SetDefaultStyle(const wxTextAttr& style);
    virtual const wxTextAttr& GetDefaultStyle() const;

    // translate between the position (which is just an index in the text ctrl
    // considering all its contents as a single strings) and (x, y) coordinates
    // which represent column and line.
    virtual long XYToPosition(long x, long y) const = 0;
    virtual bool PositionToXY(long pos, long *x, long *y) const = 0;

    virtual void ShowPosition(long pos) = 0;

    // find the character at position given in pixels
    //
    // NB: pt is in device coords (not adjusted for the client area origin nor
    //     scrolling)
    virtual wxTextCtrlHitTestResult HitTest(const wxPoint& pt, long *pos) const;
    virtual wxTextCtrlHitTestResult HitTest(const wxPoint& pt,
                                            wxTextCoord *col,
                                            wxTextCoord *row) const;

    // Clipboard operations
    virtual void Copy() = 0;
    virtual void Cut() = 0;
    virtual void Paste() = 0;

    virtual bool CanCopy() const;
    virtual bool CanCut() const;
    virtual bool CanPaste() const;

    // Undo/redo
    virtual void Undo() = 0;
    virtual void Redo() = 0;

    virtual bool CanUndo() const = 0;
    virtual bool CanRedo() const = 0;

    // Insertion point
    virtual void SetInsertionPoint(long pos) = 0;
    virtual void SetInsertionPointEnd() = 0;
    virtual long GetInsertionPoint() const = 0;
    virtual wxTextPos GetLastPosition() const = 0;

    virtual void SetSelection(long from, long to) = 0;
    virtual void SelectAll();
    virtual void SetEditable(bool editable) = 0;

    // stream-like insertion operators: these are always available, whether we
    // were, or not, compiled with streambuf support
    wxTextCtrl& operator<<(const wxString& s);
    wxTextCtrl& operator<<(int i);
    wxTextCtrl& operator<<(long i);
    wxTextCtrl& operator<<(float f);
    wxTextCtrl& operator<<(double d);
    wxTextCtrl& operator<<(const wxChar c);

    // generate the wxEVT_COMMAND_TEXT_UPDATED event, like SetValue() does
    void SendTextUpdatedEvent();

    // do the window-specific processing after processing the update event
    virtual void DoUpdateWindowUI(wxUpdateUIEvent& event);

    virtual bool ShouldInheritColours() const { return false; }
};

class wxTextUrlEvent : public wxCommandEvent
{
public:
    wxTextUrlEvent(int winid, const wxMouseEvent& evtMouse,
                   long start, long end)
        { }

    // get the mouse event which happend over the URL
    const wxMouseEvent& GetMouseEvent() const { return m_evtMouse; }

    // get the start of the URL
    long GetURLStart() const { return m_start; }

    // get the end of the URL
    long GetURLEnd() const { return m_end; }
};
