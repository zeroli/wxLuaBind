#include <precompile.h>

namespace StatusBar
{
    // 3 default arguments => 4 functions
    bool Create(wxStatusBar* self, wxWindow *parent)
    {
        return self->Create(parent, wxID_ANY, wxST_SIZEGRIP, wxStatusBarNameStr);
    }
    bool Create(wxStatusBar* self, wxWindow *parent, wxWindowID id)
    {
        return self->Create(parent, id, wxST_SIZEGRIP, wxStatusBarNameStr);
    }
    bool Create(wxStatusBar* self, wxWindow *parent, wxWindowID id, long style)
    {
        return self->Create(parent, id, style, wxStatusBarNameStr);
    }
    bool Create(wxStatusBar* self, wxWindow *parent, wxWindowID id, long style, const wxString& name)
    {
        return self->Create(parent, id, style, name);
    }

    // 2 default argument => 3 interfaces
    void SetFieldsCount(wxStatusBar* self)
    {
        return self->SetFieldsCount(1, NULL);
    }
    void SetFieldsCount(wxStatusBar* self, int number)
    {
        return self->SetFieldsCount(number, NULL);
    }
    void SetFieldsCount(wxStatusBar* self, int number, const int *widths)
    {
        return self->SetFieldsCount(number, widths);
    }

    // 1 default argument => 2 interfaces
    void SetStatusText(wxStatusBar* self, const wxString& text)
    {
        return self->SetStatusText(text, 0);
    }
    void SetStatusText(wxStatusBar* self, const wxString& text, int number)
    {
        return self->SetStatusText(text, number);
    }
    // 1 default argument => 2 interfaces
    wxString GetStatusText(wxStatusBar* self)
    {
        return self->GetStatusText();
    }
    wxString GetStatusText(wxStatusBar* self, int number)
    {
        return self->GetStatusText(number);
    }

    // 1 default argument => 2 interfaces
    void PushStatusText(wxStatusBar* self, const wxString& text)
    {
        return self->PushStatusText(text, 0);
    }
    void PushStatusText(wxStatusBar* self, const wxString& text, int number)
    {
        return self->PushStatusText(text, number);
    }
    // 1 default arguments => 2 interfaces
    void PopStatusText(wxStatusBar* self)
    {
        return self->PopStatusText(0);
    }
    void PopStatusText(wxStatusBar* self, int number)
    {
        return self->PopStatusText(number);
    }
};

REGISTER_WXLUA_BIND(wxstatusbar)
{
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS(wxStatusBar, StatusBar, wxWindow)
            BIND_CTOR()
            BIND_CTOR(wxWindow*)
            BIND_CTOR(wxWindow*, wxWindowID)
            BIND_CTOR(wxWindow*, wxWindowID, long)
            BIND_CTOR(wxWindow*, wxWindowID, long, const wxString&)

            BIND_F2MF_OVERLOAD(StatusBar, Create,
                bool, (wxStatusBar*, wxWindow*))
            BIND_F2MF_OVERLOAD(StatusBar, Create,
                bool, (wxStatusBar*, wxWindow*, wxWindowID))
            BIND_F2MF_OVERLOAD(StatusBar, Create,
                bool, (wxStatusBar*, wxWindow*, wxWindowID, long))
            BIND_F2MF_OVERLOAD(StatusBar, Create,
                bool, (wxStatusBar*, wxWindow*, wxWindowID, long, const wxString&))

            BIND_F2MF_OVERLOAD(StatusBar, SetFieldsCount,
                void, (wxStatusBar*))
            BIND_F2MF_OVERLOAD(StatusBar, SetFieldsCount,
                void, (wxStatusBar*, int))
            BIND_F2MF_OVERLOAD(StatusBar, SetFieldsCount,
                void, (wxStatusBar*, int, const int*))

            BIND_MF(wxStatusBar, GetFieldsCount)

            BIND_F2MF_OVERLOAD(StatusBar, SetStatusText,
                void, (wxStatusBar*, const wxString&))
            BIND_F2MF_OVERLOAD(StatusBar, SetStatusText,
                void, (wxStatusBar*, const wxString&, int))

            BIND_F2MF_OVERLOAD(StatusBar, GetStatusText,
                wxString, (wxStatusBar*))
            BIND_F2MF_OVERLOAD(StatusBar, GetStatusText,
                wxString, (wxStatusBar*, int))

            BIND_F2MF_OVERLOAD(StatusBar, PushStatusText,
                void, (wxStatusBar*, const wxString&))
            BIND_F2MF_OVERLOAD(StatusBar, PushStatusText,
                void, (wxStatusBar*, const wxString&, int))

            BIND_F2MF_OVERLOAD(StatusBar, PopStatusText,
                void, (wxStatusBar*))
            BIND_F2MF_OVERLOAD(StatusBar, PopStatusText,
                void, (wxStatusBar*, int))

            BIND_MF(wxStatusBar, SetStatusWidths)
            BIND_MF(wxStatusBar, SetStatusStyles)

            BIND_MF(wxStatusBar, GetFieldRect)
            BIND_MF(wxStatusBar, SetMinHeight)
            BIND_MF(wxStatusBar, GetBorderX)
            BIND_MF(wxStatusBar, GetBorderY)
            BIND_MF(wxStatusBar, AcceptsFocus)
        END_BIND_CLASS(wxStatusBar)
    END_BIND_MODULE(wx)

    return 0;
}
