#include <precompile.h>

#include <wx/odcombo.h>

// namespace for class wxOwnerDrawnComboBox
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value)
    {
        return self->Create(parent,id,value);
    }
    bool Create4(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos)
    {
        return self->Create(parent,id,value,pos);
    }
    bool Create5(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,value,pos,size);
    }
    bool Create6(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,value,pos,size,style);
    }
    bool Create7(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,value,pos,size,style,validator);
    }
    bool Create8(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,value,pos,size,style,validator,name);
    }

    // Auto generated CPP code for 'Create'
    // =================================
    bool Create7(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString choices[])
    {
        return self->Create(parent,id,value,pos,size,n,choices);
    }
    bool Create8(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style)
    {
        return self->Create(parent,id,value,pos,size,n,choices,style);
    }
    bool Create9(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator)
    {
        return self->Create(parent,id,value,pos,size,n,choices,style,validator);
    }
    bool Create10(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,value,pos,size,n,choices,style,validator,name);
    }

    // Auto generated CPP code for 'Create'
    // =================================
    bool Create6(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, const wxArrayString& choices)
    {
        return self->Create(parent,id,value,pos,size,choices);
    }
    bool Create7(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style)
    {
        return self->Create(parent,id,value,pos,size,choices,style);
    }
    bool Create8(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,value,pos,size,choices,style,validator);
    }
    bool Create9(wxOwnerDrawnComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,value,pos,size,choices,style,validator,name);
    }

    // Auto generated CPP code for 'FindString'
    // =================================
    int FindString1(wxOwnerDrawnComboBox* self, const wxString& s)
    {
        return self->FindString(s);
    }
    int FindString2(wxOwnerDrawnComboBox* self, const wxString& s, bool bCase)
    {
        return self->FindString(s,bCase);
    }
}  // namespace for wxOwnerDrawnComboBox

REGISTER_WXLUA_PREBIND(odcombo, BIND_NO_ODCOMBO)
    BEGIN_BIND_MODULE(wx)
        // Bind class wxOwnerDrawnComboBox
        BEGIN_BIND_CPPCLASS(wxOwnerDrawnComboBox, wxComboCtrl, wxItemContainer)
        // Auto generated MACRO code for ctor of 'wxOwnerDrawnComboBox':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&))
        // Auto generated MACRO code for ctor of 'wxOwnerDrawnComboBox':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, long))
        BIND_F2MF_OVERLOAD(Create, 9,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&))
        // FIXME: over 10 arguments
        //BIND_F2MF_OVERLOAD(Create, 10,
        //bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString*, long, const wxValidator&, const wxString&))
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 9,
        bool, (wxOwnerDrawnComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&, const wxString&))
        BIND_MF(wxOwnerDrawnComboBox, SetPopupControl)
        BIND_MF(wxOwnerDrawnComboBox, Clear)
        BIND_MF(wxOwnerDrawnComboBox, Delete)
        BIND_MF(wxOwnerDrawnComboBox, GetCount)
        BIND_MF(wxOwnerDrawnComboBox, GetString)
        BIND_MF(wxOwnerDrawnComboBox, SetString)
        // Auto generated MACRO code for 'FindString':
        // =================================
        BIND_F2MF_OVERLOAD(FindString, 1,
        int, (wxOwnerDrawnComboBox*, const wxString&))
        BIND_F2MF_OVERLOAD(FindString, 2,
        int, (wxOwnerDrawnComboBox*, const wxString&, bool))
        BIND_MF(wxOwnerDrawnComboBox, Select)
        BIND_MF(wxOwnerDrawnComboBox, GetSelection)
        BIND_MF_OVERLOAD(wxOwnerDrawnComboBox, SetSelection,
        void, (int))
        BIND_MF_OVERLOAD(wxOwnerDrawnComboBox, SetSelection,
        void, (long, long))
        BIND_MF(wxOwnerDrawnComboBox, GetWidestItemWidth)
        BIND_MF(wxOwnerDrawnComboBox, GetWidestItem)
        END_BIND_CLASS(wxOwnerDrawnComboBox)

    END_BIND_MODULE(wx)
END_REGISTER(odcombo)
