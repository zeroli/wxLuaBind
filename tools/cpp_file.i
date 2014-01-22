    bool Create(wxWindow *parent,
                wxWindowID id = wxID_ANY,
                long style = wxST_SIZEGRIP,
                const wxString& name = wxStatusBarNameStr);
    virtual void SetFieldsCount(int number = 1, const int *widths = NULL);
    virtual void     SetStatusText(const wxString& text, int number = 0);
    virtual wxString GetStatusText(int number = 0) const;
    void PushStatusText(const wxString& text, int number = 0);
    void PopStatusText(int number = 0);