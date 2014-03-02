#include <precompile.h>

#include <wx/treectrl.h>

// namespace for class wxTreeCtrlBase
namespace
{
    // Auto generated CPP code for 'GetItemImage'
    // =================================
    int GetItemImage1(wxTreeCtrlBase* self, const wxTreeItemId& item)
    {
        return self->GetItemImage(item);
    }
    int GetItemImage2(wxTreeCtrlBase* self, const wxTreeItemId& item, wxTreeItemIcon which)
    {
        return self->GetItemImage(item,which);
    }

    // Auto generated CPP code for 'SetItemImage'
    // =================================
    void SetItemImage2(wxTreeCtrlBase* self, const wxTreeItemId& item, int image)
    {
        return self->SetItemImage(item,image);
    }
    void SetItemImage3(wxTreeCtrlBase* self, const wxTreeItemId& item, int image, wxTreeItemIcon which)
    {
        return self->SetItemImage(item,image,which);
    }

    // Auto generated CPP code for 'SetItemHasChildren'
    // =================================
    void SetItemHasChildren1(wxTreeCtrlBase* self, const wxTreeItemId& item)
    {
        return self->SetItemHasChildren(item);
    }
    void SetItemHasChildren2(wxTreeCtrlBase* self, const wxTreeItemId& item, bool has)
    {
        return self->SetItemHasChildren(item,has);
    }

    // Auto generated CPP code for 'SetItemBold'
    // =================================
    void SetItemBold1(wxTreeCtrlBase* self, const wxTreeItemId& item)
    {
        return self->SetItemBold(item);
    }
    void SetItemBold2(wxTreeCtrlBase* self, const wxTreeItemId& item, bool bold)
    {
        return self->SetItemBold(item,bold);
    }

    // Auto generated CPP code for 'SetItemDropHighlight'
    // =================================
    void SetItemDropHighlight1(wxTreeCtrlBase* self, const wxTreeItemId& item)
    {
        return self->SetItemDropHighlight(item);
    }
    void SetItemDropHighlight2(wxTreeCtrlBase* self, const wxTreeItemId& item, bool highlight)
    {
        return self->SetItemDropHighlight(item,highlight);
    }

    // Auto generated CPP code for 'GetChildrenCount'
    // =================================
    size_t GetChildrenCount1(wxTreeCtrlBase* self, const wxTreeItemId& item)
    {
        return self->GetChildrenCount(item);
    }
    size_t GetChildrenCount2(wxTreeCtrlBase* self, const wxTreeItemId& item, bool recursively)
    {
        return self->GetChildrenCount(item,recursively);
    }

    // Auto generated CPP code for 'AddRoot'
    // =================================
    wxTreeItemId AddRoot1(wxTreeCtrlBase* self, const wxString& text)
    {
        return self->AddRoot(text);
    }
    wxTreeItemId AddRoot2(wxTreeCtrlBase* self, const wxString& text, int image)
    {
        return self->AddRoot(text,image);
    }
    wxTreeItemId AddRoot3(wxTreeCtrlBase* self, const wxString& text, int image, int selImage)
    {
        return self->AddRoot(text,image,selImage);
    }
    wxTreeItemId AddRoot4(wxTreeCtrlBase* self, const wxString& text, int image, int selImage, wxTreeItemData * data)
    {
        return self->AddRoot(text,image,selImage,data);
    }

    // Auto generated CPP code for 'PrependItem'
    // =================================
    wxTreeItemId PrependItem2(wxTreeCtrlBase* self, const wxTreeItemId& parent, const wxString& text)
    {
        return self->PrependItem(parent,text);
    }
    wxTreeItemId PrependItem3(wxTreeCtrlBase* self, const wxTreeItemId& parent, const wxString& text, int image)
    {
        return self->PrependItem(parent,text,image);
    }
    wxTreeItemId PrependItem4(wxTreeCtrlBase* self, const wxTreeItemId& parent, const wxString& text, int image, int selImage)
    {
        return self->PrependItem(parent,text,image,selImage);
    }
    wxTreeItemId PrependItem5(wxTreeCtrlBase* self, const wxTreeItemId& parent, const wxString& text, int image, int selImage, wxTreeItemData * data)
    {
        return self->PrependItem(parent,text,image,selImage,data);
    }

