#include <precompile.h>

namespace MenuNS
{
    // 3 default arguments
    wxMenuItem* Append(wxMenu* self, int itemid)
    {
        return self->Append(itemid);
    }
    wxMenuItem* Append(wxMenu* self, int itemid,
        const wxString& text)
    {
        return self->Append(itemid, text);
    }
    wxMenuItem* Append(wxMenu* self, int itemid,
        const wxString& text, const wxString& help)
    {
        return self->Append(itemid, text, help);
    }
    wxMenuItem* Append(wxMenu* self, int itemid,
        const wxString& text, const wxString& help, wxItemKind kind)
    {
        return self->Append(itemid, text, help, kind);
    }
    // 3 default arguments
    wxMenuItem* Insert(wxMenu* self, size_t pos, int itemid)
    {
        return self->Insert(pos, itemid);
    }
    wxMenuItem* Insert(wxMenu* self, size_t pos, int itemid, const wxString& text)
    {
        return self->Insert(pos, itemid, text);
    }
    wxMenuItem* Insert(wxMenu* self, size_t pos,
        int itemid, const wxString& text, const wxString& help)
    {
        return self->Insert(pos, itemid, text, help);
    }
    wxMenuItem* Insert(wxMenu* self, size_t pos,
        int itemid, const wxString& text, const wxString& help, wxItemKind kind)
    {
        return self->Insert(pos, itemid, text, help, kind);
    }

    // 1 default arguments
    wxMenuItem* Insert(wxMenu* self, size_t pos,
        int itemid, const wxString& text, wxMenu *submenu)
    {
        return self->Insert(pos, itemid, text, submenu);
    }
    wxMenuItem* Insert(wxMenu* self, size_t pos,
        int itemid, const wxString& text, wxMenu *submenu, const wxString& help)
    {
        return self->Insert(pos, itemid, text, submenu, help);
    }

    // 3 default arguments => 4 interfaces
    wxMenuItem* Prepend(wxMenu* self, int itemid)
    {
        return self->Prepend(itemid);
    }
    wxMenuItem* Prepend(wxMenu* self, int itemid,
        const wxString& text )
    {
        return self->Prepend(itemid, text);
    }
    wxMenuItem* Prepend(wxMenu* self, int itemid,
        const wxString& text, const wxString& help)
    {
        return self->Prepend(itemid, text, help);
    }
    wxMenuItem* Prepend(wxMenu* self, int itemid,
        const wxString& text, const wxString& help, wxItemKind kind)
    {
        return self->Prepend(itemid, text, help, kind);
    }

    // 1 default arguments => 2 interfaces
    wxMenuItem* Prepend(wxMenu* self, int itemid,
        const wxString& text,
        wxMenu *submenu)
    {
        return self->Prepend(itemid, text, submenu);
    }
    wxMenuItem* Prepend(wxMenu* self, int itemid,
        const wxString& text,
        wxMenu *submenu,
        const wxString& help)
    {
        return self->Prepend(itemid, text, submenu, help);
    }
}  // namespace MenuNS

