#include <precompile.h>

namespace
{
    // Auto generated CPP code for 'Show'
    // =================================
    void Show0(wxCaret* self)
    {
        return self->Show();
    }
    void Show1(wxCaret* self, bool show)
    {
        return self->Show(show);
    }
}  // namespace

REGISTER_WXLUA_BIND(caret)
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS(wxCaret)
            BIND_CTOR()
            BIND_CTOR(wxWindow*, int, int)
            BIND_CTOR(wxWindow*, const wxSize&)

            BIND_MF_OVERLOAD(wxCaret, Create,
            bool, (wxWindowBase*, int, int))
            BIND_MF_OVERLOAD(wxCaret, Create,
            bool, (wxWindowBase*, const wxSize&))

            BIND_MF(wxCaret, IsOk)
            BIND_MF(wxCaret, IsVisible)
            BIND_MF_OVERLOAD(wxCaret, GetPosition,
            void, (int *, int *) const)
            BIND_MF_OVERLOAD(wxCaret, GetPosition,
            wxPoint, () const)
            BIND_MF_OVERLOAD(wxCaret, GetSize,
            void, (int *, int *) const)
            BIND_MF_OVERLOAD(wxCaret, GetSize,
            wxSize, () const)
            BIND_MF(wxCaret, GetWindow)
            BIND_MF_OVERLOAD(wxCaret, SetSize,
            void, (int, int))
            BIND_MF_OVERLOAD(wxCaret, SetSize,
            void, (const wxSize&))
            BIND_MF_OVERLOAD(wxCaret, Move,
            void, (int, int))
            BIND_MF_OVERLOAD(wxCaret, Move,
            void, (const wxPoint&))
            // Auto generated MACRO code for 'Show':
            // =================================
            BIND_F2MF_OVERLOAD(Show, 0,
            void, (wxCaret*))
            BIND_F2MF_OVERLOAD(Show, 1,
            void, (wxCaret*, bool))
            BIND_MF(wxCaret, Hide)
            BEGIN_BIND_SCOPE()
            BIND_SMF(wxCaret, GetBlinkTime)
            END_BIND_SCOPE()
            BEGIN_BIND_SCOPE()
            BIND_SMF(wxCaret, SetBlinkTime)
            END_BIND_SCOPE()
            BIND_MF(wxCaret, OnSetFocus)
            BIND_MF(wxCaret, OnKillFocus)

        END_BIND_CLASS(wxCaret)
    END_BIND_MODULE(wx)
END_REGISTER(caret)