    // Auto generated CPP code for 'InsertItem'
    // =================================
    wxTreeItemId InsertItem3(wxTreeCtrlBase* self, const wxTreeItemId& parent, const wxTreeItemId& idPrevious, const wxString& text)
    {
        return self->InsertItem(parent,idPrevious,text);
    }
    wxTreeItemId InsertItem4(wxTreeCtrlBase* self, const wxTreeItemId& parent, const wxTreeItemId& idPrevious, const wxString& text, int image)
    {
        return self->InsertItem(parent,idPrevious,text,image);
    }
    wxTreeItemId InsertItem5(wxTreeCtrlBase* self, const wxTreeItemId& parent, const wxTreeItemId& idPrevious, const wxString& text, int image, int selImage)
    {
        return self->InsertItem(parent,idPrevious,text,image,selImage);
    }
    wxTreeItemId InsertItem6(wxTreeCtrlBase* self, const wxTreeItemId& parent, const wxTreeItemId& idPrevious, const wxString& text, int image, int selImage, wxTreeItemData * data)
    {
        return self->InsertItem(parent,idPrevious,text,image,selImage,data);
    }

    // Auto generated CPP code for 'InsertItem'
    // =================================
    wxTreeItemId InsertItem3(wxTreeCtrlBase* self, const wxTreeItemId& parent, size_t pos, const wxString& text)
    {
        return self->InsertItem(parent,pos,text);
    }
    wxTreeItemId InsertItem4(wxTreeCtrlBase* self, const wxTreeItemId& parent, size_t pos, const wxString& text, int image)
    {
        return self->InsertItem(parent,pos,text,image);
    }
    wxTreeItemId InsertItem5(wxTreeCtrlBase* self, const wxTreeItemId& parent, size_t pos, const wxString& text, int image, int selImage)
    {
        return self->InsertItem(parent,pos,text,image,selImage);
    }
    wxTreeItemId InsertItem6(wxTreeCtrlBase* self, const wxTreeItemId& parent, size_t pos, const wxString& text, int image, int selImage, wxTreeItemData * data)
    {
        return self->InsertItem(parent,pos,text,image,selImage,data);
    }

    // Auto generated CPP code for 'AppendItem'
    // =================================
    wxTreeItemId AppendItem2(wxTreeCtrlBase* self, const wxTreeItemId& parent, const wxString& text)
    {
        return self->AppendItem(parent,text);
    }
    wxTreeItemId AppendItem3(wxTreeCtrlBase* self, const wxTreeItemId& parent, const wxString& text, int image)
    {
        return self->AppendItem(parent,text,image);
    }
    wxTreeItemId AppendItem4(wxTreeCtrlBase* self, const wxTreeItemId& parent, const wxString& text, int image, int selImage)
    {
        return self->AppendItem(parent,text,image,selImage);
    }
    wxTreeItemId AppendItem5(wxTreeCtrlBase* self, const wxTreeItemId& parent, const wxString& text, int image, int selImage, wxTreeItemData * data)
    {
        return self->AppendItem(parent,text,image,selImage,data);
    }

    // Auto generated CPP code for 'SelectItem'
    // =================================
    void SelectItem1(wxTreeCtrlBase* self, const wxTreeItemId& item)
    {
        return self->SelectItem(item);
    }
    void SelectItem2(wxTreeCtrlBase* self, const wxTreeItemId& item, bool select)
    {
        return self->SelectItem(item,select);
    }

    // Auto generated CPP code for 'EditLabel'
    // =================================
    wxTextCtrl * EditLabel1(wxTreeCtrlBase* self, const wxTreeItemId& item)
    {
        return self->EditLabel(item);
    }
    wxTextCtrl * EditLabel2(wxTreeCtrlBase* self, const wxTreeItemId& item, wxClassInfo* textCtrlClass)
    {
        return self->EditLabel(item,textCtrlClass);
    }

    // Auto generated CPP code for 'EndEditLabel'
    // =================================
    void EndEditLabel1(wxTreeCtrlBase* self, const wxTreeItemId& item)
    {
        return self->EndEditLabel(item);
    }
    void EndEditLabel2(wxTreeCtrlBase* self, const wxTreeItemId& item, bool discardChanges)
    {
        return self->EndEditLabel(item,discardChanges);
    }

    // Auto generated CPP code for 'GetBoundingRect'
    // =================================
    bool GetBoundingRect2(wxTreeCtrlBase* self, const wxTreeItemId& item, wxRect& rect)
    {
        return self->GetBoundingRect(item,rect);
    }
    bool GetBoundingRect3(wxTreeCtrlBase* self, const wxTreeItemId& item, wxRect& rect, bool textOnly)
    {
        return self->GetBoundingRect(item,rect,textOnly);
    }
}  // namespace for wxTreeCtrlBase

