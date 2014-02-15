#include <precompile.h>

namespace
{
    // =================================
    wxMenuItem* Append1(wxMenu* self, int itemid)
    {
        return self->Append(itemid);
    }
    wxMenuItem* Append2(wxMenu* self, int itemid, const wxString& text)
    {
        return self->Append(itemid,text);
    }
    wxMenuItem* Append3(wxMenu* self, int itemid, const wxString& text, const wxString& help)
    {
        return self->Append(itemid,text,help);
    }
    wxMenuItem* Append4(wxMenu* self, int itemid, const wxString& text, const wxString& help, wxItemKind kind)
    {
        return self->Append(itemid,text,help,kind);
    }

    // Auto generated CPP code for 'AppendCheckItem'
    // =================================
    wxMenuItem* AppendCheckItem2(wxMenu* self, int itemid, const wxString& text)
    {
        return self->AppendCheckItem(itemid,text);
    }
    wxMenuItem* AppendCheckItem3(wxMenu* self, int itemid, const wxString& text, const wxString& help)
    {
        return self->AppendCheckItem(itemid,text,help);
    }
    // Auto generated CPP code for 'AppendRadioItem'
    // =================================
    wxMenuItem* AppendRadioItem2(wxMenu* self, int itemid, const wxString& text)
    {
        return self->AppendRadioItem(itemid,text);
    }
    wxMenuItem* AppendRadioItem3(wxMenu* self, int itemid, const wxString& text, const wxString& help)
    {
        return self->AppendRadioItem(itemid,text,help);
    }
    // Auto generated CPP code for 'AppendSubMenu'
    // =================================
    wxMenuItem* AppendSubMenu2(wxMenu* self, wxMenu * submenu, const wxString& text)
    {
        return self->AppendSubMenu(submenu,text);
    }
    wxMenuItem* AppendSubMenu3(wxMenu* self, wxMenu * submenu, const wxString& text, const wxString& help)
    {
        return self->AppendSubMenu(submenu,text,help);
    }
    // Auto generated CPP code for 'Insert'
    // =================================
    wxMenuItem* Insert2(wxMenu* self, size_t pos, int itemid)
    {
        return self->Insert(pos,itemid);
    }
    wxMenuItem* Insert3(wxMenu* self, size_t pos, int itemid, const wxString& text)
    {
        return self->Insert(pos,itemid,text);
    }
    wxMenuItem* Insert4(wxMenu* self, size_t pos, int itemid, const wxString& text, const wxString& help)
    {
        return self->Insert(pos,itemid,text,help);
    }
    wxMenuItem* Insert5(wxMenu* self, size_t pos, int itemid, const wxString& text, const wxString& help, wxItemKind kind)
    {
        return self->Insert(pos,itemid,text,help,kind);
    }
    // Auto generated CPP code for 'InsertCheckItem'
    // =================================
    wxMenuItem* InsertCheckItem3(wxMenu* self, size_t pos, int itemid, const wxString& text)
    {
        return self->InsertCheckItem(pos,itemid,text);
    }
    wxMenuItem* InsertCheckItem4(wxMenu* self, size_t pos, int itemid, const wxString& text, const wxString& help)
    {
        return self->InsertCheckItem(pos,itemid,text,help);
    }
    // Auto generated CPP code for 'InsertRadioItem'
    // =================================
    wxMenuItem* InsertRadioItem3(wxMenu* self, size_t pos, int itemid, const wxString& text)
    {
        return self->InsertRadioItem(pos,itemid,text);
    }
    wxMenuItem* InsertRadioItem4(wxMenu* self, size_t pos, int itemid, const wxString& text, const wxString& help)
    {
        return self->InsertRadioItem(pos,itemid,text,help);
    }
    // Auto generated CPP code for 'Insert'
    // =================================
    wxMenuItem* Insert4(wxMenu* self, size_t pos, int itemid, const wxString& text, wxMenu * submenu)
    {
        return self->Insert(pos,itemid,text,submenu);
    }
    wxMenuItem* Insert5(wxMenu* self, size_t pos, int itemid, const wxString& text, wxMenu * submenu, const wxString& help)
    {
        return self->Insert(pos,itemid,text,submenu,help);
    }
    // Auto generated CPP code for 'Prepend'
    // =================================
    wxMenuItem* Prepend1(wxMenu* self, int itemid)
    {
        return self->Prepend(itemid);
    }
    wxMenuItem* Prepend2(wxMenu* self, int itemid, const wxString& text)
    {
        return self->Prepend(itemid,text);
    }
    wxMenuItem* Prepend3(wxMenu* self, int itemid, const wxString& text, const wxString& help)
    {
        return self->Prepend(itemid,text,help);
    }
    wxMenuItem* Prepend4(wxMenu* self, int itemid, const wxString& text, const wxString& help, wxItemKind kind)
    {
        return self->Prepend(itemid,text,help,kind);
    }
    // Auto generated CPP code for 'PrependCheckItem'
    // =================================
    wxMenuItem* PrependCheckItem2(wxMenu* self, int itemid, const wxString& text)
    {
        return self->PrependCheckItem(itemid,text);
    }
    wxMenuItem* PrependCheckItem3(wxMenu* self, int itemid, const wxString& text, const wxString& help)
    {
        return self->PrependCheckItem(itemid,text,help);
    }
    // Auto generated CPP code for 'PrependRadioItem'
    // =================================
    wxMenuItem* PrependRadioItem2(wxMenu* self, int itemid, const wxString& text)
    {
        return self->PrependRadioItem(itemid,text);
    }
    wxMenuItem* PrependRadioItem3(wxMenu* self, int itemid, const wxString& text, const wxString& help)
    {
        return self->PrependRadioItem(itemid,text,help);
    }
    // Auto generated CPP code for 'Prepend'
    // =================================
    wxMenuItem* Prepend3(wxMenu* self, int itemid, const wxString& text, wxMenu * submenu)
    {
        return self->Prepend(itemid,text,submenu);
    }
    wxMenuItem* Prepend4(wxMenu* self, int itemid, const wxString& text, wxMenu * submenu, const wxString& help)
    {
        return self->Prepend(itemid,text,submenu,help);
    }
    // Auto generated CPP code for 'FindItem'
    // =================================
    wxMenuItem* FindItem1(wxMenu* self, int itemid)
    {
        return self->FindItem(itemid);
    }
    wxMenuItem* FindItem2(wxMenu* self, int itemid, wxMenu ** menu)
    {
        return self->FindItem(itemid,menu);
    }
    // Auto generated CPP code for 'UpdateUI'
    // =================================
    void UpdateUI0(wxMenu* self)
    {
        return self->UpdateUI();
    }
    void UpdateUI1(wxMenu* self, wxEvtHandler* source)
    {
        return self->UpdateUI(source);
    }
    // Auto generated CPP code for 'FindChildItem'
    // =================================
    wxMenuItem * FindChildItem1(wxMenu* self, int itemid)
    {
        return self->FindChildItem(itemid);
    }
    wxMenuItem * FindChildItem2(wxMenu* self, int itemid, size_t * pos)
    {
        return self->FindChildItem(itemid,pos);
    }

