 wxMiniFrame() { }

  bool Create(wxWindow *parent,
              wxWindowID id,
              const wxString& title,
              const wxPoint& pos = wxDefaultPosition,
              const wxSize& size = wxDefaultSize,
              long style = wxCAPTION | wxCLIP_CHILDREN | wxRESIZE_BORDER,
              const wxString& name = wxFrameNameStr)
  {
      return wxFrame::Create(parent, id, title, pos, size,
                             style |
                             wxFRAME_TOOL_WINDOW |
                             (parent ? wxFRAME_FLOAT_ON_PARENT : 0), name);
  }

  wxMiniFrame(wxWindow *parent,
              wxWindowID id,
              const wxString& title,
              const wxPoint& pos = wxDefaultPosition,
              const wxSize& size = wxDefaultSize,
              long style = wxCAPTION | wxCLIP_CHILDREN | wxRESIZE_BORDER,
              const wxString& name = wxFrameNameStr)
  {
      Create(parent, id, title, pos, size, style, name);
  }