REGISTER_WXLUA_BIND(wxmenu)
{
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS_WX(wxMenuItem, MenuItem)
            BIND_CTOR()
            BIND_CTOR(wxMenu*)
            BIND_CTOR(wxMenu*, int)
            BIND_CTOR(wxMenu*, int, const wxString&)
            BIND_CTOR(wxMenu*, int, const wxString&, const wxString&)
            BIND_CTOR(wxMenu*, int, const wxString&, const wxString&, wxItemKind)
            BIND_CTOR(wxMenu*, int,const wxString&, const wxString&,wxItemKind,wxMenu*)

            // wxMenuItemBase class related interfaces
            BEGIN_BIND_SCOPE()
                BIND_SMF_OVERLOAD(wxMenuItem, New,
                    wxMenuItem*, (wxMenu*,int,const wxString&,const wxString&,wxItemKind,wxMenu*))
                BIND_SMF_OVERLOAD(wxMenuItem, New,
                    wxMenuItem*, (wxMenu*,int,const wxString&,const wxString&,bool,wxMenu*))
            END_BIND_SCOPE()

            BIND_MF(wxMenuItem, GetMenu)
            BIND_MF(wxMenuItem, SetMenu)

            BIND_MF(wxMenuItem, SetId)
            BIND_MF(wxMenuItem, GetId)
            BIND_MF(wxMenuItem, IsSeparator)

            BIND_MF(wxMenuItem, GetLabel)
            BIND_MF(wxMenuItem, GetText)

            BEGIN_BIND_SCOPE()
                BIND_SMF(wxMenuItem, GetLabelFromText)
            END_BIND_SCOPE()

            BIND_MF(wxMenuItem, GetKind)
            BIND_MF(wxMenuItem, SetKind)

            BIND_MF(wxMenuItem, SetCheckable)
            BIND_MF(wxMenuItem, IsCheckable)

            BIND_MF(wxMenuItem, IsSubMenu)
            BIND_MF(wxMenuItem, SetSubMenu)
            BIND_MF(wxMenuItem, GetSubMenu)

            BIND_MF(wxMenuItem, SetText)

            BIND_MF(wxMenuItem, Enable)
            BIND_MF(wxMenuItem, IsEnabled)

            BIND_MF(wxMenuItem, Check)
            BIND_MF(wxMenuItem, IsChecked)
            BIND_MF(wxMenuItem, Toggle)

            BIND_MF(wxMenuItem, SetHelp)
            BIND_MF(wxMenuItem, GetHelp)
#if wxUSE_ACCEL
            // FIXME: cannot link??
            //BEGIN_BIND_SCOPE()
            //    BIND_SMF(wxMenuItemBase, GetAccelFromString)
            //END_BIND_SCOPE()
            BIND_MF(wxMenuItem, GetAccel)
            BIND_MF(wxMenuItem, SetAccel)
#endif

            BIND_MF(wxMenuItem, SetBitmaps)
            BIND_MF(wxMenuItem, SetBitmap)
            BIND_MF(wxMenuItem, GetBitmap)

            BIND_MF(wxMenuItem, SetDisabledBitmap)
            BIND_MF(wxMenuItem, GetDisabledBitmap)

            BIND_MF(wxMenuItem, SetAsRadioGroupStart)
            BIND_MF(wxMenuItem, SetRadioGroupStart)
            BIND_MF(wxMenuItem, SetRadioGroupEnd)

#if wxABI_VERSION >= 20805
            BIND_MF(wxMenuItem, GetItemLabel)
            BIND_MF(wxMenuItem, GetItemLabelText)
            BEGIN_BIND_SCOPE()
                BIND_SMF(wxMenuItem, GetLabelText)
            END_BIND_SCOPE()
#endif
        END_BIND_CLASS(wxMenuItem)

        // wxMenu class bind
        BEGIN_BIND_CLASS(wxMenu, Menu)
            BIND_CTOR()
            BIND_CTOR(const wxString&)
            BIND_CTOR(const wxString&, long)
            BIND_CTOR(long)

            BIND_F2MF_OVERLOAD(MenuNS, Append,
                wxMenuItem*, (wxMenu*, int))
            BIND_F2MF_OVERLOAD(MenuNS, Append,
                wxMenuItem*, (wxMenu*, int, const wxString&))
            BIND_F2MF_OVERLOAD(MenuNS, Append,
                wxMenuItem*, (wxMenu*, int, const wxString&, const wxString&))
            BIND_F2MF_OVERLOAD(MenuNS, Append,
                wxMenuItem*, (wxMenu*, int,const wxString&,const wxString&, wxItemKind))

            BIND_MF(wxMenu, AppendSeparator)
            BIND_MF(wxMenu, AppendCheckItem)
            BIND_MF(wxMenu, AppendRadioItem)
            BIND_MF(wxMenu, AppendSubMenu)
            BIND_MF_OVERLOAD(wxMenu, Append, wxMenuItem*, (wxMenuItem*))

            BIND_MF(wxMenu, Break)

            BIND_MF_OVERLOAD(wxMenu, Insert,
                wxMenuItem*, (size_t, wxMenuItem*))

            BIND_F2MF_OVERLOAD(MenuNS, Insert,
                wxMenuItem*, (wxMenu*, size_t, int))
            BIND_F2MF_OVERLOAD(MenuNS, Insert,
                wxMenuItem*, (wxMenu*, size_t, int, const wxString&))
            BIND_F2MF_OVERLOAD(MenuNS, Insert,
                wxMenuItem*, (wxMenu*, size_t, int, const wxString&, const wxString&))
            BIND_F2MF_OVERLOAD(MenuNS, Insert,
                wxMenuItem*, (wxMenu*, size_t, int, const wxString&, const wxString&, wxItemKind))

            BIND_F2MF_OVERLOAD(MenuNS, Insert,
                wxMenuItem*, (wxMenu*, size_t, int, const wxString&, wxMenu*))
            BIND_F2MF_OVERLOAD(MenuNS, Insert,
                wxMenuItem*, (wxMenu*, size_t, int, const wxString&, wxMenu*, const wxString&))

            BIND_MF(wxMenu, InsertSeparator)
            BIND_MF(wxMenu, InsertCheckItem)
            BIND_MF(wxMenu, InsertRadioItem)

            BIND_MF_OVERLOAD(wxMenu, Prepend,
                wxMenuItem*, (wxMenuItem*))

            BIND_F2MF_OVERLOAD(MenuNS, Prepend,
                wxMenuItem*, (wxMenu*, int))
            BIND_F2MF_OVERLOAD(MenuNS, Prepend,
                wxMenuItem*, (wxMenu*, int, const wxString&))
            BIND_F2MF_OVERLOAD(MenuNS, Prepend,
                wxMenuItem*, (wxMenu*, int, const wxString&, const wxString&))
            BIND_F2MF_OVERLOAD(MenuNS, Prepend,
                wxMenuItem*, (wxMenu*, int, const wxString&, const wxString&, wxItemKind))

            BIND_F2MF_OVERLOAD(MenuNS, Prepend,
                wxMenuItem*, (wxMenu*, int, const wxString&, wxMenu*))
            BIND_F2MF_OVERLOAD(MenuNS, Prepend,
                wxMenuItem*, (wxMenu*, int, const wxString&, wxMenu*, const wxString&))

            BIND_MF(wxMenu, PrependSeparator)
            BIND_MF(wxMenu, PrependCheckItem)
            BIND_MF(wxMenu, PrependRadioItem)

            BIND_MF_OVERLOAD(wxMenu, Remove,
                wxMenuItem*, (int))
            BIND_MF_OVERLOAD(wxMenu, Remove,
                wxMenuItem*, (wxMenuItem*))

            BIND_MF_OVERLOAD(wxMenu, Destroy,
                bool, (int))
            BIND_MF_OVERLOAD(wxMenu, Destroy,
                bool, (wxMenuItem*))

            BIND_MF(wxMenu, GetMenuItemCount)
            BIND_MF_OVERLOAD(wxMenu, GetMenuItems,
                const wxMenuItemList&, () const)
            BIND_MF_OVERLOAD(wxMenu, GetMenuItems,
                wxMenuItemList&, ())

            BIND_MF_OVERLOAD(wxMenu, FindItem,
                int, (const wxString&) const)
            BIND_MF_OVERLOAD(wxMenu, FindItem,
                wxMenuItem*, (int, wxMenu**) const)

            BIND_MF(wxMenu, FindItemByPosition)

            BIND_MF(wxMenu, Enable)
            BIND_MF(wxMenu, IsEnabled)

            BIND_MF(wxMenu, Check)
            BIND_MF(wxMenu, IsChecked)

            BIND_MF(wxMenu, SetLabel)
            BIND_MF(wxMenu, GetLabel)

            BIND_MF(wxMenu, SetHelpString)
            BIND_MF(wxMenu, SetHelpString)

            BIND_MF(wxMenu, SetTitle)
            BIND_MF(wxMenu, GetTitle)

            BIND_MF(wxMenu, SetEventHandler)
            BIND_MF(wxMenu, GetEventHandler)

            BIND_MF(wxMenu, SetInvokingWindow)
            BIND_MF(wxMenu, GetInvokingWindow)

            BIND_MF(wxMenu, GetStyle)

            BIND_MF(wxMenu, UpdateUI)
            BIND_MF(wxMenu, GetMenuBar)

            BIND_MF(wxMenu, Attach)
            BIND_MF(wxMenu, Detach)
            BIND_MF(wxMenu, IsAttached)

            BIND_MF(wxMenu, SetParent)
            BIND_MF(wxMenu, GetParent)

            BIND_MF(wxMenu, FindChildItem)
            BIND_MF(wxMenu, SendEvent)
#if wxABI_VERSION >= 20805
            BIND_MF(wxMenu, GetLabelText)
#endif
        END_BIND_CLASS(wxMenu)

        // wxMenuBar bind
        BEGIN_BIND_CLASS(wxMenuBar, MenuBar, wxWindow)
            BIND_CTOR()
            BIND_CTOR(long)
            BIND_CTOR(size_t, wxMenu**,const wxString*, long)

            BIND_MF_OVERLOAD(wxMenuBar, Append,
                bool, (wxMenu*, const wxString&))
            BIND_MF(wxMenuBar, Insert)

            BIND_MF(wxMenuBar, GetMenuCount)
            BIND_MF(wxMenuBar, GetMenu)

            BIND_MF(wxMenuBar, Replace)
            BIND_MF(wxMenuBar, Remove)
            BIND_MF(wxMenuBar, EnableTop)
            BIND_MF(wxMenuBar, IsEnabledTop)
            BIND_MF(wxMenuBar, SetLabelTop)
            BIND_MF(wxMenuBar, GetLabelTop)
            BIND_MF(wxMenuBar, FindMenuItem)
            BIND_MF(wxMenuBar, FindItem)
            BIND_MF(wxMenuBar, FindMenu)

            BIND_MF_OVERLOAD(wxMenuBar, Enable,
                void, (int, bool))
            BIND_MF(wxMenuBar, Check)
            BIND_MF(wxMenuBar, IsChecked)
            BIND_MF_OVERLOAD(wxMenuBar, IsEnabled,
                bool, (int) const)
            BIND_MF_OVERLOAD(wxMenuBar, IsEnabled,
                bool, () const)
            BIND_MF_OVERLOAD(wxMenuBar, SetLabel,
                void, (int, const wxString&))
            BIND_MF_OVERLOAD(wxMenuBar, GetLabel,
                wxString, (int) const)
            BIND_MF(wxMenuBar, SetHelpString)
            BIND_MF(wxMenuBar, GetHelpString)

            BIND_MF(wxMenuBar, GetFrame)
            BIND_MF(wxMenuBar, IsAttached)
            BIND_MF(wxMenuBar, Attach)
            BIND_MF(wxMenuBar, Detach)

            BIND_MF_OVERLOAD(wxMenuBar, Enable,
                bool, (bool))
            BIND_MF_OVERLOAD(wxMenuBar, SetLabel,
                void, (const wxString&))
            BIND_MF_OVERLOAD(wxMenuBar, GetLabel,
                wxString, () const)

            BIND_MF(wxMenuBar, AcceptsFocusFromKeyboard)
            BIND_MF(wxMenuBar, UpdateMenus)
#if wxABI_VERSION >= 20805
            BIND_MF(wxMenuBar, SetMenuLabel)
            BIND_MF(wxMenuBar, GetMenuLabel)
            BIND_MF(wxMenuBar, GetMenuLabelText)
#endif
        END_BIND_CLASS(wxMenuBar)
    END_BIND_MODULE(wx)

    return 0;
}
