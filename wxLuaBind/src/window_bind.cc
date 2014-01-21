#include <precompile.h>

REGISTER_WXLUA_PREBIND(wxwindow)
{
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS_WX(wxWindow, Window)
            BIND_WIN_ALL_CTORS()
            BIND_WIN_CREATE_FUNC(wxWindow)

            BIND_MF(wxWindow, SetLabel)
            BIND_MF(wxWindow, GetLabel)

            BIND_MF(wxWindow, SetName)
            BIND_MF(wxWindow, GetName)

            BIND_MF(wxWindow, SetWindowVariant)
            BIND_MF(wxWindow, GetWindowVariant)

            BIND_MF(wxWindow, SetId)
            BIND_MF(wxWindow, GetId)

            BIND_MF(wxWindow, GetLayoutDirection)
            BIND_MF(wxWindow, SetLayoutDirection)

            BIND_MF(wxWindow, AdjustForLayoutDirection)

            BIND_MF_OVERLOAD(wxWindow, SetSize,
                void, (int, int, int, int, int))
            BIND_MF_OVERLOAD(wxWindow, SetSize,
                void, (int, int))
            BIND_MF_OVERLOAD(wxWindow, SetSize,
                void, (const wxSize&))
            BIND_MF_OVERLOAD(wxWindow, SetSize,
                void, (const wxRect&, int))

            BIND_MF(wxWindow, Raise)
            BIND_MF(wxWindow, Lower)
            BIND_MF(wxWindow, Show)
            BIND_MF(wxWindow, Enable)
            BIND_MF(wxWindow, SetFocus)
            BIND_MF(wxWindow, GetLabel)
        END_BIND_CLASS(wxWindow)
    END_BIND_MODULE(wx)

    return 0;
}

