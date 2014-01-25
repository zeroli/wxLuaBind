#include <precompile.h>
// namespace for class wxRadioBoxBase
namespace
{
    // Auto generated CPP code for 'Enable'
    // =================================
    bool Enable1(wxRadioBoxBase* self, unsigned int n)
    {
        return self->Enable(n);
    }
    bool Enable2(wxRadioBoxBase* self, unsigned int n, bool enable)
    {
        return self->Enable(n,enable);
    }

    // Auto generated CPP code for 'Show'
    // =================================
    bool Show1(wxRadioBoxBase* self, unsigned int n)
    {
        return self->Show(n);
    }
    bool Show2(wxRadioBoxBase* self, unsigned int n, bool show)
    {
        return self->Show(n,show);
    }
}  // namespace for wxRadioBoxBase

// namespace for class wxRadioBox
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create3(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title)
    {
        return self->Create(parent,id,title);
    }
    bool Create4(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos)
    {
        return self->Create(parent,id,title,pos);
    }
    bool Create5(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,title,pos,size);
    }
    bool Create6(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, int n)
    {
        return self->Create(parent,id,title,pos,size,n);
    }
    bool Create7(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, int n, const wxString choices[])
    {
        return self->Create(parent,id,title,pos,size,n,choices);
    }
    bool Create8(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], int majorDim)
    {
        return self->Create(parent,id,title,pos,size,n,choices,majorDim);
    }
    bool Create9(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], int majorDim, long style)
    {
        return self->Create(parent,id,title,pos,size,n,choices,majorDim,style);
    }
    bool Create10(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], int majorDim, long style, const wxValidator& val)
    {
        return self->Create(parent,id,title,pos,size,n,choices,majorDim,style,val);
    }
    bool Create11(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], int majorDim, long style, const wxValidator& val, const wxString& name)
    {
        return self->Create(parent,id,title,pos,size,n,choices,majorDim,style,val,name);
    }

    // Auto generated CPP code for 'Create'
    // =================================
    bool Create6(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, const wxArrayString& choices)
    {
        return self->Create(parent,id,title,pos,size,choices);
    }
    bool Create7(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, int majorDim)
    {
        return self->Create(parent,id,title,pos,size,choices,majorDim);
    }
    bool Create8(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, int majorDim, long style)
    {
        return self->Create(parent,id,title,pos,size,choices,majorDim,style);
    }
    bool Create9(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, int majorDim, long style, const wxValidator& val)
    {
        return self->Create(parent,id,title,pos,size,choices,majorDim,style,val);
    }
    bool Create10(wxRadioBox* self, wxWindow * parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, int majorDim, long style, const wxValidator& val, const wxString& name)
    {
        return self->Create(parent,id,title,pos,size,choices,majorDim,style,val,name);
    }

    // Auto generated CPP code for 'Enable'
    // =================================
    bool Enable1(wxRadioBox* self, unsigned int n)
    {
        return self->Enable(n);
    }
    bool Enable2(wxRadioBox* self, unsigned int n, bool enable)
    {
        return self->Enable(n,enable);
    }

    // Auto generated CPP code for 'Show'
    // =================================
    bool Show1(wxRadioBox* self, unsigned int n)
    {
        return self->Show(n);
    }
    bool Show2(wxRadioBox* self, unsigned int n, bool show)
    {
        return self->Show(n,show);
    }

    // Auto generated CPP code for 'Show'
    // =================================
    bool Show0(wxRadioBox* self)
    {
        return self->Show();
    }
    bool Show1(wxRadioBox* self, bool show)
    {
        return self->Show(show);
    }

    // Auto generated CPP code for 'Enable'
    // =================================
    bool Enable0(wxRadioBox* self)
    {
        return self->Enable();
    }
    bool Enable1(wxRadioBox* self, bool enable)
    {
        return self->Enable(enable);
    }
}  // namespace for wxRadioBox

