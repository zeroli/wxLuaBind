template<class ValueWrapper>
  std::ostream& operator<<(std::ostream& os
      , object_interface<ValueWrapper> const& v);
  
bool operator() () const;

void UpdateUI(wxEvtHandler* source = (wxEvtHandler*)NULL);

wxMenuBar *GetMenuBar() const;


    virtual void SetMargins(int x, int y);
    void SetMargins(const wxSize& size)
        { SetMargins((int) size.x, (int) size.y); }
    virtual void SetToolPacking(int packing)
        { m_toolPacking = packing; }
    virtual void SetToolSeparation(int separation)
        { m_toolSeparation = separation; }

    virtual wxSize GetToolMargins() const { return wxSize(m_xMargin, m_yMargin); }
    virtual int GetToolPacking() const { return m_toolPacking; }
    virtual int GetToolSeparation() const { return m_toolSeparation; }

    