    // Auto generated CPP code for 'SendEvent'
    // =================================
    bool SendEvent1(wxMenu* self, int itemid)
    {
        return self->SendEvent(itemid);
    }
    bool SendEvent2(wxMenu* self, int itemid, int checked)
    {
        return self->SendEvent(itemid,checked);
    }
    // Auto generated CPP code for 'Append'
    // =================================
    wxMenuItem* Append3(wxMenu* self, int itemid, const wxString& text, wxMenu * submenu)
    {
        return self->Append(itemid,text,submenu);
    }
    wxMenuItem* Append4(wxMenu* self, int itemid, const wxString& text, wxMenu * submenu, const wxString& help)
    {
        return self->Append(itemid,text,submenu,help);
    }
}  // namespace

REGISTER_WXLUA_BIND(wxmenu)
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CPPCLASS_OBJECT(wxMenuItem)
            BIND_CTOR()
            BIND_CTOR(wxMenu*)
            BIND_CTOR(wxMenu*, int)
            BIND_CTOR(wxMenu*, int, const wxString&)
            BIND_CTOR(wxMenu*, int, const wxString&, const wxString&)
            BIND_CTOR(wxMenu*, int, const wxString&, const wxString&, wxItemKind)
            BIND_CTOR(wxMenu*, int, const wxString&, const wxString&,wxItemKind,wxMenu*)

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
        BEGIN_BIND_CPPCLASS(wxMenu)
            BIND_CTOR()
            BIND_CTOR(const wxString&)
            BIND_CTOR(const wxString&, long)
            BIND_CTOR(long)

            BIND_MF(wxMenu, AppendSeparator)
            BIND_MF(wxMenu, AppendCheckItem)
            BIND_MF(wxMenu, AppendRadioItem)
            BIND_MF(wxMenu, AppendSubMenu)
            BIND_MF_OVERLOAD(wxMenu, Append, wxMenuItem*, (wxMenuItem*))

            BIND_MF(wxMenu, Break)

            BIND_MF_OVERLOAD(wxMenu, Insert,
                wxMenuItem*, (size_t, wxMenuItem*))

            BIND_MF(wxMenu, InsertSeparator)
            BIND_MF(wxMenu, InsertCheckItem)
            BIND_MF(wxMenu, InsertRadioItem)

            BIND_MF_OVERLOAD(wxMenu, Prepend,
                wxMenuItem*, (wxMenuItem*))

                // Auto generated MACRO code for 'Append':
                // =================================
                BIND_F2MF_OVERLOAD(Append, 1,
                wxMenuItem*, (wxMenu*,int))
                BIND_F2MF_OVERLOAD(Append, 2,
                wxMenuItem*, (wxMenu*,int,const wxString&))
                BIND_F2MF_OVERLOAD(Append, 3,
                wxMenuItem*, (wxMenu*,int,const wxString&,const wxString&))
                BIND_F2MF_OVERLOAD(Append, 4,
                wxMenuItem*, (wxMenu*,int,const wxString&,const wxString&,wxItemKind))

                // Auto generated MACRO code for 'AppendCheckItem':
                // =================================
                BIND_F2MF_OVERLOAD(AppendCheckItem, 2,
                wxMenuItem*, (wxMenu*,int,const wxString&))
                BIND_F2MF_OVERLOAD(AppendCheckItem, 3,
                wxMenuItem*, (wxMenu*,int,const wxString&,const wxString&))
                // Auto generated MACRO code for 'AppendRadioItem':
                // =================================
                BIND_F2MF_OVERLOAD(AppendRadioItem, 2,
                wxMenuItem*, (wxMenu*,int,const wxString&))
                BIND_F2MF_OVERLOAD(AppendRadioItem, 3,
                wxMenuItem*, (wxMenu*,int,const wxString&,const wxString&))
                // Auto generated MACRO code for 'AppendSubMenu':
                // =================================
                BIND_F2MF_OVERLOAD(AppendSubMenu, 2,
                wxMenuItem*, (wxMenu*,wxMenu *,const wxString&))
                BIND_F2MF_OVERLOAD(AppendSubMenu, 3,
                wxMenuItem*, (wxMenu*,wxMenu *,const wxString&,const wxString&))
                // Auto generated MACRO code for 'Insert':
                // =================================
                BIND_F2MF_OVERLOAD(Insert, 2,
                wxMenuItem*, (wxMenu*,size_t,int))
                BIND_F2MF_OVERLOAD(Insert, 3,
                wxMenuItem*, (wxMenu*,size_t,int,const wxString&))
                BIND_F2MF_OVERLOAD(Insert, 4,
                wxMenuItem*, (wxMenu*,size_t,int,const wxString&,const wxString&))
                BIND_F2MF_OVERLOAD(Insert, 5,
                wxMenuItem*, (wxMenu*,size_t,int,const wxString&,const wxString&,wxItemKind))
                // Auto generated MACRO code for 'InsertCheckItem':
                // =================================
                BIND_F2MF_OVERLOAD(InsertCheckItem, 3,
                wxMenuItem*, (wxMenu*,size_t,int,const wxString&))
                BIND_F2MF_OVERLOAD(InsertCheckItem, 4,
                wxMenuItem*, (wxMenu*,size_t,int,const wxString&,const wxString&))
                // Auto generated MACRO code for 'InsertRadioItem':
                // =================================
                BIND_F2MF_OVERLOAD(InsertRadioItem, 3,
                wxMenuItem*, (wxMenu*,size_t,int,const wxString&))
                BIND_F2MF_OVERLOAD(InsertRadioItem, 4,
                wxMenuItem*, (wxMenu*,size_t,int,const wxString&,const wxString&))
                // Auto generated MACRO code for 'Insert':
                // =================================
                BIND_F2MF_OVERLOAD(Insert, 4,
                wxMenuItem*, (wxMenu*,size_t,int,const wxString&,wxMenu *))
                BIND_F2MF_OVERLOAD(Insert, 5,
                wxMenuItem*, (wxMenu*,size_t,int,const wxString&,wxMenu *,const wxString&))
                // Auto generated MACRO code for 'Prepend':
                // =================================
                BIND_F2MF_OVERLOAD(Prepend, 1,
                wxMenuItem*, (wxMenu*,int))
                BIND_F2MF_OVERLOAD(Prepend, 2,
                wxMenuItem*, (wxMenu*,int,const wxString&))
                BIND_F2MF_OVERLOAD(Prepend, 3,
                wxMenuItem*, (wxMenu*,int,const wxString&,const wxString&))
                BIND_F2MF_OVERLOAD(Prepend, 4,
                wxMenuItem*, (wxMenu*,int,const wxString&,const wxString&,wxItemKind))
                // Auto generated MACRO code for 'PrependCheckItem':
                // =================================
                BIND_F2MF_OVERLOAD(PrependCheckItem, 2,
                wxMenuItem*, (wxMenu*,int,const wxString&))
                BIND_F2MF_OVERLOAD(PrependCheckItem, 3,
                wxMenuItem*, (wxMenu*,int,const wxString&,const wxString&))
                // Auto generated MACRO code for 'PrependRadioItem':
                // =================================
                BIND_F2MF_OVERLOAD(PrependRadioItem, 2,
                wxMenuItem*, (wxMenu*,int,const wxString&))
                BIND_F2MF_OVERLOAD(PrependRadioItem, 3,
                wxMenuItem*, (wxMenu*,int,const wxString&,const wxString&))
                // Auto generated MACRO code for 'Prepend':
                // =================================
                BIND_F2MF_OVERLOAD(Prepend, 3,
                wxMenuItem*, (wxMenu*,int,const wxString&,wxMenu *))
                BIND_F2MF_OVERLOAD(Prepend, 4,
                wxMenuItem*, (wxMenu*,int,const wxString&,wxMenu *,const wxString&))
                // Auto generated MACRO code for 'FindItem':
                // =================================
                BIND_F2MF_OVERLOAD(FindItem, 1,
                wxMenuItem*, (wxMenu*,int))
                BIND_F2MF_OVERLOAD(FindItem, 2,
                wxMenuItem*, (wxMenu*,int,wxMenu **))
                // Auto generated MACRO code for 'UpdateUI':
                // =================================
                BIND_F2MF_OVERLOAD(UpdateUI, 0,
                void, (wxMenu*))
                BIND_F2MF_OVERLOAD(UpdateUI, 1,
                void, (wxMenu*,wxEvtHandler*))
                // Auto generated MACRO code for 'FindChildItem':
                // =================================
                BIND_F2MF_OVERLOAD(FindChildItem, 1,
                wxMenuItem *, (wxMenu*,int))
                BIND_F2MF_OVERLOAD(FindChildItem, 2,
                wxMenuItem *, (wxMenu*,int,size_t *))

                // Auto generated MACRO code for 'SendEvent':
                // =================================
                BIND_F2MF_OVERLOAD(SendEvent, 1,
                bool, (wxMenu*,int))
                BIND_F2MF_OVERLOAD(SendEvent, 2,
                bool, (wxMenu*,int,int))
                // Auto generated MACRO code for 'Append':
                // =================================
                BIND_F2MF_OVERLOAD(Append, 3,
                wxMenuItem*, (wxMenu*,int,const wxString&,wxMenu *))
                BIND_F2MF_OVERLOAD(Append, 4,
                wxMenuItem*, (wxMenu*,int,const wxString&,wxMenu *,const wxString&))

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
        BEGIN_BIND_CLASS_WIN(wxMenuBar)
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
END_REGISTER(menu)
