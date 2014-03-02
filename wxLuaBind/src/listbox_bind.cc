#include <precompile.h>

// namespace for class wxListBoxBase
namespace
{
    // Auto generated CPP code for 'Set'
    // =================================
    void Set2(wxListBoxBase* self, int n, const wxString* items)
    {
        return self->Set(n,items);
    }
    void Set3(wxListBoxBase* self, int n, const wxString* items, void ** clientData)
    {
        return self->Set(n,items,clientData);
    }

    // Auto generated CPP code for 'Set'
    // =================================
    void Set1(wxListBoxBase* self, const wxArrayString& items)
    {
        return self->Set(items);
    }
    void Set2(wxListBoxBase* self, const wxArrayString& items, void ** clientData)
    {
        return self->Set(items,clientData);
    }

    // Auto generated CPP code for 'DeselectAll'
    // =================================
    void DeselectAll0(wxListBoxBase* self)
    {
        return self->DeselectAll();
    }
    void DeselectAll1(wxListBoxBase* self, int itemToLeaveSelected)
    {
        return self->DeselectAll(itemToLeaveSelected);
    }
}  // namespace for wxListBoxBase

// namespace for class wxListBox
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxListBox* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos)
    {
        return self->Create(parent,id,pos);
    }
    bool Create4(wxListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,pos,size);
    }
    bool Create5(wxListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n)
    {
        return self->Create(parent,id,pos,size,n);
    }
    bool Create6(wxListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n, const wxString choices[])
    {
        return self->Create(parent,id,pos,size,n,choices);
    }
    bool Create7(wxListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style)
    {
        return self->Create(parent,id,pos,size,n,choices,style);
    }
    bool Create8(wxListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator)
    {
        return self->Create(parent,id,pos,size,n,choices,style,validator);
    }
    bool Create9(wxListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,pos,size,n,choices,style,validator,name);
    }

    // Auto generated CPP code for 'Create'
    // =================================
    bool Create5(wxListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, const wxArrayString& choices)
    {
        return self->Create(parent,id,pos,size,choices);
    }
    bool Create6(wxListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style)
    {
        return self->Create(parent,id,pos,size,choices,style);
    }
    bool Create7(wxListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,pos,size,choices,style,validator);
    }
    bool Create8(wxListBox* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,pos,size,choices,style,validator,name);
    }

    // Auto generated CPP code for 'FindString'
    // =================================
    int FindString1(wxListBox* self, const wxString& s)
    {
        return self->FindString(s);
    }
    int FindString2(wxListBox* self, const wxString& s, bool bCase)
    {
        return self->FindString(s,bCase);
    }
}  // namespace for wxListBox

BEGIN_WXLUA_BINDFUNC(listbox)
    BEGIN_BIND_MODULE(wx)
        // Bind class wxListBoxBase
        BEGIN_BIND_CPPCLASS(wxListBoxBase, wxControlWithItems)
        BIND_MF_OVERLOAD(wxListBoxBase, Insert,
        void, (const wxString&, unsigned int))
        BIND_MF_OVERLOAD(wxListBoxBase, Insert,
        void, (const wxString&, unsigned int, void *))
        BIND_MF_OVERLOAD(wxListBoxBase, Insert,
        void, (const wxString&, unsigned int, wxClientData *))
        BIND_MF_OVERLOAD(wxListBoxBase, InsertItems,
        void, (unsigned int, const wxString *, unsigned int))
        BIND_MF_OVERLOAD(wxListBoxBase, InsertItems,
        void, (const wxArrayString&, unsigned int))
        // Auto generated MACRO code for 'Set':
        // =================================
        BIND_F2MF_OVERLOAD(Set, 2,
        void, (wxListBoxBase*, int, const wxString*))
        BIND_F2MF_OVERLOAD(Set, 3,
        void, (wxListBoxBase*, int, const wxString*, void **))
        // Auto generated MACRO code for 'Set':
        // =================================
        BIND_F2MF_OVERLOAD(Set, 1,
        void, (wxListBoxBase*, const wxArrayString&))
        BIND_F2MF_OVERLOAD(Set, 2,
        void, (wxListBoxBase*, const wxArrayString&, void **))
        BIND_MF(wxListBoxBase, IsSelected)
        BIND_MF_OVERLOAD(wxListBoxBase, SetSelection,
        void, (int))
        BIND_MF_OVERLOAD(wxListBoxBase, SetSelection,
        void, (int, bool))
        BIND_MF(wxListBoxBase, Deselect)
        // Auto generated MACRO code for 'DeselectAll':
        // =================================
        BIND_F2MF_OVERLOAD(DeselectAll, 0,
        void, (wxListBoxBase*))
        BIND_F2MF_OVERLOAD(DeselectAll, 1,
        void, (wxListBoxBase*, int))
        BIND_MF_OVERLOAD(wxListBoxBase, SetStringSelection,
        bool, (const wxString&, bool))
        BIND_MF_OVERLOAD(wxListBoxBase, SetStringSelection,
        bool, (const wxString&))
        BIND_MF(wxListBoxBase, GetSelections)
        BIND_MF_OVERLOAD(wxListBoxBase, SetFirstItem,
        void, (int))
        BIND_MF_OVERLOAD(wxListBoxBase, SetFirstItem,
        void, (const wxString&))
        BIND_MF(wxListBoxBase, EnsureVisible)
        BIND_MF(wxListBoxBase, AppendAndEnsureVisible)
        BIND_MF(wxListBoxBase, HasMultipleSelection)
        BIND_MF(wxListBoxBase, IsSorted)
        BIND_MF(wxListBoxBase, Command)
        BIND_MF(wxListBoxBase, HitTest)
        END_BIND_CLASS(wxListBoxBase)

        // Bind class wxListBox
        BEGIN_BIND_CPPCLASS(wxListBox, wxListBoxBase)
        // Auto generated MACRO code for ctor of 'wxListBox':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxListBox':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&, const wxString&)
        // Auto generated MACRO code for ctor of 'wxListBox':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxListBox*, wxWindow *, wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxListBox*, wxWindow *, wxWindowID, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 9,
        bool, (wxListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&, const wxString&))
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxListBox*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&, const wxString&))
        BIND_MF(wxListBox, Clear)
        BIND_MF(wxListBox, Delete)
        BIND_MF(wxListBox, GetCount)
        BIND_MF(wxListBox, GetString)
        BIND_MF(wxListBox, SetString)
        // Auto generated MACRO code for 'FindString':
        // =================================
        BIND_F2MF_OVERLOAD(FindString, 1,
        int, (wxListBox*, const wxString&))
        BIND_F2MF_OVERLOAD(FindString, 2,
        int, (wxListBox*, const wxString&, bool))
        BIND_MF(wxListBox, IsSelected)
        BIND_MF(wxListBox, GetSelection)
        BIND_MF(wxListBox, GetSelections)
        END_BIND_CLASS(wxListBox)

    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(listbox)