// namespace for class wxTreeCtrl
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create1(wxTreeCtrl* self, wxWindow * parent)
    {
        return self->Create(parent);
    }
    bool Create2(wxTreeCtrl* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxTreeCtrl* self, wxWindow * parent, wxWindowID id, const wxPoint& pos)
    {
        return self->Create(parent,id,pos);
    }
    bool Create4(wxTreeCtrl* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,pos,size);
    }
    bool Create5(wxTreeCtrl* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,pos,size,style);
    }
    bool Create6(wxTreeCtrl* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator)
    {
        return self->Create(parent,id,pos,size,style,validator);
    }
    bool Create7(wxTreeCtrl* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name)
    {
        return self->Create(parent,id,pos,size,style,validator,name);
    }
}  // namespace for wxTreeCtrl

#if wxUSE_TREECTRL
BEGIN_WXLUA_BINDFUNC(treectrl)
    BEGIN_BIND_MODULE(wx)
        // Bind class wxTreeCtrlBase
        BEGIN_BIND_CLASS_CONTROL(wxTreeCtrlBase)
        BIND_MF(wxTreeCtrlBase, GetCount)
        BIND_MF(wxTreeCtrlBase, GetIndent)
        BIND_MF(wxTreeCtrlBase, SetIndent)
        BIND_MF(wxTreeCtrlBase, GetSpacing)
        BIND_MF(wxTreeCtrlBase, SetSpacing)
        BIND_MF(wxTreeCtrlBase, GetImageList)
        BIND_MF(wxTreeCtrlBase, GetStateImageList)
        BIND_MF(wxTreeCtrlBase, SetImageList)
        BIND_MF(wxTreeCtrlBase, SetStateImageList)
        BIND_MF(wxTreeCtrlBase, AssignImageList)
        BIND_MF(wxTreeCtrlBase, AssignStateImageList)
        BIND_MF(wxTreeCtrlBase, GetItemText)
        // Auto generated MACRO code for 'GetItemImage':
        // =================================
        BIND_F2MF_OVERLOAD(GetItemImage, 1,
        int, (wxTreeCtrlBase*, const wxTreeItemId&))
        BIND_F2MF_OVERLOAD(GetItemImage, 2,
        int, (wxTreeCtrlBase*, const wxTreeItemId&, wxTreeItemIcon))
        BIND_MF(wxTreeCtrlBase, GetItemData)
        BIND_MF(wxTreeCtrlBase, GetItemTextColour)
        BIND_MF(wxTreeCtrlBase, GetItemBackgroundColour)
        BIND_MF(wxTreeCtrlBase, GetItemFont)
        BIND_MF(wxTreeCtrlBase, SetItemText)
        // Auto generated MACRO code for 'SetItemImage':
        // =================================
        BIND_F2MF_OVERLOAD(SetItemImage, 2,
        void, (wxTreeCtrlBase*, const wxTreeItemId&, int))
        BIND_F2MF_OVERLOAD(SetItemImage, 3,
        void, (wxTreeCtrlBase*, const wxTreeItemId&, int, wxTreeItemIcon))
        BIND_MF(wxTreeCtrlBase, SetItemData)
        // Auto generated MACRO code for 'SetItemHasChildren':
        // =================================
        BIND_F2MF_OVERLOAD(SetItemHasChildren, 1,
        void, (wxTreeCtrlBase*, const wxTreeItemId&))
        BIND_F2MF_OVERLOAD(SetItemHasChildren, 2,
        void, (wxTreeCtrlBase*, const wxTreeItemId&, bool))
        // Auto generated MACRO code for 'SetItemBold':
        // =================================
        BIND_F2MF_OVERLOAD(SetItemBold, 1,
        void, (wxTreeCtrlBase*, const wxTreeItemId&))
        BIND_F2MF_OVERLOAD(SetItemBold, 2,
        void, (wxTreeCtrlBase*, const wxTreeItemId&, bool))
        // Auto generated MACRO code for 'SetItemDropHighlight':
        // =================================
        BIND_F2MF_OVERLOAD(SetItemDropHighlight, 1,
        void, (wxTreeCtrlBase*, const wxTreeItemId&))
        BIND_F2MF_OVERLOAD(SetItemDropHighlight, 2,
        void, (wxTreeCtrlBase*, const wxTreeItemId&, bool))
        BIND_MF(wxTreeCtrlBase, SetItemTextColour)
        BIND_MF(wxTreeCtrlBase, SetItemBackgroundColour)
        BIND_MF(wxTreeCtrlBase, SetItemFont)
        BIND_MF(wxTreeCtrlBase, IsVisible)
        BIND_MF(wxTreeCtrlBase, ItemHasChildren)
        BIND_MF(wxTreeCtrlBase, HasChildren)
        BIND_MF(wxTreeCtrlBase, IsExpanded)
        BIND_MF(wxTreeCtrlBase, IsSelected)
        BIND_MF(wxTreeCtrlBase, IsBold)
        BIND_MF(wxTreeCtrlBase, IsEmpty)
        // Auto generated MACRO code for 'GetChildrenCount':
        // =================================
        BIND_F2MF_OVERLOAD(GetChildrenCount, 1,
        size_t, (wxTreeCtrlBase*, const wxTreeItemId&))
        BIND_F2MF_OVERLOAD(GetChildrenCount, 2,
        size_t, (wxTreeCtrlBase*, const wxTreeItemId&, bool))
        BIND_MF(wxTreeCtrlBase, GetRootItem)
        BIND_MF(wxTreeCtrlBase, GetSelection)
        BIND_MF(wxTreeCtrlBase, GetSelections)
        BIND_MF(wxTreeCtrlBase, GetItemParent)
        BIND_MF(wxTreeCtrlBase, GetFirstChild)
        BIND_MF(wxTreeCtrlBase, GetNextChild)
        BIND_MF(wxTreeCtrlBase, GetLastChild)
        BIND_MF(wxTreeCtrlBase, GetNextSibling)
        BIND_MF(wxTreeCtrlBase, GetPrevSibling)
        BIND_MF(wxTreeCtrlBase, GetFirstVisibleItem)
        BIND_MF(wxTreeCtrlBase, GetNextVisible)
        BIND_MF(wxTreeCtrlBase, GetPrevVisible)
        // Auto generated MACRO code for 'AddRoot':
        // =================================
        BIND_F2MF_OVERLOAD(AddRoot, 1,
        wxTreeItemId, (wxTreeCtrlBase*, const wxString&))
        BIND_F2MF_OVERLOAD(AddRoot, 2,
        wxTreeItemId, (wxTreeCtrlBase*, const wxString&, int))
        BIND_F2MF_OVERLOAD(AddRoot, 3,
        wxTreeItemId, (wxTreeCtrlBase*, const wxString&, int, int))
        BIND_F2MF_OVERLOAD(AddRoot, 4,
        wxTreeItemId, (wxTreeCtrlBase*, const wxString&, int, int, wxTreeItemData *))
        // Auto generated MACRO code for 'PrependItem':
        // =================================
        BIND_F2MF_OVERLOAD(PrependItem, 2,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, const wxString&))
        BIND_F2MF_OVERLOAD(PrependItem, 3,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, const wxString&, int))
        BIND_F2MF_OVERLOAD(PrependItem, 4,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, const wxString&, int, int))
        BIND_F2MF_OVERLOAD(PrependItem, 5,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, const wxString&, int, int, wxTreeItemData *))
        // Auto generated MACRO code for 'InsertItem':
        // =================================
        BIND_F2MF_OVERLOAD(InsertItem, 3,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, const wxTreeItemId&, const wxString&))
        BIND_F2MF_OVERLOAD(InsertItem, 4,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, const wxTreeItemId&, const wxString&, int))
        BIND_F2MF_OVERLOAD(InsertItem, 5,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, const wxTreeItemId&, const wxString&, int, int))
        BIND_F2MF_OVERLOAD(InsertItem, 6,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, const wxTreeItemId&, const wxString&, int, int, wxTreeItemData *))
        // Auto generated MACRO code for 'InsertItem':
        // =================================
        BIND_F2MF_OVERLOAD(InsertItem, 3,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, size_t, const wxString&))
        BIND_F2MF_OVERLOAD(InsertItem, 4,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, size_t, const wxString&, int))
        BIND_F2MF_OVERLOAD(InsertItem, 5,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, size_t, const wxString&, int, int))
        BIND_F2MF_OVERLOAD(InsertItem, 6,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, size_t, const wxString&, int, int, wxTreeItemData *))
        // Auto generated MACRO code for 'AppendItem':
        // =================================
        BIND_F2MF_OVERLOAD(AppendItem, 2,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, const wxString&))
        BIND_F2MF_OVERLOAD(AppendItem, 3,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, const wxString&, int))
        BIND_F2MF_OVERLOAD(AppendItem, 4,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, const wxString&, int, int))
        BIND_F2MF_OVERLOAD(AppendItem, 5,
        wxTreeItemId, (wxTreeCtrlBase*, const wxTreeItemId&, const wxString&, int, int, wxTreeItemData *))
        BIND_MF(wxTreeCtrlBase, Delete)
        BIND_MF(wxTreeCtrlBase, DeleteChildren)
        BIND_MF(wxTreeCtrlBase, DeleteAllItems)
        BIND_MF(wxTreeCtrlBase, Expand)
        BIND_MF(wxTreeCtrlBase, ExpandAllChildren)
        BIND_MF(wxTreeCtrlBase, ExpandAll)
        BIND_MF(wxTreeCtrlBase, Collapse)
        BIND_MF(wxTreeCtrlBase, CollapseAllChildren)
        BIND_MF(wxTreeCtrlBase, CollapseAll)
        BIND_MF(wxTreeCtrlBase, CollapseAndReset)
        BIND_MF(wxTreeCtrlBase, Toggle)
        BIND_MF(wxTreeCtrlBase, Unselect)
        BIND_MF(wxTreeCtrlBase, UnselectAll)
        // Auto generated MACRO code for 'SelectItem':
        // =================================
        BIND_F2MF_OVERLOAD(SelectItem, 1,
        void, (wxTreeCtrlBase*, const wxTreeItemId&))
        BIND_F2MF_OVERLOAD(SelectItem, 2,
        void, (wxTreeCtrlBase*, const wxTreeItemId&, bool))
        BIND_MF(wxTreeCtrlBase, UnselectItem)
        BIND_MF(wxTreeCtrlBase, ToggleItemSelection)
        BIND_MF(wxTreeCtrlBase, EnsureVisible)
        BIND_MF(wxTreeCtrlBase, ScrollTo)
        // Auto generated MACRO code for 'EditLabel':
        // =================================
        BIND_F2MF_OVERLOAD(EditLabel, 1,
        wxTextCtrl *, (wxTreeCtrlBase*, const wxTreeItemId&))
        BIND_F2MF_OVERLOAD(EditLabel, 2,
        wxTextCtrl *, (wxTreeCtrlBase*, const wxTreeItemId&, wxClassInfo*))
        BIND_MF(wxTreeCtrlBase, GetEditControl)
        // Auto generated MACRO code for 'EndEditLabel':
        // =================================
        BIND_F2MF_OVERLOAD(EndEditLabel, 1,
        void, (wxTreeCtrlBase*, const wxTreeItemId&))
        BIND_F2MF_OVERLOAD(EndEditLabel, 2,
        void, (wxTreeCtrlBase*, const wxTreeItemId&, bool))
        BIND_MF(wxTreeCtrlBase, OnCompareItems)
        BIND_MF(wxTreeCtrlBase, SortChildren)
        BIND_MF_OVERLOAD(wxTreeCtrlBase, HitTest,
        wxTreeItemId, (const wxPoint&) const)
        BIND_MF_OVERLOAD(wxTreeCtrlBase, HitTest,
        wxTreeItemId, (const wxPoint&, int&) const)
        // Auto generated MACRO code for 'GetBoundingRect':
        // =================================
        BIND_F2MF_OVERLOAD(GetBoundingRect, 2,
        bool, (wxTreeCtrlBase*, const wxTreeItemId&, wxRect&))
        BIND_F2MF_OVERLOAD(GetBoundingRect, 3,
        bool, (wxTreeCtrlBase*, const wxTreeItemId&, wxRect&, bool))
        BIND_MF(wxTreeCtrlBase, ShouldInheritColours)
        BIND_MF(wxTreeCtrlBase, SetQuickBestSize)
        BIND_MF(wxTreeCtrlBase, GetQuickBestSize)
        END_BIND_CLASS(wxTreeCtrlBase)

        // Bind class wxTreeCtrl
        BEGIN_BIND_CPPCLASS(wxTreeCtrl, wxTreeCtrlBase)
        // Auto generated MACRO code for ctor of 'wxTreeCtrl':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxTreeCtrl':
        // =================================
        BIND_CTOR(wxWindow *)
        BIND_CTOR(wxWindow *, wxWindowID)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 1,
        bool, (wxTreeCtrl*, wxWindow *))
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxTreeCtrl*, wxWindow *, wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxTreeCtrl*, wxWindow *, wxWindowID, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxTreeCtrl*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxTreeCtrl*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxTreeCtrl*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxTreeCtrl*, wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&))
        END_BIND_CLASS(wxTreeCtrl)

    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(treectrl)
#endif // wxUSE_TREECTRL
