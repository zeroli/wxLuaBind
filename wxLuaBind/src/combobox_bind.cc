#include <precompile.h>

#include <wx/bmpcbox.h>

namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxChoice* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxChoice* self, wxWindow * parent, wxWindowID id, const wxPoint& pos)
    {
        return self->Create(parent,id,pos);
    }
    bool Create4(wxChoice* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,pos,size);
    }
    bool Create5(wxChoice* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n)
    {
        return self->Create(parent,id,pos,size,n);
    }
    bool Create6(wxChoice* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n, const wxString* choices)
    {
        return self->Create(parent,id,pos,size,n,choices);
    }
    bool Create7(wxChoice* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n, const wxString* choices, long style)
    {
        return self->Create(parent,id,pos,size,n,choices,style);
    }
    bool Create8(wxChoice* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n, const wxString* choices, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,pos,size,n,choices,style,validator);
    }
    bool Create9(wxChoice* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n, const wxString* choices, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,pos,size,n,choices,style,validator,name);
    }

    // Auto generated CPP code for 'Create'
    // =================================
    bool Create5(wxChoice* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, const wxArrayString& choices)
    {
        return self->Create(parent,id,pos,size,choices);
    }
    bool Create6(wxChoice* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style)
    {
        return self->Create(parent,id,pos,size,choices,style);
    }
    bool Create7(wxChoice* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,pos,size,choices,style,validator);
    }
    bool Create8(wxChoice* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,pos,size,choices,style,validator,name);
    }

    // Auto generated CPP code for 'FindString'
    // =================================
    int FindString1(wxChoice* self, const wxString& s)
    {
        return self->FindString(s);
    }
    int FindString2(wxChoice* self, const wxString& s, bool bCase)
    {
        return self->FindString(s,bCase);
    }
}  // namespace

namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxComboBox* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value)
    {
        return self->Create(parent,id,value);
    }
    bool Create4(wxComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos)
    {
        return self->Create(parent,id,value,pos);
    }
    bool Create5(wxComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,value,pos,size);
    }
    bool Create6(wxComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n)
    {
        return self->Create(parent,id,value,pos,size,n);
    }
    bool Create7(wxComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString* choices)
    {
        return self->Create(parent,id,value,pos,size,n,choices);
    }
    bool Create8(wxComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString* choices, long style)
    {
        return self->Create(parent,id,value,pos,size,n,choices,style);
    }
    bool Create9(wxComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString* choices, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,value,pos,size,n,choices,style,validator);
    }
    bool Create10(wxComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString* choices, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,value,pos,size,n,choices,style,validator,name);
    }

    // Auto generated CPP code for 'Create'
    // =================================
    bool Create6(wxComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, const wxArrayString& choices)
    {
        return self->Create(parent,id,value,pos,size,choices);
    }
    bool Create7(wxComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style)
    {
        return self->Create(parent,id,value,pos,size,choices,style);
    }
    bool Create8(wxComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,value,pos,size,choices,style,validator);
    }
    bool Create9(wxComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,value,pos,size,choices,style,validator,name);
    }
}  // namespace

