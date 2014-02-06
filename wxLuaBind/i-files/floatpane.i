#if defined( __WXMSW__ ) || defined( __WXMAC__ ) ||  defined( __WXGTK__ )
#include "wx/minifram.h"
#define wxAuiFloatingFrameBaseClass wxMiniFrame
#else
#define wxAuiFloatingFrameBaseClass wxFrame
#endif

class wxAuiFloatingFrame : public wxAuiFloatingFrameBaseClass
{
public:
    wxAuiFloatingFrame(wxWindow* parent,
                   wxAuiManager* owner_mgr,
                   const wxAuiPaneInfo& pane,
                   wxWindowID id = wxID_ANY,
                   long style = wxRESIZE_BORDER | wxSYSTEM_MENU | wxCAPTION |
                                wxFRAME_NO_TASKBAR | wxFRAME_FLOAT_ON_PARENT | 
                                wxCLIP_CHILDREN
                   );
    virtual ~wxAuiFloatingFrame();
    void SetPaneWindow(const wxAuiPaneInfo& pane);
    wxAuiManager* GetOwnerManager() const;
};
