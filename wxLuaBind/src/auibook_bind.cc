#include <precompile.h>

#include <wx/aui/aui.h>

// namespace for class wxAuiTabContainer
namespace
{
    // Auto generated CPP code for 'AddButton'
    // =================================
    void AddButton2(wxAuiTabContainer* self, int id, int location)
    {
        return self->AddButton(id,location);
    }
    void AddButton3(wxAuiTabContainer* self, int id, int location, const wxBitmap& normal_bitmap)
    {
        return self->AddButton(id,location,normal_bitmap);
    }
    void AddButton4(wxAuiTabContainer* self, int id, int location, const wxBitmap& normal_bitmap, const wxBitmap& disabled_bitmap)
    {
        return self->AddButton(id,location,normal_bitmap,disabled_bitmap);
    }
}  // namespace for wxAuiTabContainer

// namespace for class wxAuiNotebook
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create1(wxAuiNotebook* self, wxWindow* parent)
    {
        return self->Create(parent);
    }
    bool Create2(wxAuiNotebook* self, wxWindow* parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxAuiNotebook* self, wxWindow* parent, wxWindowID id, const wxPoint& pos)
    {
        return self->Create(parent,id,pos);
    }
    bool Create4(wxAuiNotebook* self, wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,pos,size);
    }
    bool Create5(wxAuiNotebook* self, wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,pos,size,style);
    }

    // Auto generated CPP code for 'AddPage'
    // =================================
    bool AddPage2(wxAuiNotebook* self, wxWindow* page, const wxString& caption)
    {
        return self->AddPage(page,caption);
    }
    bool AddPage3(wxAuiNotebook* self, wxWindow* page, const wxString& caption, bool select)
    {
        return self->AddPage(page,caption,select);
    }
    bool AddPage4(wxAuiNotebook* self, wxWindow* page, const wxString& caption, bool select, const wxBitmap& bitmap)
    {
        return self->AddPage(page,caption,select,bitmap);
    }

    // Auto generated CPP code for 'InsertPage'
    // =================================
    bool InsertPage3(wxAuiNotebook* self, size_t page_idx, wxWindow* page, const wxString& caption)
    {
        return self->InsertPage(page_idx,page,caption);
    }
    bool InsertPage4(wxAuiNotebook* self, size_t page_idx, wxWindow* page, const wxString& caption, bool select)
    {
        return self->InsertPage(page_idx,page,caption,select);
    }
    bool InsertPage5(wxAuiNotebook* self, size_t page_idx, wxWindow* page, const wxString& caption, bool select, const wxBitmap& bitmap)
    {
        return self->InsertPage(page_idx,page,caption,select,bitmap);
    }

    // Auto generated CPP code for 'AdvanceSelection'
    // =================================
    void AdvanceSelection0(wxAuiNotebook* self)
    {
        return self->AdvanceSelection();
    }
    void AdvanceSelection1(wxAuiNotebook* self, bool forward)
    {
        return self->AdvanceSelection(forward);
    }
}  // namespace for wxAuiNotebook

REGISTER_WXLUA_BIND(auibook)
{
#ifdef wxUSE_AUI
    BEGIN_LUA_TABLE(wx)
        // Bind enum wxAuiNotebookOption (totally 15)
        BIND_ENUM(wxAUI_NB_TOP)
        BIND_ENUM(wxAUI_NB_LEFT)
        BIND_ENUM(wxAUI_NB_RIGHT)
        BIND_ENUM(wxAUI_NB_BOTTOM)
        BIND_ENUM(wxAUI_NB_TAB_SPLIT)
        BIND_ENUM(wxAUI_NB_TAB_MOVE)
        BIND_ENUM(wxAUI_NB_TAB_EXTERNAL_MOVE)
        BIND_ENUM(wxAUI_NB_TAB_FIXED_WIDTH)
        BIND_ENUM(wxAUI_NB_SCROLL_BUTTONS)
        BIND_ENUM(wxAUI_NB_WINDOWLIST_BUTTON)
        BIND_ENUM(wxAUI_NB_CLOSE_BUTTON)
        BIND_ENUM(wxAUI_NB_CLOSE_ON_ACTIVE_TAB)
        BIND_ENUM(wxAUI_NB_CLOSE_ON_ALL_TABS)
        BIND_ENUM(wxAUI_NB_MIDDLE_CLICK_CLOSE)
        BIND_ENUM(wxAUI_NB_MIDDLE_CLICK_CLOSE)

        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSE)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_PAGE_CHANGED)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_PAGE_CHANGING)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_BUTTON)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_BEGIN_DRAG)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_END_DRAG)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_DRAG_MOTION)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_ALLOW_DND)