BEGIN_WXLUA_BINDFUNC(combobox, BIND_NO_COMBOBOX)
    BEGIN_LUA_TABLE(wx)
        BIND_TABLE_VALUE(wxComboBoxNameStr, &wxComboBoxNameStr[0])
    END_LUA_TABLE(wx)

    BEGIN_BIND_MODULE(wx)
    BEGIN_BIND_CPPCLASS(wxChoice, wxControl, wxItemContainer)
    // Auto generated MACRO code for ctor of 'wxChoice':
    // =================================
    BIND_CTOR()
    // Auto generated MACRO code for ctor of 'wxChoice':
    // =================================
    BIND_CTOR(wxWindow *, wxWindowID)
    BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&)
    BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&)
    BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int)
    BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*)
    BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long)
    BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&)
    BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&, const wxString&)
    // Auto generated MACRO code for ctor of 'wxChoice':
    // =================================
    BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&)
    BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long)
    BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&)
    BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&, const wxString&)
    // Auto generated MACRO code for 'Create':
    // =================================
    BIND_F2MF_OVERLOAD(Create, 2,
    bool, (wxChoice*, wxWindow *, wxWindowID))
    BIND_F2MF_OVERLOAD(Create, 3,
    bool, (wxChoice*, wxWindow *, wxWindowID, const wxPoint&))
    BIND_F2MF_OVERLOAD(Create, 4,
    bool, (wxChoice*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&))
    BIND_F2MF_OVERLOAD(Create, 5,
    bool, (wxChoice*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int))
    BIND_F2MF_OVERLOAD(Create, 6,
    bool, (wxChoice*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*))
    BIND_F2MF_OVERLOAD(Create, 7,
    bool, (wxChoice*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long))
    BIND_F2MF_OVERLOAD(Create, 8,
    bool, (wxChoice*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&))
    BIND_F2MF_OVERLOAD(Create, 9,
    bool, (wxChoice*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&, const wxString&))
    // Auto generated MACRO code for 'Create':
    // =================================
    BIND_F2MF_OVERLOAD(Create, 5,
    bool, (wxChoice*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&))
    BIND_F2MF_OVERLOAD(Create, 6,
    bool, (wxChoice*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long))
    BIND_F2MF_OVERLOAD(Create, 7,
    bool, (wxChoice*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&))
    BIND_F2MF_OVERLOAD(Create, 8,
    bool, (wxChoice*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&, const wxString&))
    BIND_MF(wxChoice, SetLabel)
    BIND_MF(wxChoice, Delete)
    BIND_MF(wxChoice, Clear)
    BIND_MF(wxChoice, GetCount)
    BIND_MF(wxChoice, GetSelection)
    BIND_MF(wxChoice, GetCurrentSelection)
    BIND_MF(wxChoice, SetSelection)
    // Auto generated MACRO code for 'FindString':
    // =================================
    BIND_F2MF_OVERLOAD(FindString, 1,
    int, (wxChoice*, const wxString&))
    BIND_F2MF_OVERLOAD(FindString, 2,
    int, (wxChoice*, const wxString&, bool))
    BIND_MF(wxChoice, GetString)
    BIND_MF(wxChoice, SetString)
    END_BIND_CLASS(wxChoice)

    // wxComboBox bind
    BEGIN_BIND_CPPCLASS(wxComboBox, wxChoice)
    // Auto generated MACRO code for ctor of 'wxComboBox':
    // =================================
    BIND_CTOR()
    // Auto generated MACRO code for ctor of 'wxComboBox':
    // =================================
    BIND_CTOR(wxWindow *, wxWindowID)
    BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
    BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
    BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
    BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int)
    BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*)
    BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, long)
    BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&)
    // FIXME: cannot over 10 arguments
    //BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&, const wxString&)
    // Auto generated MACRO code for ctor of 'wxComboBox':
    // =================================
    BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&)
    BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long)
    BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&)
    BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&, const wxString&)
    // Auto generated MACRO code for 'Create':
    // =================================
    BIND_F2MF_OVERLOAD(Create, 2,
    bool, (wxComboBox*, wxWindow *, wxWindowID))
    BIND_F2MF_OVERLOAD(Create, 3,
    bool, (wxComboBox*, wxWindow *, wxWindowID, const wxString&))
    BIND_F2MF_OVERLOAD(Create, 4,
    bool, (wxComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
    BIND_F2MF_OVERLOAD(Create, 5,
    bool, (wxComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
    BIND_F2MF_OVERLOAD(Create, 6,
    bool, (wxComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int))
    BIND_F2MF_OVERLOAD(Create, 7,
    bool, (wxComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*))
    BIND_F2MF_OVERLOAD(Create, 8,
    bool, (wxComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, long))
    BIND_F2MF_OVERLOAD(Create, 9,
    bool, (wxComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&))
    // FIXME: cannot over 10 arguments
    //BIND_F2MF_OVERLOAD(Create, 10,
    //bool, (wxComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&, const wxString&))
    // Auto generated MACRO code for 'Create':
    // =================================
    BIND_F2MF_OVERLOAD(Create, 6,
    bool, (wxComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&))
    BIND_F2MF_OVERLOAD(Create, 7,
    bool, (wxComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long))
    BIND_F2MF_OVERLOAD(Create, 8,
    bool, (wxComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&))
    BIND_F2MF_OVERLOAD(Create, 9,
    bool, (wxComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&, const wxString&))

    BIND_MF(wxComboBox, SetValue)
    BIND_MF(wxComboBox, GetValue)
    END_BIND_CLASS(wxComboBox)

    // Bind class wxBitmapComboBoxBase
    BEGIN_BIND_CPPCLASS(wxBitmapComboBoxBase)
    BIND_MF(wxBitmapComboBoxBase, GetItemBitmap)
    BIND_MF(wxBitmapComboBoxBase, SetItemBitmap)
    BIND_MF(wxBitmapComboBoxBase, GetBitmapSize)
    END_BIND_CLASS(wxBitmapComboBoxBase)

    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
        BIND_MACRO(wxGENERIC_BITMAPCOMBOBOX)
    END_LUA_TABLE(wx)
END_WXLUA_BINDFUNC(combobox)
