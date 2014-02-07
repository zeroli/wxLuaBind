
class wxSpinButtonBase : public wxControl
{
public:
    // ctor initializes the range with the default (0..100) values
    wxSpinButtonBase() { m_min = 0; m_max = 100; }

    // accessors
    virtual int GetValue() const = 0;
    virtual int GetMin() const { return m_min; }
    virtual int GetMax() const { return m_max; }

    // operations
    virtual void SetValue(int val) = 0;
    virtual void SetMin(int minVal) { SetRange ( minVal , m_max ) ; }
    virtual void SetMax(int maxVal) { SetRange ( m_min , maxVal ) ; }
    virtual void SetRange(int minVal, int maxVal)
    {
        m_min = minVal;
        m_max = maxVal;
    }

    // is this spin button vertically oriented?
    bool IsVertical() const { return (m_windowStyle & wxSP_VERTICAL) != 0; }
};

clas wxSpinButton : public wxSpinButtonBase
{
    // construction
    wxSpinButton() { }

    wxSpinButton(wxWindow *parent,
                 wxWindowID id = wxID_ANY,
                 const wxPoint& pos = wxDefaultPosition,
                 const wxSize& size = wxDefaultSize,
                 long style = wxSP_VERTICAL | wxSP_ARROW_KEYS,
                 const wxString& name = wxSPIN_BUTTON_NAME)
    {
        Create(parent, id, pos, size, style, name);
    }

    virtual ~wxSpinButton();

    bool Create(wxWindow *parent,
                wxWindowID id = wxID_ANY,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = wxSP_VERTICAL | wxSP_ARROW_KEYS,
                const wxString& name = wxSPIN_BUTTON_NAME);
};

class wxSpinEvent : public wxNotifyEvent
{
public:
    wxSpinEvent(wxEventType commandType = wxEVT_NULL, int winid = 0)
    {
    }

    // get the current value of the control
    int GetPosition() const { return m_commandInt; }
    void SetPosition(int pos) { m_commandInt = pos; }
};

