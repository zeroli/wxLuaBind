#include <precompile.h>

#include <wx/dirctrl.h>

// namespace for class wxDirItemData
namespace
{
    // Auto generated CPP code for 'HasFiles'
    // =================================
    bool HasFiles0(wxDirItemData* self)
    {
        return self->HasFiles();
    }
    bool HasFiles1(wxDirItemData* self, const wxString& spec)
    {
        return self->HasFiles(spec);
    }
}  // namespace for wxDirItemData

// namespace for class wxGenericDirCtrl
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create1(wxGenericDirCtrl* self, wxWindow * parent)
    {
        return self->Create(parent);
    }
    bool Create2(wxGenericDirCtrl* self, wxWindow * parent, const wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxGenericDirCtrl* self, wxWindow * parent, const wxWindowID id, const wxString & dir)
    {
        return self->Create(parent,id,dir);
    }
    bool Create4(wxGenericDirCtrl* self, wxWindow * parent, const wxWindowID id, const wxString & dir, const wxPoint& pos)
    {
        return self->Create(parent,id,dir,pos);
    }
    bool Create5(wxGenericDirCtrl* self, wxWindow * parent, const wxWindowID id, const wxString & dir, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,dir,pos,size);
    }
    bool Create6(wxGenericDirCtrl* self, wxWindow * parent, const wxWindowID id, const wxString & dir, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,dir,pos,size,style);
    }
    bool Create7(wxGenericDirCtrl* self, wxWindow * parent, const wxWindowID id, const wxString & dir, const wxPoint& pos, const wxSize& size, long style, const wxString& filter)
    {
        return self->Create(parent,id,dir,pos,size,style,filter);
    }
    bool Create8(wxGenericDirCtrl* self, wxWindow * parent, const wxWindowID id, const wxString & dir, const wxPoint& pos, const wxSize& size, long style, const wxString& filter, int defaultFilter)
    {
        return self->Create(parent,id,dir,pos,size,style,filter,defaultFilter);
    }
    bool Create9(wxGenericDirCtrl* self, wxWindow * parent, const wxWindowID id, const wxString & dir, const wxPoint& pos, const wxSize& size, long style, const wxString& filter, int defaultFilter, const wxString& name)
    {
        return self->Create(parent,id,dir,pos,size,style,filter,defaultFilter,name);
    }
}  // namespace for wxGenericDirCtrl

// namespace for class wxDirFilterListCtrl
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create1(wxDirFilterListCtrl* self, wxGenericDirCtrl* parent)
    {
        return self->Create(parent);
    }
    bool Create2(wxDirFilterListCtrl* self, wxGenericDirCtrl* parent, const wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxDirFilterListCtrl* self, wxGenericDirCtrl* parent, const wxWindowID id, const wxPoint& pos)
    {
        return self->Create(parent,id,pos);
    }
    bool Create4(wxDirFilterListCtrl* self, wxGenericDirCtrl* parent, const wxWindowID id, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,pos,size);
    }
    bool Create5(wxDirFilterListCtrl* self, wxGenericDirCtrl* parent, const wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,pos,size,style);
    }
}  // namespace for wxDirFilterListCtrl

// namespace for class wxFileIconsTable
namespace
{
    // Auto generated CPP code for 'GetIconID'
    // =================================
    int GetIconID1(wxFileIconsTable* self, const wxString& extension)
    {
        return self->GetIconID(extension);
    }
    int GetIconID2(wxFileIconsTable* self, const wxString& extension, const wxString& mime)
    {
        return self->GetIconID(extension,mime);
    }
}  // namespace for wxFileIconsTable

REGISTER_WXLUA_BIND(dirctrl)
    BEGIN_LUA_TABLE(wx)
        // Bind enum  (totally 5)
        BIND_ENUM(wxDIRCTRL_DIR_ONLY)
        BIND_ENUM(wxDIRCTRL_SELECT_FIRST)
        BIND_ENUM(wxDIRCTRL_SHOW_FILTERS)
        BIND_ENUM(wxDIRCTRL_3D_INTERNAL)
        BIND_ENUM(wxDIRCTRL_EDIT_LABELS)

        BIND_MACRO(wxID_TREECTRL)
        BIND_MACRO(wxID_FILTERLISTCTRL)
