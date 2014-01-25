    wxItemContainer() { m_clientDataItemsType = wxClientData_None; }
    virtual ~wxItemContainer();

    // adding items
    // ------------

    int Append(const wxString& item)
        { return DoAppend(item); }
    int Append(const wxString& item, void *clientData)
        { int n = DoAppend(item); SetClientData(n, clientData); return n; }
    int Append(const wxString& item, wxClientData *clientData)
        { int n = DoAppend(item); SetClientObject(n, clientData); return n; }

    // only for rtti needs (separate name)
    void AppendString( const wxString& item)
        { Append( item ); }

    // append several items at once to the control
    void Append(const wxArrayString& strings);

    int Insert(const wxString& item, unsigned int pos)
        { return DoInsert(item, pos); }
    int Insert(const wxString& item, unsigned int pos, void *clientData);
    int Insert(const wxString& item, unsigned int pos, wxClientData *clientData);

    // deleting items
    // --------------

    virtual void Clear() = 0;
    virtual void Delete(unsigned int n) = 0;

    // misc
    // ----

    // client data stuff
    void SetClientData(unsigned int n, void* clientData);
    void* GetClientData(unsigned int n) const;

    void SetClientObject(unsigned int n, wxClientData* clientData);
    wxClientData* GetClientObject(unsigned int n) const;

    bool HasClientObjectData() const
        { return m_clientDataItemsType == wxClientData_Object; }
    bool HasClientUntypedData() const
        { return m_clientDataItemsType == wxClientData_Void; }
