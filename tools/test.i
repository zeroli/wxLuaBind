template<class ValueWrapper>
  std::ostream& operator<<(std::ostream& os
      , object_interface<ValueWrapper> const& v);
  
bool operator() () const;

void UpdateUI(wxEvtHandler* source = (wxEvtHandler*)NULL);

wxMenuBar *GetMenuBar() const;


