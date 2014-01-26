#include <precompile.h>

#include <wx/collpane.h>

// namespace for class wxCollapsiblePaneBase
namespace
{
    // Auto generated CPP code for 'Collapse'
    // =================================
    void Collapse0(wxCollapsiblePaneBase* self)
    {
        return self->Collapse();
    }
    void Collapse1(wxCollapsiblePaneBase* self, bool collapse)
    {
        return self->Collapse(collapse);
    }
}  // namespace for wxCollapsiblePaneBase

// namespace for class wxCollapsiblePane
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create3(wxCollapsiblePane* self, wxWindow * parent, wxWindowID winid, const wxString& label)
    {
        return self->Create(parent,winid,label);
    }
    bool Create4(wxCollapsiblePane* self, wxWindow * parent, wxWindowID winid, const wxString& label, const wxPoint& pos)
    {
        return self->Create(parent,winid,label,pos);
    }
    bool Create5(wxCollapsiblePane* self, wxWindow * parent, wxWindowID winid, const wxString& label, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,winid,label,pos,size);
    }
    bool Create6(wxCollapsiblePane* self, wxWindow * parent, wxWindowID winid, const wxString& label, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,winid,label,pos,size,style);
    }
    bool Create7(wxCollapsiblePane* self, wxWindow * parent, wxWindowID winid, const wxString& label, const wxPoint& pos, const wxSize& size, long style, const wxValidator& val)
    {
        return self->Create(parent,winid,label,pos,size,style,val);
    }
    bool Create8(wxCollapsiblePane* self, wxWindow * parent, wxWindowID winid, const wxString& label, const wxPoint& pos, const wxSize& size, long style, const wxValidator& val, const wxString& name)
    {
        return self->Create(parent,winid,label,pos,size,style,val,name);
    }

    // Auto generated CPP code for 'Collapse'
    // =================================
    void Collapse0(wxCollapsiblePane* self)
    {
        return self->Collapse();
    }
    void Collapse1(wxCollapsiblePane* self, bool collapse)
    {
        return self->Collapse(collapse);
    }
}  // namespace for wxCollapsiblePane

REGISTER_WXLUA_BIND(collpane)
{
    BEGIN_BIND_MODULE(wx)
#if wxUSE_COLLPANE
        // Bind class wxCollapsiblePaneBase
        BEGIN_BIND_CLASS_CONTROL(wxCollapsiblePaneBase)
        // Auto generated MACRO code for 'Collapse':
        // =================================
        BIND_F2MF_OVERLOAD(Collapse, 0,
        void, (wxCollapsiblePaneBase*))
        BIND_F2MF_OVERLOAD(Collapse, 1,
        void, (wxCollapsiblePaneBase*, bool))
        BIND_MF(wxCollapsiblePaneBase, Expand)
        BIND_MF(wxCollapsiblePaneBase, IsCollapsed)
        BIND_MF(wxCollapsiblePaneBase, IsExpanded)
        BIND_MF(wxCollapsiblePaneBase, GetPane)
        BIND_MF(wxCollapsiblePaneBase, GetLabel)
        BIND_MF(wxCollapsiblePaneBase, SetLabel)
        END_BIND_CLASS(wxCollapsiblePaneBase)
#endif

        // Bind class wxCollapsiblePaneEvent
        BEGIN_BIND_CLASS(wxCollapsiblePaneEvent, wxCommandEvent)
        // Auto generated MACRO code for ctor of 'wxCollapsiblePaneEvent':
        // =================================
        BIND_CTOR()
        BIND_MF(wxCollapsiblePaneEvent, GetCollapsed)
        BIND_MF(wxCollapsiblePaneEvent, SetCollapsed)
        END_BIND_CLASS(wxCollapsiblePaneEvent)

        // Bind class wxCollapsiblePane
        BEGIN_BIND_CLASS(wxCollapsiblePane)
        // Auto generated MACRO code for ctor of 'wxGenericCollapsiblePane':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxGenericCollapsiblePane':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxCollapsiblePane*, wxWindow *, wxWindowID, const wxString&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxCollapsiblePane*, wxWindow *, wxWindowID, const wxString&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxCollapsiblePane*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxCollapsiblePane*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxCollapsiblePane*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&))
        BIND_F2MF_OVERLOAD(Create, 8,
        bool, (wxCollapsiblePane*, wxWindow *, wxWindowID, const wxString&, const wxPoint&, const wxSize&, long, const wxValidator&, const wxString&))
        // Auto generated MACRO code for 'Collapse':
        // =================================
        BIND_F2MF_OVERLOAD(Collapse, 0,
        void, (wxCollapsiblePane*))
        BIND_F2MF_OVERLOAD(Collapse, 1,
        void, (wxCollapsiblePane*, bool))
        BIND_MF(wxCollapsiblePane, SetLabel)
        BIND_MF(wxCollapsiblePane, IsCollapsed)
        BIND_MF(wxCollapsiblePane, GetPane)
        BIND_MF(wxCollapsiblePane, GetLabel)
        BIND_MF(wxCollapsiblePane, Layout)
#if defined(__WXGTK24__) && !defined(__WXUNIVERSAL__)
#else
        BIND_MF(wxCollapsiblePane, OnStateChange)
#endif
        END_BIND_CLASS(wxCollapsiblePane)

    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
        BIND_TABLE_VALUE(wxCollapsiblePaneNameStr, &wxCollapsiblePaneNameStr[0])
    END_LUA_TABLE(wx)
    return 0;
}