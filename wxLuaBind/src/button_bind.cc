#include <precompile.h>

namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxButton* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxButton* self, wxWindow * parent, wxWindowID id, const wxString& label)
    {
        return self->Create(parent,id,label);
    }
    bool Create4(wxButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos)
    {
        return self->Create(parent,id,label,pos);
    }
    bool Create5(wxButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,label,pos,size);
    }
    bool Create6(wxButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,label,pos,size,style);
    }
    bool Create7(wxButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,label,pos,size,style,validator);
    }
    bool Create8(wxButton* self, wxWindow * parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,label,pos,size,style,validator,name);
    }
}  // namespace

// namespace for class wxBitmapButton
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create3(wxBitmapButton* self, wxWindow * parent, wxWindowID id, const wxBitmap& bitmap)
    {
        return self->Create(parent,id,bitmap);
    }
    bool Create4(wxBitmapButton* self, wxWindow * parent, wxWindowID id, const wxBitmap& bitmap, const wxPoint& pos)
    {
        return self->Create(parent,id,bitmap,pos);
    }
    bool Create5(wxBitmapButton* self, wxWindow * parent, wxWindowID id, const wxBitmap& bitmap, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,bitmap,pos,size);
    }
    bool Create6(wxBitmapButton* self, wxWindow * parent, wxWindowID id, const wxBitmap& bitmap, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,bitmap,pos,size,style);
    }
    bool Create7(wxBitmapButton* self, wxWindow * parent, wxWindowID id, const wxBitmap& bitmap, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,bitmap,pos,size,style,validator);
    }
    bool Create8(wxBitmapButton* self, wxWindow * parent, wxWindowID id, const wxBitmap& bitmap, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,bitmap,pos,size,style,validator,name);
    }
}  // namespace for wxBitmapButton

BEGIN_WXLUA_BINDFUNC(button)
    BEGIN_LUA_TABLE(wx)
        BIND_MACRO(wxBU_EXACTFIT)
        BIND_TABLE_VALUE(wxButtonNameStr, &wxButtonNameStr[0])
    END_LUA_TABLE(wx)

    BEGIN_BIND_MODULE(wx)

        BEGIN_BIND_CLASS_CONTROL(wxButton)
        // Auto generated MACRO code for ctor of 'wxButton':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxButton':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxButton*, wxWindow *, wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxButton*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxButton*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&))
        BIND_MF(wxButton, SetImageLabel)
        BIND_MF(wxButton, SetImageMargins)
        BIND_MF(wxButton, SetDefault)
        BIND_MF(wxButton, ShouldInheritColours)
        BEGIN_BIND_SCOPE()
        BIND_SMF(wxButton, GetDefaultSize)
        END_BIND_SCOPE()
        END_BIND_CLASS(wxButton)

        BEGIN_BIND_CPPCLASS(wxBitmapButton, wxButton)
        // Auto generated MACRO code for ctor of 'wxBitmapButton':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxBitmapButton':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID, const wxBitmap&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxBitmap&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxBitmap&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxBitmap&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxBitmap&, const wxPoint&, const wxSize&, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxBitmap&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxBitmapButton*, wxWindow *, wxWindowID, const wxBitmap&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxBitmapButton*, wxWindow *, wxWindowID, const wxBitmap&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxBitmapButton*, wxWindow *, wxWindowID, const wxBitmap&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxBitmapButton*, wxWindow *, wxWindowID, const wxBitmap&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxBitmapButton*, wxWindow *, wxWindowID, const wxBitmap&, const wxPoint&, const wxSize&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxBitmapButton*, wxWindow *, wxWindowID, const wxBitmap&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&))
        BIND_MF(wxBitmapButton, SetBitmapLabel)
        BIND_MF(wxBitmapButton, SetBitmapSelected)
        BIND_MF(wxBitmapButton, SetBitmapFocus)
        BIND_MF(wxBitmapButton, SetBitmapDisabled)
        BIND_MF(wxBitmapButton, SetBitmapHover)
        BIND_MF_OVERLOAD(wxBitmapButton, GetBitmapLabel,
        const wxBitmap&, () const)
        BIND_MF_OVERLOAD(wxBitmapButton, GetBitmapSelected,
        const wxBitmap&, () const)
        BIND_MF_OVERLOAD(wxBitmapButton, GetBitmapFocus,
        const wxBitmap&, () const)
        BIND_MF_OVERLOAD(wxBitmapButton, GetBitmapDisabled,
        const wxBitmap&, () const)
        BIND_MF_OVERLOAD(wxBitmapButton, GetBitmapHover,
        const wxBitmap&, () const)
        BIND_MF_OVERLOAD(wxBitmapButton, GetBitmapLabel,
        wxBitmap&, ())
        BIND_MF_OVERLOAD(wxBitmapButton, GetBitmapSelected,
        wxBitmap&, ())
        BIND_MF_OVERLOAD(wxBitmapButton, GetBitmapFocus,
        wxBitmap&, ())
        BIND_MF_OVERLOAD(wxBitmapButton, GetBitmapDisabled,
        wxBitmap&, ())
        BIND_MF_OVERLOAD(wxBitmapButton, GetBitmapHover,
        wxBitmap&, ())
        BIND_MF(wxBitmapButton, SetMargins)
        BIND_MF(wxBitmapButton, GetMarginX)
        BIND_MF(wxBitmapButton, GetMarginY)
        END_BIND_CLASS(wxBitmapButton)

    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(button)