REGISTER_WXLUA_BIND(radiobox)
{
    BEGIN_BIND_MODULE(wx)
        // Bind class wxRadioBoxBase
        BEGIN_BIND_CLASS(wxRadioBoxBase, wxItemContainerImmutable)
        // Auto generated MACRO code for 'Enable':
        // =================================
        BIND_F2MF_OVERLOAD(Enable, 1,
        bool, (wxRadioBoxBase*, unsigned int))
        BIND_F2MF_OVERLOAD(Enable, 2,
        bool, (wxRadioBoxBase*, unsigned int, bool))
        // Auto generated MACRO code for 'Show':
        // =================================
        BIND_F2MF_OVERLOAD(Show, 1,
        bool, (wxRadioBoxBase*, unsigned int))
        BIND_F2MF_OVERLOAD(Show, 2,
        bool, (wxRadioBoxBase*, unsigned int, bool))
        BIND_MF(wxRadioBoxBase, IsItemEnabled)
        BIND_MF(wxRadioBoxBase, IsItemShown)
        BIND_MF(wxRadioBoxBase, GetColumnCount)
        BIND_MF(wxRadioBoxBase, GetRowCount)
        BIND_MF(wxRadioBoxBase, GetNextItem)
#if wxUSE_TOOLTIPS
        BIND_MF(wxRadioBoxBase, SetItemToolTip)
        BIND_MF(wxRadioBoxBase, GetItemToolTip)
#endif
#if wxUSE_HELP
        BIND_MF_OVERLOAD(wxRadioBoxBase, SetItemHelpText,
        void, (unsigned int, const wxString&))
        BIND_MF(wxRadioBoxBase, GetItemHelpText)
#else
        BIND_MF_OVERLOAD(wxRadioBoxBase, SetItemHelpText,
        void, (unsigned int, const wxString&))
#endif
        BIND_MF(wxRadioBoxBase, GetItemFromPoint)
        END_BIND_CLASS(wxRadioBoxBase)

        // Bind class wxRadioBox
        BEGIN_BIND_CLASS(wxRadioBox, wxStaticBox, wxRadioBoxBase)
        // Auto generated MACRO code for ctor of 'wxRadioBox':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxRadioBox':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, int)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, int, long)
#if 0
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, int, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, int, long, const wxValidator&, const wxString&)
#endif
        // Auto generated MACRO code for ctor of 'wxRadioBox':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, int)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, int, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, int, long, const wxValidator&)
#if 0
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, int, long, const wxValidator&, const wxString&)
#endif
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, int))
        BIND_F2MF_OVERLOAD(Create, 9,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, int, long))
#if 0
        BIND_F2MF_OVERLOAD(Create, 10,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, int, long, const wxValidator&))

        BIND_F2MF_OVERLOAD(Create, 11,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, int, long, const wxValidator&, const wxString&))
#endif
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, int))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, int, long))
        BIND_F2MF_OVERLOAD(Create, 9,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, int, long, const wxValidator&))
#if 0
        BIND_F2MF_OVERLOAD(Create, 10,
        bool, (wxRadioBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, int, long, const wxValidator&, const wxString&))
#endif
        BIND_MF(wxRadioBox, SetSelection)
        BIND_MF(wxRadioBox, GetSelection)
        BIND_MF(wxRadioBox, GetCount)
        BIND_MF(wxRadioBox, GetString)
        BIND_MF(wxRadioBox, SetString)
        // Auto generated MACRO code for 'Enable':
        // =================================
        BIND_F2MF_OVERLOAD(Enable, 1,
        bool, (wxRadioBox*, unsigned int))
        BIND_F2MF_OVERLOAD(Enable, 2,
        bool, (wxRadioBox*, unsigned int, bool))
        // Auto generated MACRO code for 'Show':
        // =================================
        BIND_F2MF_OVERLOAD(Show, 1,
        bool, (wxRadioBox*, unsigned int))
        BIND_F2MF_OVERLOAD(Show, 2,
        bool, (wxRadioBox*, unsigned int, bool))
        BIND_MF(wxRadioBox, IsItemEnabled)
        BIND_MF(wxRadioBox, IsItemShown)
        BIND_MF(wxRadioBox, GetItemFromPoint)
        // Auto generated MACRO code for 'Show':
        // =================================
        BIND_F2MF_OVERLOAD(Show, 0,
        bool, (wxRadioBox*))
        BIND_F2MF_OVERLOAD(Show, 1,
        bool, (wxRadioBox*, bool))
        // Auto generated MACRO code for 'Enable':
        // =================================
        BIND_F2MF_OVERLOAD(Enable, 0,
        bool, (wxRadioBox*))
        BIND_F2MF_OVERLOAD(Enable, 1,
        bool, (wxRadioBox*, bool))
        BIND_MF(wxRadioBox, SetFocus)
        BIND_MF(wxRadioBox, SetFont)
#if wxUSE_TOOLTIPS
        BIND_MF(wxRadioBox, HasToolTips)
#endif
#if wxUSE_HELP
        BIND_MF(wxRadioBox, GetHelpTextAtPoint)
#endif
        BIND_MF(wxRadioBox, Reparent)
        BIND_MF(wxRadioBox, AcceptsFocus)
        BIND_MF(wxRadioBox, SetLabelFont)
        BIND_MF(wxRadioBox, SetButtonFont)
        END_BIND_CLASS(wxRadioBox)

    END_BIND_MODULE(wx)
    return 0;
}