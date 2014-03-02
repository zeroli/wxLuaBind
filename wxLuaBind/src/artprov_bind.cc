#include <precompile.h>

#include <wx/artprov.h>

// namespace for class wxArtProvider
namespace
{
    // Auto generated CPP code for 'GetBitmap'
    // =================================
    wxBitmap GetBitmap1(const wxArtID& id)
    {
        return wxArtProvider::GetBitmap(id);
    }
    wxBitmap GetBitmap2(const wxArtID& id, const wxArtClient& client)
    {
        return wxArtProvider::GetBitmap(id,client);
    }
    wxBitmap GetBitmap3(const wxArtID& id, const wxArtClient& client, const wxSize& size)
    {
        return wxArtProvider::GetBitmap(id,client,size);
    }

    // Auto generated CPP code for 'GetIcon'
    // =================================
    wxIcon GetIcon1(const wxArtID& id)
    {
        return wxArtProvider::GetIcon(id);
    }
    wxIcon GetIcon2(const wxArtID& id, const wxArtClient& client)
    {
        return wxArtProvider::GetIcon(id,client);
    }
    wxIcon GetIcon3(const wxArtID& id, const wxArtClient& client, const wxSize& size)
    {
        return wxArtProvider::GetIcon(id,client,size);
    }

    // Auto generated CPP code for 'GetSizeHint'
    // =================================
    wxSize GetSizeHint1(const wxArtClient& client)
    {
        return wxArtProvider::GetSizeHint(client);
    }
    wxSize GetSizeHint2(const wxArtClient& client, bool platform_dependent)
    {
        return wxArtProvider::GetSizeHint(client,platform_dependent);
    }
}  // namespace for wxArtProvider

BEGIN_WXLUA_BINDFUNC(artprov)
    BEGIN_LUA_TABLE(wx)
        BIND_MACRO(wxART_TOOLBAR)
        BIND_MACRO(wxART_MENU)
        BIND_MACRO(wxART_FRAME_ICON)
        BIND_MACRO(wxART_CMN_DIALOG)
        BIND_MACRO(wxART_HELP_BROWSER)
        BIND_MACRO(wxART_MESSAGE_BOX)
        BIND_MACRO(wxART_BUTTON)
        BIND_MACRO(wxART_OTHER)
        BIND_MACRO(wxART_CMN_DIALOG)
        BIND_MACRO(wxART_CMN_DIALOG)

        BIND_MACRO(wxART_ADD_BOOKMARK)
        BIND_MACRO(wxART_DEL_BOOKMARK)
        BIND_MACRO(wxART_HELP_SIDE_PANEL)
        BIND_MACRO(wxART_HELP_SETTINGS)
        BIND_MACRO(wxART_HELP_BOOK)
        BIND_MACRO(wxART_HELP_FOLDER)
        BIND_MACRO(wxART_HELP_PAGE)
        BIND_MACRO(wxART_GO_BACK)
        BIND_MACRO(wxART_GO_FORWARD)
        BIND_MACRO(wxART_GO_UP)
        BIND_MACRO(wxART_GO_DOWN)
        BIND_MACRO(wxART_GO_TO_PARENT)
        BIND_MACRO(wxART_GO_HOME)
        BIND_MACRO(wxART_FILE_OPEN)
        BIND_MACRO(wxART_FILE_SAVE)
        BIND_MACRO(wxART_FILE_SAVE_AS)
        BIND_MACRO(wxART_PRINT)
        BIND_MACRO(wxART_HELP)
        BIND_MACRO(wxART_TIP)
        BIND_MACRO(wxART_REPORT_VIEW)
        BIND_MACRO(wxART_LIST_VIEW)
        BIND_MACRO(wxART_NEW_DIR)
        BIND_MACRO(wxART_HARDDISK)
        BIND_MACRO(wxART_FLOPPY)
        BIND_MACRO(wxART_CDROM)
        BIND_MACRO(wxART_REMOVABLE)
        BIND_MACRO(wxART_FOLDER)
        BIND_MACRO(wxART_FOLDER_OPEN)
        BIND_MACRO(wxART_GO_DIR_UP)
        BIND_MACRO(wxART_EXECUTABLE_FILE)
        BIND_MACRO(wxART_NORMAL_FILE)
        BIND_MACRO(wxART_TICK_MARK)
        BIND_MACRO(wxART_CROSS_MARK)
        BIND_MACRO(wxART_ERROR)
        BIND_MACRO(wxART_QUESTION)
        BIND_MACRO(wxART_WARNING)
        BIND_MACRO(wxART_INFORMATION)
        BIND_MACRO(wxART_MISSING_IMAGE)
        BIND_MACRO(wxART_COPY)
        BIND_MACRO(wxART_CUT)
        BIND_MACRO(wxART_PASTE)
        BIND_MACRO(wxART_DELETE)
        BIND_MACRO(wxART_NEW)
        BIND_MACRO(wxART_UNDO)
        BIND_MACRO(wxART_REDO)
        BIND_MACRO(wxART_QUIT)
        BIND_MACRO(wxART_FIND)
        BIND_MACRO(wxART_FIND_AND_REPLACE)

    END_LUA_TABLE(wx)

    BEGIN_BIND_MODULE(wx)
        // Bind class wxArtProvider
        BEGIN_BIND_CLASS_OBJECT(wxArtProvider)
        BEGIN_BIND_SCOPE()
        BIND_SMF(wxArtProvider, Push)
        END_BIND_SCOPE()
        BEGIN_BIND_SCOPE()
        BIND_SMF(wxArtProvider, Insert)
        END_BIND_SCOPE()
        BEGIN_BIND_SCOPE()
        BIND_SMF(wxArtProvider, Pop)
        END_BIND_SCOPE()
        BEGIN_BIND_SCOPE()
        BIND_SMF(wxArtProvider, Remove)
        END_BIND_SCOPE()
        BEGIN_BIND_SCOPE()
        BIND_SMF(wxArtProvider, Delete)
        END_BIND_SCOPE()
        // Auto generated MACRO code for 'GetBitmap':
        // =================================
        BEGIN_BIND_SCOPE()
        BIND_F2SMF_OVERLOAD(GetBitmap,1,
        wxBitmap, (const wxArtID&))
        BIND_F2SMF_OVERLOAD(GetBitmap,2,
        wxBitmap, (const wxArtID&, const wxArtClient&))
        BIND_F2SMF_OVERLOAD(GetBitmap,3,
        wxBitmap, (const wxArtID&, const wxArtClient&, const wxSize&))
        END_BIND_SCOPE()

        // Auto generated MACRO code for 'GetIcon':
        // =================================
        BEGIN_BIND_SCOPE()
        BIND_F2SMF_OVERLOAD(GetIcon,1,
        wxIcon, (const wxArtID&))
        BIND_F2SMF_OVERLOAD(GetIcon,2,
        wxIcon, (const wxArtID&, const wxArtClient&))
        BIND_F2SMF_OVERLOAD(GetIcon,3,
        wxIcon, (const wxArtID&, const wxArtClient&, const wxSize&))
        END_BIND_SCOPE()

        // Auto generated MACRO code for 'GetSizeHint':
        // =================================
        BEGIN_BIND_SCOPE()
        BIND_F2SMF_OVERLOAD(GetSizeHint,1,
        wxSize, (const wxArtClient&))
        BIND_F2SMF_OVERLOAD(GetSizeHint,2,
        wxSize, (const wxArtClient&, bool))
        END_BIND_SCOPE()

        END_BIND_CLASS(wxArtProvider)

    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(artprov)