#if wxUSE_DIRDLG || wxUSE_FILEDLG
        BIND_VARIABLE(wxTheFileIconsTable)
#endif
    END_LUA_TABLE(wx)
    BEGIN_BIND_MODULE(wx)
        // Bind class wxDirItemData
        BEGIN_BIND_CLASS(wxDirItemData, wxTreeItemData)
        // Auto generated MACRO code for ctor of 'wxDirItemData':
        // =================================
        BIND_CTOR(const wxString&, const wxString&, bool)
        BIND_MF(wxDirItemData, SetNewDirName)
        BIND_MF(wxDirItemData, HasSubDirs)
        // Auto generated MACRO code for 'HasFiles':
        // =================================
        BIND_F2MF_OVERLOAD(HasFiles, 0,
        bool, (wxDirItemData*))
        BIND_F2MF_OVERLOAD(HasFiles, 1,
        bool, (wxDirItemData*, const wxString&))
        END_BIND_CLASS(wxDirItemData)

        // Bind class wxGenericDirCtrl
        BEGIN_BIND_CLASS_CONTROL(wxGenericDirCtrl)
        // Auto generated MACRO code for ctor of 'wxGenericDirCtrl':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxGenericDirCtrl':
        // =================================
        BIND_CTOR(wxWindow *)
        BIND_CTOR(wxWindow *, const wxWindowID)
        BIND_CTOR(wxWindow *, const wxWindowID, const wxString &)
        BIND_CTOR(wxWindow *, const wxWindowID, const wxString &, const wxPoint&)
        BIND_CTOR(wxWindow *, const wxWindowID, const wxString &, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, const wxWindowID, const wxString &, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, const wxWindowID, const wxString &, const wxPoint&, const wxSize&, long, const wxString&)
        BIND_CTOR(wxWindow *, const wxWindowID, const wxString &, const wxPoint&, const wxSize&, long, const wxString&, int)
        BIND_CTOR(wxWindow *, const wxWindowID, const wxString &, const wxPoint&, const wxSize&, long, const wxString&, int, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 1,
        bool, (wxGenericDirCtrl*, wxWindow *))
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxGenericDirCtrl*, wxWindow *, const wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxGenericDirCtrl*, wxWindow *, const wxWindowID, const wxString &))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxGenericDirCtrl*, wxWindow *, const wxWindowID, const wxString &, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxGenericDirCtrl*, wxWindow *, const wxWindowID, const wxString &, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxGenericDirCtrl*, wxWindow *, const wxWindowID, const wxString &, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxGenericDirCtrl*, wxWindow *, const wxWindowID, const wxString &, const wxPoint&, const wxSize&, long, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxGenericDirCtrl*, wxWindow *, const wxWindowID, const wxString &, const wxPoint&, const wxSize&, long, const wxString&, int))
        BIND_F2MF_OVERLOAD(Create, 9,
        bool, (wxGenericDirCtrl*, wxWindow *, const wxWindowID, const wxString &, const wxPoint&, const wxSize&, long, const wxString&, int, const wxString&))
        BIND_MF(wxGenericDirCtrl, Init)
        BIND_MF(wxGenericDirCtrl, OnExpandItem)
        BIND_MF(wxGenericDirCtrl, OnCollapseItem)
        BIND_MF(wxGenericDirCtrl, OnBeginEditItem)
        BIND_MF(wxGenericDirCtrl, OnEndEditItem)
        BIND_MF(wxGenericDirCtrl, OnSize)
        BIND_MF(wxGenericDirCtrl, ExpandPath)
        BIND_MF(wxGenericDirCtrl, CollapsePath)
        BIND_MF(wxGenericDirCtrl, GetDefaultPath)
        BIND_MF(wxGenericDirCtrl, SetDefaultPath)
        BIND_MF(wxGenericDirCtrl, GetPath)
        BIND_MF(wxGenericDirCtrl, GetFilePath)
        BIND_MF(wxGenericDirCtrl, SetPath)
        BIND_MF(wxGenericDirCtrl, ShowHidden)
        BIND_MF(wxGenericDirCtrl, GetShowHidden)
        BIND_MF(wxGenericDirCtrl, GetFilter)
        BIND_MF(wxGenericDirCtrl, SetFilter)
        BIND_MF(wxGenericDirCtrl, GetFilterIndex)
        BIND_MF(wxGenericDirCtrl, SetFilterIndex)
        BIND_MF(wxGenericDirCtrl, GetRootId)
        BIND_MF(wxGenericDirCtrl, GetTreeCtrl)
        BIND_MF(wxGenericDirCtrl, GetFilterListCtrl)
        BIND_MF(wxGenericDirCtrl, SetupSections)
