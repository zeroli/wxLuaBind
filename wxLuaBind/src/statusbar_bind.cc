#include <precompile.h>

namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create1(wxStatusBar* self, wxWindow * parent)
    {
        return self->Create(parent);
    }
    bool Create2(wxStatusBar* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxStatusBar* self, wxWindow * parent, wxWindowID id, long style)
    {
        return self->Create(parent,id,style);
    }
    bool Create4(wxStatusBar* self, wxWindow * parent, wxWindowID id, long style, const wxString& name)
    {
        return self->Create(parent,id,style,name);
    }

    // Auto generated CPP code for 'SetFieldsCount'
    // =================================
    void SetFieldsCount0(wxStatusBar* self)
    {
        return self->SetFieldsCount();
    }
    void SetFieldsCount1(wxStatusBar* self, int number)
    {
        return self->SetFieldsCount(number);
    }
    void SetFieldsCount2(wxStatusBar* self, int number, const int * widths)
    {
        return self->SetFieldsCount(number,widths);
    }

    // Auto generated CPP code for 'SetStatusText'
    // =================================
    void SetStatusText1(wxStatusBar* self, const wxString& text)
    {
        return self->SetStatusText(text);
    }
    void SetStatusText2(wxStatusBar* self, const wxString& text, int number)
    {
        return self->SetStatusText(text,number);
    }

    // Auto generated CPP code for 'GetStatusText'
    // =================================
    wxString GetStatusText0(wxStatusBar* self)
    {
        return self->GetStatusText();
    }
    wxString GetStatusText1(wxStatusBar* self, int number)
    {
        return self->GetStatusText(number);
    }

    // Auto generated CPP code for 'PushStatusText'
    // =================================
    void PushStatusText1(wxStatusBar* self, const wxString& text)
    {
        return self->PushStatusText(text);
    }
    void PushStatusText2(wxStatusBar* self, const wxString& text, int number)
    {
        return self->PushStatusText(text,number);
    }

    // Auto generated CPP code for 'PopStatusText'
    // =================================
    void PopStatusText0(wxStatusBar* self)
    {
        return self->PopStatusText();
    }
    void PopStatusText1(wxStatusBar* self, int number)
    {
        return self->PopStatusText(number);
    }
}  // namespace

BEGIN_WXLUA_BINDFUNC(statusbar)
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS_WIN(wxStatusBar)
            BIND_CTOR()
            BIND_CTOR(wxWindow*)
            BIND_CTOR(wxWindow*, wxWindowID)
            BIND_CTOR(wxWindow*, wxWindowID, long)
            BIND_CTOR(wxWindow*, wxWindowID, long, const wxString&)

            BIND_MF(wxStatusBar, GetFieldsCount)

            // Auto generated MACRO code for 'Create':
            // =================================
            BIND_F2MF_OVERLOAD(Create, 1,
            bool, (wxStatusBar*,wxWindow *))
            BIND_F2MF_OVERLOAD(Create, 2,
            bool, (wxStatusBar*,wxWindow *,wxWindowID))
            BIND_F2MF_OVERLOAD(Create, 3,
            bool, (wxStatusBar*,wxWindow *,wxWindowID,long))
            BIND_F2MF_OVERLOAD(Create, 4,
            bool, (wxStatusBar*,wxWindow *,wxWindowID,long,const wxString&))

            // Auto generated MACRO code for 'SetFieldsCount':
            // =================================
            BIND_F2MF_OVERLOAD(SetFieldsCount, 0,
            void, (wxStatusBar*))
            BIND_F2MF_OVERLOAD(SetFieldsCount, 1,
            void, (wxStatusBar*,int))
            BIND_F2MF_OVERLOAD(SetFieldsCount, 2,
            void, (wxStatusBar*,int,const int *))

            // Auto generated MACRO code for 'SetStatusText':
            // =================================
            BIND_F2MF_OVERLOAD(SetStatusText, 1,
            void, (wxStatusBar*,const wxString&))
            BIND_F2MF_OVERLOAD(SetStatusText, 2,
            void, (wxStatusBar*,const wxString&,int))

            // Auto generated MACRO code for 'GetStatusText':
            // =================================
            BIND_F2MF_OVERLOAD(GetStatusText, 0,
            wxString, (wxStatusBar*))
            BIND_F2MF_OVERLOAD(GetStatusText, 1,
            wxString, (wxStatusBar*,int))

            // Auto generated MACRO code for 'PushStatusText':
            // =================================
            BIND_F2MF_OVERLOAD(PushStatusText, 1,
            void, (wxStatusBar*,const wxString&))
            BIND_F2MF_OVERLOAD(PushStatusText, 2,
            void, (wxStatusBar*,const wxString&,int))

            // Auto generated MACRO code for 'PopStatusText':
            // =================================
            BIND_F2MF_OVERLOAD(PopStatusText, 0,
            void, (wxStatusBar*))
            BIND_F2MF_OVERLOAD(PopStatusText, 1,
            void, (wxStatusBar*,int))

            BIND_MF(wxStatusBar, SetStatusWidths)
            BIND_MF(wxStatusBar, SetStatusStyles)

            BIND_MF(wxStatusBar, GetFieldRect)
            BIND_MF(wxStatusBar, SetMinHeight)
            BIND_MF(wxStatusBar, GetBorderX)
            BIND_MF(wxStatusBar, GetBorderY)
            BIND_MF(wxStatusBar, AcceptsFocus)
        END_BIND_CLASS(wxStatusBar)
    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(statusbar)
