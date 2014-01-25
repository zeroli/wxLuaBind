#include <precompile.h>

REGISTER_WXLUA_BIND(brush)
{
    BEGIN_BIND_MODULE(wx)
        // Bind class wxBrushBase
        BEGIN_BIND_CLASS_GDIOBJECT(wxBrushBase)
        BIND_MF(wxBrushBase, GetStyle)
        BIND_MF(wxBrushBase, IsHatch)
        END_BIND_CLASS(wxBrushBase)

        // Bind class wxBrush
        BEGIN_BIND_CLASS(wxBrush)
        // Auto generated MACRO code for ctor of 'wxBrush':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxBrush':
        // =================================
        BIND_CTOR(const wxColour&)
        BIND_CTOR(const wxColour&, int)
        // Auto generated MACRO code for ctor of 'wxBrush':
        // =================================
        BIND_CTOR(const wxBitmap&)
        BIND_MF_OVERLOAD(wxBrush, SetColour,
        void, (const wxColour&))
        BIND_MF_OVERLOAD(wxBrush, SetColour,
        void, (unsigned char, unsigned char, unsigned char))
        BIND_MF(wxBrush, SetStyle)
        BIND_MF(wxBrush, SetStipple)
        BIND_MF_NAME(eq, wxBrush, operator ==)
        BIND_MF_NAME(ne, wxBrush, operator !=)
        BIND_MF(wxBrush, GetColour)
        BIND_MF(wxBrush, GetStyle)
        BIND_MF(wxBrush, GetStipple)
        BIND_MF(wxBrush, Ok)
        BIND_MF(wxBrush, IsOk)
        END_BIND_CLASS(wxBrush)

    END_BIND_MODULE(wx)
    return 0;
}