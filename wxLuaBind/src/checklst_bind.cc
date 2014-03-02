#include <precompile.h>

// namespace for class wxCheckListBoxBase
namespace
{
    // Auto generated CPP code for 'Check'
    // =================================
    void Check1(wxCheckListBoxBase* self, unsigned int item)
    {
        return self->Check(item);
    }
    void Check2(wxCheckListBoxBase* self, unsigned int item, bool check)
    {
        return self->Check(item,check);
    }
}  // namespace for wxCheckListBoxBase

// namespace for class wxCheckListBox
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxCheckListBox* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxCheckListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos)
    {
        return self->Create(parent,id,pos);
    }
    bool Create4(wxCheckListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,pos,size);
    }
    bool Create5(wxCheckListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n)
    {
        return self->Create(parent,id,pos,size,n);
    }
    bool Create6(wxCheckListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n, const wxString choices[])
    {
        return self->Create(parent,id,pos,size,n,choices);
    }
    bool Create7(wxCheckListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style)
    {
        return self->Create(parent,id,pos,size,n,choices,style);
    }
    bool Create8(wxCheckListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator)
    {
        return self->Create(parent,id,pos,size,n,choices,style,validator);
    }
    bool Create9(wxCheckListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,pos,size,n,choices,style,validator,name);
    }

    // Auto generated CPP code for 'Create'
    // =================================
    bool Create5(wxCheckListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, const wxArrayString& choices)
    {
        return self->Create(parent,id,pos,size,choices);
    }
    bool Create6(wxCheckListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style)
    {
        return self->Create(parent,id,pos,size,choices,style);
    }
    bool Create7(wxCheckListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,pos,size,choices,style,validator);
    }
    bool Create8(wxCheckListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,pos,size,choices,style,validator,name);
    }

    // Auto generated CPP code for 'Check'
    // =================================
    void Check1(wxCheckListBox* self, unsigned int uiIndex)
    {
        return self->Check(uiIndex);
    }
    void Check2(wxCheckListBox* self, unsigned int uiIndex, bool bCheck)
    {
        return self->Check(uiIndex,bCheck);
    }
}  // namespace for wxCheckListBox

BEGIN_WXLUA_BINDFUNC(checklst)
    BEGIN_BIND_MODULE(wx)
        // Bind class wxCheckListBoxBase
        BEGIN_BIND_CPPCLASS(wxCheckListBoxBase, wxListBox)
        // Auto generated MACRO code for ctor of 'wxCheckListBoxBase':
        // =================================
        BIND_MF(wxCheckListBoxBase, IsChecked)
        // Auto generated MACRO code for 'Check':
        // =================================
        BIND_F2MF_OVERLOAD(Check, 1,
        void, (wxCheckListBoxBase*, unsigned int))
        BIND_F2MF_OVERLOAD(Check, 2,
        void, (wxCheckListBoxBase*, unsigned int, bool))
        END_BIND_CLASS(wxCheckListBoxBase)

        // Bind class wxCheckListBox
        BEGIN_BIND_CPPCLASS(wxCheckListBox, wxCheckListBoxBase)
        // Auto generated MACRO code for ctor of 'wxCheckListBox':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxCheckListBox':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&, const wxString&)
        // Auto generated MACRO code for ctor of 'wxCheckListBox':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxCheckListBox*, wxWindow *, wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxCheckListBox*, wxWindow *, wxWindowID, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxCheckListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxCheckListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxCheckListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxCheckListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxCheckListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 9,
        bool, (wxCheckListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&, const wxString&))
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxCheckListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxCheckListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxCheckListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxCheckListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&, const wxString&))
        BIND_MF(wxCheckListBox, Delete)
        BIND_MF(wxCheckListBox, SetFont)
        BIND_MF(wxCheckListBox, IsChecked)
        // Auto generated MACRO code for 'Check':
        // =================================
        BIND_F2MF_OVERLOAD(Check, 1,
        void, (wxCheckListBox*, unsigned int))
        BIND_F2MF_OVERLOAD(Check, 2,
        void, (wxCheckListBox*, unsigned int, bool))
        BIND_MF_OVERLOAD(wxCheckListBox, HitTest,
        int, (const wxPoint&) const)
        BIND_MF_OVERLOAD(wxCheckListBox, HitTest,
        int, (wxCoord, wxCoord) const)
        BIND_MF(wxCheckListBox, GetItemHeight)
        END_BIND_CLASS(wxCheckListBox)

    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(checklst)