#if wxABI_VERSION >= 20805
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_TAB_MIDDLE_DOWN)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_TAB_MIDDLE_UP)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_TAB_RIGHT_DOWN)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_TAB_RIGHT_UP)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSED)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_DRAG_DONE)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_BG_DCLICK)
        BIND_VARIABLE(wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSE)
#endif
    END_LUA_TABLE(wx)

    BEGIN_BIND_MODULE(wx)
    // Bind class wxAuiNotebookEvent
    BEGIN_BIND_CLASS(wxAuiNotebookEvent, wxNotifyEvent)
    // Auto generated MACRO code for ctor of 'wxAuiNotebookEvent':
    // =================================
    BIND_CTOR(wxEventType)
    BIND_CTOR(wxEventType, int)
    // Auto generated MACRO code for ctor of 'wxAuiNotebookEvent':
    // =================================
    BIND_CTOR(const wxAuiNotebookEvent&)
    BIND_MF(wxAuiNotebookEvent, Clone)
    BIND_MF(wxAuiNotebookEvent, SetSelection)
    BIND_MF(wxAuiNotebookEvent, GetSelection)
    BIND_MF(wxAuiNotebookEvent, SetOldSelection)
    BIND_MF(wxAuiNotebookEvent, GetOldSelection)
    BIND_MF(wxAuiNotebookEvent, SetDragSource)
    BIND_MF(wxAuiNotebookEvent, GetDragSource)
    END_BIND_CLASS(wxAuiNotebookEvent)

    BEGIN_BIND_CLASS(wxAuiNotebookPage)
        BIND_MD(wxAuiNotebookPage, window)
        BIND_MD(wxAuiNotebookPage, caption)
        BIND_MD(wxAuiNotebookPage, bitmap)
        BIND_MD(wxAuiNotebookPage, rect)
        BIND_MD(wxAuiNotebookPage, active)
    END_BIND_CLASS(wxAuiNotebookPage)

    BEGIN_BIND_CLASS(wxAuiTabContainerButton)
        BIND_MD(wxAuiTabContainerButton, id)
        BIND_MD(wxAuiTabContainerButton, cur_state)
        BIND_MD(wxAuiTabContainerButton, location)
        BIND_MD(wxAuiTabContainerButton, bitmap)
        BIND_MD(wxAuiTabContainerButton, dis_bitmap)
        BIND_MD(wxAuiTabContainerButton, rect)
    END_BIND_CLASS(wxAuiTabContainerButton)

    // Bind class wxAuiTabArt
    BEGIN_BIND_CLASS(wxAuiTabArt)
    BIND_MF(wxAuiTabArt, Clone)
    BIND_MF(wxAuiTabArt, SetFlags)
    BIND_MF(wxAuiTabArt, SetSizingInfo)
    BIND_MF(wxAuiTabArt, SetNormalFont)
    BIND_MF(wxAuiTabArt, SetSelectedFont)
    BIND_MF(wxAuiTabArt, SetMeasuringFont)
    BIND_MF(wxAuiTabArt, DrawBackground)
    BIND_MF(wxAuiTabArt, DrawTab)
    BIND_MF(wxAuiTabArt, DrawButton)
    BIND_MF(wxAuiTabArt, GetTabSize)
    BIND_MF(wxAuiTabArt, ShowDropDown)
    BIND_MF(wxAuiTabArt, GetIndentSize)
    BIND_MF(wxAuiTabArt, GetBestTabCtrlSize)
    END_BIND_CLASS(wxAuiTabArt)

    // Bind class wxAuiDefaultTabArt
    BEGIN_BIND_CLASS(wxAuiDefaultTabArt, wxAuiTabArt)
    // Auto generated MACRO code for ctor of 'wxAuiDefaultTabArt':
    // =================================
    BIND_CTOR()
    BIND_MF(wxAuiDefaultTabArt, Clone)
    BIND_MF(wxAuiDefaultTabArt, SetFlags)
    BIND_MF(wxAuiDefaultTabArt, SetSizingInfo)
    BIND_MF(wxAuiDefaultTabArt, SetNormalFont)
    BIND_MF(wxAuiDefaultTabArt, SetSelectedFont)
    BIND_MF(wxAuiDefaultTabArt, SetMeasuringFont)
    BIND_MF(wxAuiDefaultTabArt, DrawBackground)
    BIND_MF(wxAuiDefaultTabArt, DrawTab)
    BIND_MF(wxAuiDefaultTabArt, DrawButton)
    BIND_MF(wxAuiDefaultTabArt, GetIndentSize)
    BIND_MF(wxAuiDefaultTabArt, GetTabSize)
    BIND_MF(wxAuiDefaultTabArt, ShowDropDown)
    BIND_MF(wxAuiDefaultTabArt, GetBestTabCtrlSize)
    END_BIND_CLASS(wxAuiDefaultTabArt)

    // Bind class wxAuiSimpleTabArt
    BEGIN_BIND_CLASS(wxAuiSimpleTabArt,wxAuiTabArt)
    // Auto generated MACRO code for ctor of 'wxAuiSimpleTabArt':
    // =================================
    BIND_CTOR()
    BIND_MF(wxAuiSimpleTabArt, Clone)
    BIND_MF(wxAuiSimpleTabArt, SetFlags)
    BIND_MF(wxAuiSimpleTabArt, SetSizingInfo)
    BIND_MF(wxAuiSimpleTabArt, SetNormalFont)
    BIND_MF(wxAuiSimpleTabArt, SetSelectedFont)
    BIND_MF(wxAuiSimpleTabArt, SetMeasuringFont)
    BIND_MF(wxAuiSimpleTabArt, DrawBackground)
    BIND_MF(wxAuiSimpleTabArt, DrawTab)
    BIND_MF(wxAuiSimpleTabArt, DrawButton)
    BIND_MF(wxAuiSimpleTabArt, GetIndentSize)
    BIND_MF(wxAuiSimpleTabArt, GetTabSize)
    BIND_MF(wxAuiSimpleTabArt, ShowDropDown)
    BIND_MF(wxAuiSimpleTabArt, GetBestTabCtrlSize)
    END_BIND_CLASS(wxAuiSimpleTabArt)

    // Bind class wxAuiTabContainer
    BEGIN_BIND_CLASS(wxAuiTabContainer)
    // Auto generated MACRO code for ctor of 'wxAuiTabContainer':
    // =================================
    BIND_CTOR()
    BIND_MF(wxAuiTabContainer, SetArtProvider)
    BIND_MF(wxAuiTabContainer, GetArtProvider)
    BIND_MF(wxAuiTabContainer, SetFlags)
    BIND_MF(wxAuiTabContainer, GetFlags)
    BIND_MF(wxAuiTabContainer, AddPage)
    BIND_MF(wxAuiTabContainer, InsertPage)
    BIND_MF(wxAuiTabContainer, MovePage)
    BIND_MF(wxAuiTabContainer, RemovePage)
    BIND_MF_OVERLOAD(wxAuiTabContainer, SetActivePage,
    bool, (wxWindow*))
    BIND_MF_OVERLOAD(wxAuiTabContainer, SetActivePage,
    bool, (size_t))
    BIND_MF(wxAuiTabContainer, SetNoneActive)
    BIND_MF(wxAuiTabContainer, GetActivePage)
    BIND_MF(wxAuiTabContainer, TabHitTest)
    BIND_MF(wxAuiTabContainer, ButtonHitTest)
    BIND_MF(wxAuiTabContainer, GetWindowFromIdx)
    BIND_MF(wxAuiTabContainer, GetIdxFromWindow)
    BIND_MF(wxAuiTabContainer, GetPageCount)
    BIND_MF_OVERLOAD(wxAuiTabContainer, GetPage,
    wxAuiNotebookPage&, (size_t))
    BIND_MF_OVERLOAD(wxAuiTabContainer, GetPage,
    const wxAuiNotebookPage&, (size_t) const)
    BIND_MF(wxAuiTabContainer, GetPages)
    BIND_MF(wxAuiTabContainer, SetNormalFont)
    BIND_MF(wxAuiTabContainer, SetSelectedFont)
    BIND_MF(wxAuiTabContainer, SetMeasuringFont)
    BIND_MF(wxAuiTabContainer, DoShowHide)
    BIND_MF(wxAuiTabContainer, SetRect)
    BIND_MF(wxAuiTabContainer, RemoveButton)
    // Auto generated MACRO code for 'AddButton':
    // =================================
    BIND_F2MF_OVERLOAD(AddButton, 2,
    void, (wxAuiTabContainer*, int, int))
    BIND_F2MF_OVERLOAD(AddButton, 3,
    void, (wxAuiTabContainer*, int, int, const wxBitmap&))
    BIND_F2MF_OVERLOAD(AddButton, 4,
    void, (wxAuiTabContainer*, int, int, const wxBitmap&, const wxBitmap&))
    BIND_MF(wxAuiTabContainer, GetTabOffset)
    BIND_MF(wxAuiTabContainer, SetTabOffset)
    BIND_MF(wxAuiTabContainer, IsTabVisible)
    BIND_MF(wxAuiTabContainer, MakeTabVisible)
    END_BIND_CLASS(wxAuiTabContainer)

    BEGIN_BIND_CLASS(wxAuiTabCtrl, wxControl, wxAuiTabContainer)