#if WXWIN_COMPATIBILITY_2_4
        BIND_MF(wxGenericDirCtrl, ParseFilter)
#endif
        BIND_MF(wxGenericDirCtrl, FindChild)
        BIND_MF(wxGenericDirCtrl, DoResize)
        BIND_MF(wxGenericDirCtrl, ReCreateTree)
        BIND_MF(wxGenericDirCtrl, CollapseTree)
        END_BIND_CLASS(wxGenericDirCtrl)

#if !defined(__WXMSW__) && !defined(__WXMAC__) && !defined(__WXPM__)
        BEGIN_BIND_CPPCLASS_NAME(wxDirCtrl, wxGenericDirCtrl, wxControl)
        END_BIND_CLASS(wxGenericDirCtrl)
#endif

        // Bind class wxDirFilterListCtrl
        BEGIN_BIND_CPPCLASS(wxDirFilterListCtrl, wxChoice)
        // Auto generated MACRO code for ctor of 'wxDirFilterListCtrl':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxDirFilterListCtrl':
        // =================================
        BIND_CTOR(wxGenericDirCtrl*)
        BIND_CTOR(wxGenericDirCtrl*, const wxWindowID)
        BIND_CTOR(wxGenericDirCtrl*, const wxWindowID, const wxPoint&)
        BIND_CTOR(wxGenericDirCtrl*, const wxWindowID, const wxPoint&, const wxSize&)
        BIND_CTOR(wxGenericDirCtrl*, const wxWindowID, const wxPoint&, const wxSize&, long)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 1,
        bool, (wxDirFilterListCtrl*, wxGenericDirCtrl*))
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxDirFilterListCtrl*, wxGenericDirCtrl*, const wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxDirFilterListCtrl*, wxGenericDirCtrl*, const wxWindowID, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxDirFilterListCtrl*, wxGenericDirCtrl*, const wxWindowID, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxDirFilterListCtrl*, wxGenericDirCtrl*, const wxWindowID, const wxPoint&, const wxSize&, long))
        BIND_MF(wxDirFilterListCtrl, Init)
        BIND_MF(wxDirFilterListCtrl, FillFilterList)
        BIND_MF(wxDirFilterListCtrl, OnSelFilter)
        END_BIND_CLASS(wxDirFilterListCtrl)

#if wxUSE_DIRDLG || wxUSE_FILEDLG
        // Bind class wxFileIconsTable
        BEGIN_BIND_CLASS(wxFileIconsTable)
        // Auto generated MACRO code for ctor of 'wxFileIconsTable':
        // =================================
        BIND_CTOR()

        BEGIN_CLASS_ENUM(constant)
            // Bind enum iconId_Type (totally 9)
            BIND_CLASS_ENUM(wxFileIconsTable, folder)
            BIND_CLASS_ENUM(wxFileIconsTable, folder_open)
            BIND_CLASS_ENUM(wxFileIconsTable, computer)
            BIND_CLASS_ENUM(wxFileIconsTable, drive)
            BIND_CLASS_ENUM(wxFileIconsTable, cdrom)
            BIND_CLASS_ENUM(wxFileIconsTable, floppy)
            BIND_CLASS_ENUM(wxFileIconsTable, removeable)
            BIND_CLASS_ENUM(wxFileIconsTable, file)
            BIND_CLASS_ENUM(wxFileIconsTable, executable)
        END_CLASS_ENUM(constant)

        // Auto generated MACRO code for 'GetIconID':
        // =================================
        BIND_F2MF_OVERLOAD(GetIconID, 1,
        int, (wxFileIconsTable*, const wxString&))
        BIND_F2MF_OVERLOAD(GetIconID, 2,
        int, (wxFileIconsTable*, const wxString&, const wxString&))
        BIND_MF(wxFileIconsTable, GetSmallImageList)
        END_BIND_CLASS(wxFileIconsTable)
#endif
    END_BIND_MODULE(wx)
END_REGISTER(dirctrl)
