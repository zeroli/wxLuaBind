class wxAuiDockArt
{
    wxAuiDockArt() { }
    virtual ~wxAuiDockArt() { }

    virtual int GetMetric(int id) = 0;
    virtual void SetMetric(int id, int new_val) = 0;
    virtual void SetFont(int id, const wxFont& font) = 0;
    virtual wxFont GetFont(int id) = 0;
    virtual wxColour GetColour(int id) = 0;
    virtual void SetColour(int id, const wxColor& colour) = 0;
    wxColour GetColor(int id) { return GetColour(id); }
    void SetColor(int id, const wxColour& color) { SetColour(id, color); }

    virtual void DrawSash(wxDC& dc,
                          wxWindow* window,
                          int orientation,
                          const wxRect& rect) = 0;

    virtual void DrawBackground(wxDC& dc,
                          wxWindow* window,
                          int orientation,
                          const wxRect& rect) = 0;

    virtual void DrawCaption(wxDC& dc,
                          wxWindow* window,
                          const wxString& text,
                          const wxRect& rect,
                          wxAuiPaneInfo& pane) = 0;

    virtual void DrawGripper(wxDC& dc,
                          wxWindow* window,
                          const wxRect& rect,
                          wxAuiPaneInfo& pane) = 0;

    virtual void DrawBorder(wxDC& dc,
                          wxWindow* window,
                          const wxRect& rect,
                          wxAuiPaneInfo& pane) = 0;

    virtual void DrawPaneButton(wxDC& dc,
                          wxWindow* window,
                          int button,
                          int button_state,
                          const wxRect& rect,
                          wxAuiPaneInfo& pane) = 0;
};

class wxAuiDefaultDockArt : public wxAuiDockArt
{
public:

    wxAuiDefaultDockArt();

    int GetMetric(int metric_id);
    void SetMetric(int metric_id, int new_val);
    wxColour GetColour(int id);
    void SetColour(int id, const wxColor& colour);
    void SetFont(int id, const wxFont& font);
    wxFont GetFont(int id);

    void DrawSash(wxDC& dc,
                  wxWindow *window,
                  int orientation,
                  const wxRect& rect);

    void DrawBackground(wxDC& dc,
                  wxWindow *window,
                  int orientation,
                  const wxRect& rect);

    void DrawCaption(wxDC& dc,
                  wxWindow *window,
                  const wxString& text,
                  const wxRect& rect,
                  wxAuiPaneInfo& pane);

    void DrawGripper(wxDC& dc,
                  wxWindow *window,
                  const wxRect& rect,
                  wxAuiPaneInfo& pane);

    void DrawBorder(wxDC& dc,
                  wxWindow *window,
                  const wxRect& rect,
                  wxAuiPaneInfo& pane);

    void DrawPaneButton(wxDC& dc,
                  wxWindow *window,
                  int button,
                  int button_state,
                  const wxRect& rect,
                  wxAuiPaneInfo& pane);
};