#if wxABI_VERSION >= 20805
        BIND_MF(wxAuiTabCtrl, IsDragging)
#endif
    END_BIND_CLASS(wxAuiTabCtrl)

    // Bind class wxAuiNotebook
    BEGIN_BIND_CLASS_CONTROL(wxAuiNotebook)
    // Auto generated MACRO code for ctor of 'wxAuiNotebook':
    // =================================
    BIND_CTOR()
    // Auto generated MACRO code for ctor of 'wxAuiNotebook':
    // =================================
    BIND_CTOR(wxWindow*)
    BIND_CTOR(wxWindow*, wxWindowID)
    BIND_CTOR(wxWindow*, wxWindowID, const wxPoint&)
    BIND_CTOR(wxWindow*, wxWindowID, const wxPoint&, const wxSize&)
    BIND_CTOR(wxWindow*, wxWindowID, const wxPoint&, const wxSize&, long)
    // Auto generated MACRO code for 'Create':
    // =================================
    BIND_F2MF_OVERLOAD(Create, 1,
    bool, (wxAuiNotebook*, wxWindow*))
    BIND_F2MF_OVERLOAD(Create, 2,
    bool, (wxAuiNotebook*, wxWindow*, wxWindowID))
    BIND_F2MF_OVERLOAD(Create, 3,
    bool, (wxAuiNotebook*, wxWindow*, wxWindowID, const wxPoint&))
    BIND_F2MF_OVERLOAD(Create, 4,
    bool, (wxAuiNotebook*, wxWindow*, wxWindowID, const wxPoint&, const wxSize&))
    BIND_F2MF_OVERLOAD(Create, 5,
    bool, (wxAuiNotebook*, wxWindow*, wxWindowID, const wxPoint&, const wxSize&, long))
    BIND_MF(wxAuiNotebook, SetWindowStyleFlag)
    BIND_MF(wxAuiNotebook, SetArtProvider)
    BIND_MF(wxAuiNotebook, GetArtProvider)
    BIND_MF(wxAuiNotebook, SetUniformBitmapSize)
    BIND_MF(wxAuiNotebook, SetTabCtrlHeight)
    // Auto generated MACRO code for 'AddPage':
    // =================================
    BIND_F2MF_OVERLOAD(AddPage, 2,
    bool, (wxAuiNotebook*, wxWindow*, const wxString&))
    BIND_F2MF_OVERLOAD(AddPage, 3,
    bool, (wxAuiNotebook*, wxWindow*, const wxString&, bool))
    BIND_F2MF_OVERLOAD(AddPage, 4,
    bool, (wxAuiNotebook*, wxWindow*, const wxString&, bool, const wxBitmap&))
    // Auto generated MACRO code for 'InsertPage':
    // =================================
    BIND_F2MF_OVERLOAD(InsertPage, 3,
    bool, (wxAuiNotebook*, size_t, wxWindow*, const wxString&))
    BIND_F2MF_OVERLOAD(InsertPage, 4,
    bool, (wxAuiNotebook*, size_t, wxWindow*, const wxString&, bool))
    BIND_F2MF_OVERLOAD(InsertPage, 5,
    bool, (wxAuiNotebook*, size_t, wxWindow*, const wxString&, bool, const wxBitmap&))
    BIND_MF(wxAuiNotebook, DeletePage)
    BIND_MF(wxAuiNotebook, RemovePage)
    BIND_MF(wxAuiNotebook, GetPageCount)
    BIND_MF(wxAuiNotebook, GetPage)
    BIND_MF(wxAuiNotebook, GetPageIndex)
    BIND_MF(wxAuiNotebook, SetPageText)
    BIND_MF(wxAuiNotebook, GetPageText)
    BIND_MF(wxAuiNotebook, SetPageBitmap)
    BIND_MF(wxAuiNotebook, GetPageBitmap)
    BIND_MF(wxAuiNotebook, SetSelection)
    BIND_MF(wxAuiNotebook, GetSelection)
    BIND_MF(wxAuiNotebook, Split)
#if wxABI_VERSION >= 20801
    BIND_MF(wxAuiNotebook, GetAuiManager)
#endif
#if wxABI_VERSION >= 20805
    BIND_MF(wxAuiNotebook, SetNormalFont)
    BIND_MF(wxAuiNotebook, SetSelectedFont)
    BIND_MF(wxAuiNotebook, SetMeasuringFont)
    BIND_MF(wxAuiNotebook, SetFont)
    BIND_MF(wxAuiNotebook, GetTabCtrlHeight)
    BIND_MF(wxAuiNotebook, GetHeightForPageHeight)
    // Auto generated MACRO code for 'AdvanceSelection':
    // =================================
    BIND_F2MF_OVERLOAD(AdvanceSelection, 0,
    void, (wxAuiNotebook*))
    BIND_F2MF_OVERLOAD(AdvanceSelection, 1,
    void, (wxAuiNotebook*, bool))
    BIND_MF(wxAuiNotebook, ShowWindowMenu)
#endif
    END_BIND_CLASS(wxAuiNotebook)

    END_BIND_MODULE(wx)
#endif  // wxUSE_AUI
    return 0;
}