#include <precompile.h>

#include <wx/bmpcbox.h>

namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create7(wxBitmapComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString choices[])
    {
        return self->Create(parent,id,value,pos,size,n,choices);
    }
    bool Create8(wxBitmapComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style)
    {
        return self->Create(parent,id,value,pos,size,n,choices,style);
    }
    bool Create9(wxBitmapComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator)
    {
        return self->Create(parent,id,value,pos,size,n,choices,style,validator);
    }
    bool Create10(wxBitmapComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,value,pos,size,n,choices,style,validator,name);
    }

    // Auto generated CPP code for 'Create'
    // =================================
    bool Create6(wxBitmapComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, const wxArrayString& choices)
    {
        return self->Create(parent,id,value,pos,size,choices);
    }
    bool Create7(wxBitmapComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style)
    {
        return self->Create(parent,id,value,pos,size,choices,style);
    }
    bool Create8(wxBitmapComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,value,pos,size,choices,style,validator);
    }
    bool Create9(wxBitmapComboBox* self, wxWindow * parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, const wxArrayString& choices, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,value,pos,size,choices,style,validator,name);
    }

    // Auto generated CPP code for 'Append'
    // =================================
    int Append1(wxBitmapComboBox* self, const wxString& item)
    {
        return self->Append(item);
    }
    int Append2(wxBitmapComboBox* self, const wxString& item, const wxBitmap& bitmap)
    {
        return self->Append(item,bitmap);
    }
}  // namespace for wxBitmapComboBox

REGISTER_WXLUA_BIND(bmpcbox)
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CPPCLASS(wxBitmapComboBox, wxOwnerDrawnComboBox, wxBitmapComboBoxBase)
        // Auto generated MACRO code for ctor of 'wxBitmapComboBox':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxBitmapComboBox':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&, const wxString&)

        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxBitmapComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString[]))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxBitmapComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString[], long))
        BIND_F2MF_OVERLOAD(Create, 9,
        bool, (wxBitmapComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString[], long, const wxValidator&))
        // FIXME: over 10 arguments
        //BIND_F2MF_OVERLOAD(Create, 10,
        //bool, (wxBitmapComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, int, const wxString[], long, const wxValidator&, const wxString&))
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxBitmapComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxBitmapComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxBitmapComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 9,
        bool, (wxBitmapComboBox*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, const wxArrayString&, long, const wxValidator&, const wxString&))
        // Auto generated MACRO code for 'Append':
        // =================================
        BIND_F2MF_OVERLOAD(Append, 1,
        int, (wxBitmapComboBox*, const wxString&))
        BIND_F2MF_OVERLOAD(Append, 2,
        int, (wxBitmapComboBox*, const wxString&, const wxBitmap&))
        BIND_MF_OVERLOAD(wxBitmapComboBox, Append,
        int, (const wxString&, const wxBitmap&, void *))
        BIND_MF_OVERLOAD(wxBitmapComboBox, Append,
        int, (const wxString&, const wxBitmap&, wxClientData *))
        BIND_MF(wxBitmapComboBox, GetBitmapSize)
        BIND_MF(wxBitmapComboBox, GetItemBitmap)
        BIND_MF_OVERLOAD(wxBitmapComboBox, Insert,
        int, (const wxString&, const wxBitmap&, unsigned int))
        BIND_MF_OVERLOAD(wxBitmapComboBox, Insert,
        int, (const wxString&, const wxBitmap&, unsigned int, void *))
        BIND_MF_OVERLOAD(wxBitmapComboBox, Insert,
        int, (const wxString&, const wxBitmap&, unsigned int, wxClientData *))
        BIND_MF(wxBitmapComboBox, SetItemBitmap)
        BIND_MF(wxBitmapComboBox, Clear)
        BIND_MF(wxBitmapComboBox, Delete)
        END_BIND_CLASS(wxBitmapComboBox)
   END_BIND_MODULE(wx)
END_REGISTER(bmpcbox)
