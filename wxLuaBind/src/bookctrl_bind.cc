#include <precompile.h>

#include <wx/bookctrl.h>

// namespace for class wxBookCtrlBase
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxBookCtrlBase* self, wxWindow * parent, wxWindowID winid)
    {
        return self->Create(parent,winid);
    }
    bool Create3(wxBookCtrlBase* self, wxWindow * parent, wxWindowID winid, const wxPoint& pos)
    {
        return self->Create(parent,winid,pos);
    }
    bool Create4(wxBookCtrlBase* self, wxWindow * parent, wxWindowID winid, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,winid,pos,size);
    }
    bool Create5(wxBookCtrlBase* self, wxWindow * parent, wxWindowID winid, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,winid,pos,size,style);
    }
    bool Create6(wxBookCtrlBase* self, wxWindow * parent, wxWindowID winid, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
    {
        return self->Create(parent,winid,pos,size,style,name);
    }

    // Auto generated CPP code for 'AddPage'
    // =================================
    bool AddPage2(wxBookCtrlBase* self, wxWindow * page, const wxString& text)
    {
        return self->AddPage(page,text);
    }
    bool AddPage3(wxBookCtrlBase* self, wxWindow * page, const wxString& text, bool bSelect)
    {
        return self->AddPage(page,text,bSelect);
    }
    bool AddPage4(wxBookCtrlBase* self, wxWindow * page, const wxString& text, bool bSelect, int imageId)
    {
        return self->AddPage(page,text,bSelect,imageId);
    }

    // Auto generated CPP code for 'InsertPage'
    // =================================
    bool InsertPage3(wxBookCtrlBase* self, size_t n, wxWindow * page, const wxString& text)
    {
        return self->InsertPage(n,page,text);
    }
    bool InsertPage4(wxBookCtrlBase* self, size_t n, wxWindow * page, const wxString& text, bool bSelect)
    {
        return self->InsertPage(n,page,text,bSelect);
    }
    bool InsertPage5(wxBookCtrlBase* self, size_t n, wxWindow * page, const wxString& text, bool bSelect, int imageId)
    {
        return self->InsertPage(n,page,text,bSelect,imageId);
    }

    // Auto generated CPP code for 'AdvanceSelection'
    // =================================
    void AdvanceSelection0(wxBookCtrlBase* self)
    {
        return self->AdvanceSelection();
    }
    void AdvanceSelection1(wxBookCtrlBase* self, bool forward)
    {
        return self->AdvanceSelection(forward);
    }

    // Auto generated CPP code for 'HitTest'
    // =================================
int HitTest1(wxBookCtrlBase* self, const wxPoint& pt)
{
    return self->HitTest(pt);
}
int HitTest2(wxBookCtrlBase* self, const wxPoint& pt, long * flags)
{
    return self->HitTest(pt, flags);
}
}  // namespace for wxBookCtrlBase

REGISTER_WXLUA_BIND(bookctrl)
{
    BEGIN_BIND_MODULE(wx)
        // Bind class wxBookCtrlBase
        BEGIN_BIND_CLASS(wxBookCtrlBase)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxBookCtrlBase*, wxWindow *, wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxBookCtrlBase*, wxWindow *, wxWindowID, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxBookCtrlBase*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxBookCtrlBase*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxBookCtrlBase*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long, const wxString&))
        BIND_MF(wxBookCtrlBase, GetPageCount)
        BIND_MF_OVERLOAD(wxBookCtrlBase, GetPage,
        wxWindow *, (size_t))
        BIND_MF_OVERLOAD(wxBookCtrlBase, GetPage,
        wxWindow *, (size_t) const)
        BIND_MF(wxBookCtrlBase, GetCurrentPage)
        BIND_MF(wxBookCtrlBase, GetSelection)
        BIND_MF(wxBookCtrlBase, SetPageText)
        BIND_MF(wxBookCtrlBase, GetPageText)
        BIND_MF(wxBookCtrlBase, SetImageList)
        BIND_MF(wxBookCtrlBase, AssignImageList)
        BIND_MF(wxBookCtrlBase, GetImageList)
        BIND_MF(wxBookCtrlBase, GetPageImage)
        BIND_MF(wxBookCtrlBase, SetPageImage)
        BIND_MF(wxBookCtrlBase, SetPageSize)
        BIND_MF(wxBookCtrlBase, CalcSizeFromPage)
        BIND_MF(wxBookCtrlBase, GetInternalBorder)
        BIND_MF(wxBookCtrlBase, SetInternalBorder)
        BIND_MF(wxBookCtrlBase, SetControlMargin)
        BIND_MF(wxBookCtrlBase, GetControlMargin)
        BIND_MF(wxBookCtrlBase, IsVertical)
        BIND_MF(wxBookCtrlBase, SetFitToCurrentPage)
        BIND_MF(wxBookCtrlBase, GetFitToCurrentPage)
        BIND_MF(wxBookCtrlBase, GetControlSizer)
        BIND_MF(wxBookCtrlBase, DeletePage)
        BIND_MF(wxBookCtrlBase, RemovePage)
        BIND_MF(wxBookCtrlBase, DeleteAllPages)
        // Auto generated MACRO code for 'AddPage':
        // =================================
        BIND_F2MF_OVERLOAD(AddPage, 2,
        bool, (wxBookCtrlBase*, wxWindow *, const wxString&))
        BIND_F2MF_OVERLOAD(AddPage, 3,
        bool, (wxBookCtrlBase*, wxWindow *, const wxString&, bool))
        BIND_F2MF_OVERLOAD(AddPage, 4,
        bool, (wxBookCtrlBase*, wxWindow *, const wxString&, bool, int))
        // Auto generated MACRO code for 'InsertPage':
        // =================================
        BIND_F2MF_OVERLOAD(InsertPage, 3,
        bool, (wxBookCtrlBase*, size_t, wxWindow *, const wxString&))
        BIND_F2MF_OVERLOAD(InsertPage, 4,
        bool, (wxBookCtrlBase*, size_t, wxWindow *, const wxString&, bool))
        BIND_F2MF_OVERLOAD(InsertPage, 5,
        bool, (wxBookCtrlBase*, size_t, wxWindow *, const wxString&, bool, int))
        BIND_MF(wxBookCtrlBase, SetSelection)
        BIND_MF(wxBookCtrlBase, ChangeSelection)
        // Auto generated MACRO code for 'AdvanceSelection':
        // =================================
        BIND_F2MF_OVERLOAD(AdvanceSelection, 0,
        void, (wxBookCtrlBase*))
        BIND_F2MF_OVERLOAD(AdvanceSelection, 1,
        void, (wxBookCtrlBase*, bool))
        // Auto generated MACRO code for 'HitTest':
        // =================================
        BIND_F2MF_OVERLOAD(HitTest, 1,
        int, (wxBookCtrlBase*, const wxPoint&))
        BIND_F2MF_OVERLOAD(HitTest, 2,
        int, (wxBookCtrlBase*, const wxPoint&, long *))
        BIND_MF(wxBookCtrlBase, HasMultiplePages)
    END_BIND_CLASS(wxBookCtrlBase)

    END_BIND_MODULE(wx)
    return 0;
}