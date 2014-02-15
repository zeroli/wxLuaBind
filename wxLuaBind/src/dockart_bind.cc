#include <precompile.h>

#include <wx/aui/aui.h>

#if wxUSE_AUI
REGISTER_WXLUA_BIND(dockart)
    BEGIN_BIND_MODULE(wx)
    // Bind class wxAuiDockArt
    BEGIN_BIND_CLASS(wxAuiDockArt)
    BIND_MF(wxAuiDockArt, GetMetric)
    BIND_MF(wxAuiDockArt, SetMetric)
    BIND_MF(wxAuiDockArt, SetFont)
    BIND_MF(wxAuiDockArt, GetFont)
    BIND_MF(wxAuiDockArt, GetColour)
    BIND_MF(wxAuiDockArt, SetColour)
    BIND_MF(wxAuiDockArt, GetColor)
    BIND_MF(wxAuiDockArt, SetColor)
    BIND_MF(wxAuiDockArt, DrawSash)
    BIND_MF(wxAuiDockArt, DrawBackground)
    BIND_MF(wxAuiDockArt, DrawCaption)
    BIND_MF(wxAuiDockArt, DrawGripper)
    BIND_MF(wxAuiDockArt, DrawBorder)
    BIND_MF(wxAuiDockArt, DrawPaneButton)
    END_BIND_CLASS(wxAuiDockArt)

    // Bind class wxAuiDefaultDockArt
    BEGIN_BIND_CLASS(wxAuiDefaultDockArt, wxAuiDockArt)
    // Auto generated MACRO code for ctor of 'wxAuiDefaultDockArt':
    // =================================
    BIND_CTOR()
    BIND_MF(wxAuiDefaultDockArt, GetMetric)
    BIND_MF(wxAuiDefaultDockArt, SetMetric)
    BIND_MF(wxAuiDefaultDockArt, GetColour)
    BIND_MF(wxAuiDefaultDockArt, SetColour)
    BIND_MF(wxAuiDefaultDockArt, SetFont)
    BIND_MF(wxAuiDefaultDockArt, GetFont)
    BIND_MF(wxAuiDefaultDockArt, DrawSash)
    BIND_MF(wxAuiDefaultDockArt, DrawBackground)
    BIND_MF(wxAuiDefaultDockArt, DrawCaption)
    BIND_MF(wxAuiDefaultDockArt, DrawGripper)
    BIND_MF(wxAuiDefaultDockArt, DrawBorder)
    BIND_MF(wxAuiDefaultDockArt, DrawPaneButton)
    END_BIND_CLASS(wxAuiDefaultDockArt)

    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)

    END_LUA_TABLE(wx)
END_REGISTER(dockart)

#endif  // wxUSE_AUI
