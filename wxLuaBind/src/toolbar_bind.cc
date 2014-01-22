#include <precompile.h>

namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxToolBar* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxToolBar* self, wxWindow * parent, wxWindowID id, const wxPoint& pos)
    {
        return self->Create(parent,id,pos);
    }
    bool Create4(wxToolBar* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,pos,size);
    }
    bool Create5(wxToolBar* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,pos,size,style);
    }
    bool Create6(wxToolBar* self, wxWindow * parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
    {
        return self->Create(parent,id,pos,size,style,name);
    }
}  // namespace

namespace
{
    // Auto generated CPP code for 'AddTool'
    // =================================
    wxToolBarToolBase * AddTool4(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled)
    {
        return self->AddTool(toolid,label,bitmap,bmpDisabled);
    }
    wxToolBarToolBase * AddTool5(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, wxItemKind kind)
    {
        return self->AddTool(toolid,label,bitmap,bmpDisabled,kind);
    }
    wxToolBarToolBase * AddTool6(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, wxItemKind kind, const wxString& shortHelp)
    {
        return self->AddTool(toolid,label,bitmap,bmpDisabled,kind,shortHelp);
    }
    wxToolBarToolBase * AddTool7(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, wxItemKind kind, const wxString& shortHelp, const wxString& longHelp)
    {
        return self->AddTool(toolid,label,bitmap,bmpDisabled,kind,shortHelp,longHelp);
    }
    wxToolBarToolBase * AddTool8(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, wxItemKind kind, const wxString& shortHelp, const wxString& longHelp, wxObject * data)
    {
        return self->AddTool(toolid,label,bitmap,bmpDisabled,kind,shortHelp,longHelp,data);
    }

    // Auto generated CPP code for 'AddTool'
    // =================================
    wxToolBarToolBase * AddTool3(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap)
    {
        return self->AddTool(toolid,label,bitmap);
    }
    wxToolBarToolBase * AddTool4(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxString& shortHelp)
    {
        return self->AddTool(toolid,label,bitmap,shortHelp);
    }
    wxToolBarToolBase * AddTool5(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxString& shortHelp, wxItemKind kind)
    {
        return self->AddTool(toolid,label,bitmap,shortHelp,kind);
    }

    // Auto generated CPP code for 'AddCheckTool'
    // =================================
    wxToolBarToolBase * AddCheckTool3(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap)
    {
        return self->AddCheckTool(toolid,label,bitmap);
    }
    wxToolBarToolBase * AddCheckTool4(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled)
    {
        return self->AddCheckTool(toolid,label,bitmap,bmpDisabled);
    }
    wxToolBarToolBase * AddCheckTool5(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, const wxString& shortHelp)
    {
        return self->AddCheckTool(toolid,label,bitmap,bmpDisabled,shortHelp);
    }
    wxToolBarToolBase * AddCheckTool6(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, const wxString& shortHelp, const wxString& longHelp)
    {
        return self->AddCheckTool(toolid,label,bitmap,bmpDisabled,shortHelp,longHelp);
    }
    wxToolBarToolBase * AddCheckTool7(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, const wxString& shortHelp, const wxString& longHelp, wxObject * data)
    {
        return self->AddCheckTool(toolid,label,bitmap,bmpDisabled,shortHelp,longHelp,data);
    }

    // Auto generated CPP code for 'AddRadioTool'
    // =================================
    wxToolBarToolBase * AddRadioTool3(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap)
    {
        return self->AddRadioTool(toolid,label,bitmap);
    }
    wxToolBarToolBase * AddRadioTool4(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled)
    {
        return self->AddRadioTool(toolid,label,bitmap,bmpDisabled);
    }
    wxToolBarToolBase * AddRadioTool5(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, const wxString& shortHelp)
    {
        return self->AddRadioTool(toolid,label,bitmap,bmpDisabled,shortHelp);
    }
    wxToolBarToolBase * AddRadioTool6(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, const wxString& shortHelp, const wxString& longHelp)
    {
        return self->AddRadioTool(toolid,label,bitmap,bmpDisabled,shortHelp,longHelp);
    }
    wxToolBarToolBase * AddRadioTool7(wxToolBar* self, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, const wxString& shortHelp, const wxString& longHelp, wxObject * data)
    {
        return self->AddRadioTool(toolid,label,bitmap,bmpDisabled,shortHelp,longHelp,data);
    }

    // Auto generated CPP code for 'InsertTool'
    // =================================
    wxToolBarToolBase * InsertTool4(wxToolBar* self, size_t pos, int toolid, const wxString& label, const wxBitmap& bitmap)
    {
        return self->InsertTool(pos,toolid,label,bitmap);
    }
    wxToolBarToolBase * InsertTool5(wxToolBar* self, size_t pos, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled)
    {
        return self->InsertTool(pos,toolid,label,bitmap,bmpDisabled);
    }
    wxToolBarToolBase * InsertTool6(wxToolBar* self, size_t pos, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, wxItemKind kind)
    {
        return self->InsertTool(pos,toolid,label,bitmap,bmpDisabled,kind);
    }
    wxToolBarToolBase * InsertTool7(wxToolBar* self, size_t pos, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, wxItemKind kind, const wxString& shortHelp)
    {
        return self->InsertTool(pos,toolid,label,bitmap,bmpDisabled,kind,shortHelp);
    }
    wxToolBarToolBase * InsertTool8(wxToolBar* self, size_t pos, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, wxItemKind kind, const wxString& shortHelp, const wxString& longHelp)
    {
        return self->InsertTool(pos,toolid,label,bitmap,bmpDisabled,kind,shortHelp,longHelp);
    }
    wxToolBarToolBase * InsertTool9(wxToolBar* self, size_t pos, int toolid, const wxString& label, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, wxItemKind kind, const wxString& shortHelp, const wxString& longHelp, wxObject * clientData)
    {
        return self->InsertTool(pos,toolid,label,bitmap,bmpDisabled,kind,shortHelp,longHelp,clientData);
    }

    // Auto generated CPP code for 'AddTool'
    // =================================
    wxToolBarToolBase * AddTool3(wxToolBar* self, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled)
    {
        return self->AddTool(toolid,bitmap,bmpDisabled);
    }
    wxToolBarToolBase * AddTool4(wxToolBar* self, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, bool toggle)
    {
        return self->AddTool(toolid,bitmap,bmpDisabled,toggle);
    }
    wxToolBarToolBase * AddTool5(wxToolBar* self, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, bool toggle, wxObject * clientData)
    {
        return self->AddTool(toolid,bitmap,bmpDisabled,toggle,clientData);
    }
    wxToolBarToolBase * AddTool6(wxToolBar* self, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, bool toggle, wxObject * clientData, const wxString& shortHelpString)
    {
        return self->AddTool(toolid,bitmap,bmpDisabled,toggle,clientData,shortHelpString);
    }
    wxToolBarToolBase * AddTool7(wxToolBar* self, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, bool toggle, wxObject * clientData, const wxString& shortHelpString, const wxString& longHelpString)
    {
        return self->AddTool(toolid,bitmap,bmpDisabled,toggle,clientData,shortHelpString,longHelpString);
    }

    // Auto generated CPP code for 'AddTool'
    // =================================
    wxToolBarToolBase * AddTool2(wxToolBar* self, int toolid, const wxBitmap& bitmap)
    {
        return self->AddTool(toolid,bitmap);
    }
    wxToolBarToolBase * AddTool3(wxToolBar* self, int toolid, const wxBitmap& bitmap, const wxString& shortHelpString)
    {
        return self->AddTool(toolid,bitmap,shortHelpString);
    }
    wxToolBarToolBase * AddTool4(wxToolBar* self, int toolid, const wxBitmap& bitmap, const wxString& shortHelpString, const wxString& longHelpString)
    {
        return self->AddTool(toolid,bitmap,shortHelpString,longHelpString);
    }

    // Auto generated CPP code for 'AddTool'
    // =================================
    wxToolBarToolBase * AddTool5(wxToolBar* self, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, bool toggle, wxCoord xPos)
    {
        return self->AddTool(toolid,bitmap,bmpDisabled,toggle,xPos);
    }
    wxToolBarToolBase * AddTool6(wxToolBar* self, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, bool toggle, wxCoord xPos, wxCoord yPos)
    {
        return self->AddTool(toolid,bitmap,bmpDisabled,toggle,xPos,yPos);
    }
    wxToolBarToolBase * AddTool7(wxToolBar* self, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, bool toggle, wxCoord xPos, wxCoord yPos, wxObject * clientData)
    {
        return self->AddTool(toolid,bitmap,bmpDisabled,toggle,xPos,yPos,clientData);
    }
    wxToolBarToolBase * AddTool8(wxToolBar* self, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, bool toggle, wxCoord xPos, wxCoord yPos, wxObject * clientData, const wxString& shortHelp)
    {
        return self->AddTool(toolid,bitmap,bmpDisabled,toggle,xPos,yPos,clientData,shortHelp);
    }
    wxToolBarToolBase * AddTool9(wxToolBar* self, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, bool toggle, wxCoord xPos, wxCoord yPos, wxObject * clientData, const wxString& shortHelp, const wxString& longHelp)
    {
        return self->AddTool(toolid,bitmap,bmpDisabled,toggle,xPos,yPos,clientData,shortHelp,longHelp);
    }

    // Auto generated CPP code for 'InsertTool'
    // =================================
    wxToolBarToolBase * InsertTool3(wxToolBar* self, size_t pos, int toolid, const wxBitmap& bitmap)
    {
        return self->InsertTool(pos,toolid,bitmap);
    }
    wxToolBarToolBase * InsertTool4(wxToolBar* self, size_t pos, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled)
    {
        return self->InsertTool(pos,toolid,bitmap,bmpDisabled);
    }
    wxToolBarToolBase * InsertTool5(wxToolBar* self, size_t pos, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, bool toggle)
    {
        return self->InsertTool(pos,toolid,bitmap,bmpDisabled,toggle);
    }
    wxToolBarToolBase * InsertTool6(wxToolBar* self, size_t pos, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, bool toggle, wxObject * clientData)
    {
        return self->InsertTool(pos,toolid,bitmap,bmpDisabled,toggle,clientData);
    }
    wxToolBarToolBase * InsertTool7(wxToolBar* self, size_t pos, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, bool toggle, wxObject * clientData, const wxString& shortHelp)
    {
        return self->InsertTool(pos,toolid,bitmap,bmpDisabled,toggle,clientData,shortHelp);
    }
    wxToolBarToolBase * InsertTool8(wxToolBar* self, size_t pos, int toolid, const wxBitmap& bitmap, const wxBitmap& bmpDisabled, bool toggle, wxObject * clientData, const wxString& shortHelp, const wxString& longHelp)
    {
        return self->InsertTool(pos,toolid,bitmap,bmpDisabled,toggle,clientData,shortHelp,longHelp);
    }

    // Auto generated CPP code for 'UpdateWindowUI'
    // =================================
    void UpdateWindowUI0(wxToolBar* self)
    {
        return self->UpdateWindowUI();
    }
    void UpdateWindowUI1(wxToolBar* self, long flags)
    {
        return self->UpdateWindowUI(flags);
    }
}  // namespace

REGISTER_WXLUA_BIND(wxtoolbar)
{
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS_OBJECT(wxToolBarToolBase, ToolBarToolBase)
            // Auto generated MACRO code for ctor of 'wxToolBarToolBase':
            // =================================
            BIND_CTOR()
            BIND_CTOR(wxToolBarBase *)
            BIND_CTOR(wxToolBarBase *, int)
            BIND_CTOR(wxToolBarBase *, int, const wxString&)
            BIND_CTOR(wxToolBarBase *, int, const wxString&, const wxBitmap&)
            BIND_CTOR(wxToolBarBase *, int, const wxString&, const wxBitmap&, const wxBitmap&)
            BIND_CTOR(wxToolBarBase *, int, const wxString&, const wxBitmap&, const wxBitmap&, wxItemKind)
            BIND_CTOR(wxToolBarBase *, int, const wxString&, const wxBitmap&, const wxBitmap&, wxItemKind, wxObject *)
            BIND_CTOR(wxToolBarBase *, int, const wxString&, const wxBitmap&, const wxBitmap&, wxItemKind, wxObject *, const wxString&)
            BIND_CTOR(wxToolBarBase *, int, const wxString&, const wxBitmap&, const wxBitmap&, wxItemKind, wxObject *, const wxString&, const wxString&)
            BIND_CTOR(wxToolBarBase *, wxControl *)

            BIND_MF(wxToolBarToolBase, GetId)
            BIND_MF(wxToolBarToolBase, GetControl)
            BIND_MF(wxToolBarToolBase, GetToolBar)
            BIND_MF(wxToolBarToolBase, IsButton)
            BIND_MF(wxToolBarToolBase, IsControl)
            BIND_MF(wxToolBarToolBase, IsSeparator)
            BIND_MF(wxToolBarToolBase, GetStyle)
            BIND_MF(wxToolBarToolBase, GetKind)
            BIND_MF(wxToolBarToolBase, IsEnabled)
            BIND_MF(wxToolBarToolBase, IsToggled)
            BIND_MF(wxToolBarToolBase, CanBeToggled)
            BIND_MF(wxToolBarToolBase, GetNormalBitmap)
            BIND_MF(wxToolBarToolBase, GetDisabledBitmap)
            BIND_MF(wxToolBarToolBase, GetBitmap)
            BIND_MF(wxToolBarToolBase, GetLabel)
            BIND_MF(wxToolBarToolBase, GetShortHelp)
            BIND_MF(wxToolBarToolBase, GetLongHelp)
            BIND_MF(wxToolBarToolBase, GetClientData)
            BIND_MF(wxToolBarToolBase, Enable)
            BIND_MF_OVERLOAD(wxToolBarToolBase, Toggle,
                bool, (bool))
            BIND_MF(wxToolBarToolBase, SetToggle)
            BIND_MF(wxToolBarToolBase, SetShortHelp)
            BIND_MF(wxToolBarToolBase, SetLongHelp)
            BIND_MF_OVERLOAD(wxToolBarToolBase, Toggle,
                void, ())
            BIND_MF(wxToolBarToolBase, SetNormalBitmap)
            BIND_MF(wxToolBarToolBase, SetDisabledBitmap)
            BIND_MF(wxToolBarToolBase, SetLabel)
            BIND_MF(wxToolBarToolBase, SetClientData)
            BIND_MF(wxToolBarToolBase, Detach)
            BIND_MF(wxToolBarToolBase, Attach)

        END_BIND_CLASS(wxToolBarToolBase)

        BEGIN_BIND_CLASS(wxToolBar, ToolBar, wxControl)
            // Auto generated MACRO code for 'wxToolBar':
            // =================================
            BIND_CTOR()
            BIND_CTOR(wxWindow *, wxWindowID)
            BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&)
            BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&)
            BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long)
            BIND_CTOR(wxWindow *, wxWindowID, const wxPoint&, const wxSize&, long, const wxString&)

            // Auto generated MACRO code for 'Create':
            // =================================
            BIND_F2MF_OVERLOAD(Create, 2,
            bool, (wxToolBar*,wxWindow *,wxWindowID))
            BIND_F2MF_OVERLOAD(Create, 3,
            bool, (wxToolBar*,wxWindow *,wxWindowID,const wxPoint&))
            BIND_F2MF_OVERLOAD(Create, 4,
            bool, (wxToolBar*,wxWindow *,wxWindowID,const wxPoint&,const wxSize&))
            BIND_F2MF_OVERLOAD(Create, 5,
            bool, (wxToolBar*,wxWindow *,wxWindowID,const wxPoint&,const wxSize&,long))
            BIND_F2MF_OVERLOAD(Create, 6,
            bool, (wxToolBar*,wxWindow *,wxWindowID,const wxPoint&,const wxSize&,long,const wxString&))

            // Auto generated MACRO code for 'AddTool':
            // =================================
            BIND_F2MF_OVERLOAD(AddTool, 4,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxBitmap&))
            BIND_F2MF_OVERLOAD(AddTool, 5,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxBitmap&,wxItemKind))
            BIND_F2MF_OVERLOAD(AddTool, 6,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxBitmap&,wxItemKind,const wxString&))
            BIND_F2MF_OVERLOAD(AddTool, 7,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxBitmap&,wxItemKind,const wxString&,const wxString&))
            BIND_F2MF_OVERLOAD(AddTool, 8,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxBitmap&,wxItemKind,const wxString&,const wxString&,wxObject *))

            // Auto generated MACRO code for 'AddTool':
            // =================================
            BIND_F2MF_OVERLOAD(AddTool, 3,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&))
            BIND_F2MF_OVERLOAD(AddTool, 4,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxString&))
            BIND_F2MF_OVERLOAD(AddTool, 5,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxString&,wxItemKind))

            // Auto generated MACRO code for 'AddCheckTool':
            // =================================
            BIND_F2MF_OVERLOAD(AddCheckTool, 3,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&))
            BIND_F2MF_OVERLOAD(AddCheckTool, 4,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxBitmap&))
            BIND_F2MF_OVERLOAD(AddCheckTool, 5,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxBitmap&,const wxString&))
            BIND_F2MF_OVERLOAD(AddCheckTool, 6,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxBitmap&,const wxString&,const wxString&))
            BIND_F2MF_OVERLOAD(AddCheckTool, 7,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxBitmap&,const wxString&,const wxString&,wxObject *))

            // Auto generated MACRO code for 'AddRadioTool':
            // =================================
            BIND_F2MF_OVERLOAD(AddRadioTool, 3,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&))
            BIND_F2MF_OVERLOAD(AddRadioTool, 4,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxBitmap&))
            BIND_F2MF_OVERLOAD(AddRadioTool, 5,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxBitmap&,const wxString&))
            BIND_F2MF_OVERLOAD(AddRadioTool, 6,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxBitmap&,const wxString&,const wxString&))
            BIND_F2MF_OVERLOAD(AddRadioTool, 7,
            wxToolBarToolBase *, (wxToolBar*,int,const wxString&,const wxBitmap&,const wxBitmap&,const wxString&,const wxString&,wxObject *))

            // Auto generated MACRO code for 'InsertTool':
            // =================================
            BIND_F2MF_OVERLOAD(InsertTool, 4,
            wxToolBarToolBase *, (wxToolBar*,size_t,int,const wxString&,const wxBitmap&))
            BIND_F2MF_OVERLOAD(InsertTool, 5,
            wxToolBarToolBase *, (wxToolBar*,size_t,int,const wxString&,const wxBitmap&,const wxBitmap&))
            BIND_F2MF_OVERLOAD(InsertTool, 6,
            wxToolBarToolBase *, (wxToolBar*,size_t,int,const wxString&,const wxBitmap&,const wxBitmap&,wxItemKind))
            BIND_F2MF_OVERLOAD(InsertTool, 7,
            wxToolBarToolBase *, (wxToolBar*,size_t,int,const wxString&,const wxBitmap&,const wxBitmap&,wxItemKind,const wxString&))
            BIND_F2MF_OVERLOAD(InsertTool, 8,
            wxToolBarToolBase *, (wxToolBar*,size_t,int,const wxString&,const wxBitmap&,const wxBitmap&,wxItemKind,const wxString&,const wxString&))
            BIND_F2MF_OVERLOAD(InsertTool, 9,
            wxToolBarToolBase *, (wxToolBar*,size_t,int,const wxString&,const wxBitmap&,const wxBitmap&,wxItemKind,const wxString&,const wxString&,wxObject *))

            // Auto generated MACRO code for 'AddTool':
            // =================================
            BIND_F2MF_OVERLOAD(AddTool, 3,
            wxToolBarToolBase *, (wxToolBar*,int,const wxBitmap&,const wxBitmap&))
            BIND_F2MF_OVERLOAD(AddTool, 4,
            wxToolBarToolBase *, (wxToolBar*,int,const wxBitmap&,const wxBitmap&,bool))
            BIND_F2MF_OVERLOAD(AddTool, 5,
            wxToolBarToolBase *, (wxToolBar*,int,const wxBitmap&,const wxBitmap&,bool,wxObject *))
            BIND_F2MF_OVERLOAD(AddTool, 6,
            wxToolBarToolBase *, (wxToolBar*,int,const wxBitmap&,const wxBitmap&,bool,wxObject *,const wxString&))
            BIND_F2MF_OVERLOAD(AddTool, 7,
            wxToolBarToolBase *, (wxToolBar*,int,const wxBitmap&,const wxBitmap&,bool,wxObject *,const wxString&,const wxString&))

            // Auto generated MACRO code for 'AddTool':
            // =================================
            BIND_F2MF_OVERLOAD(AddTool, 2,
            wxToolBarToolBase *, (wxToolBar*,int,const wxBitmap&))
            BIND_F2MF_OVERLOAD(AddTool, 3,
            wxToolBarToolBase *, (wxToolBar*,int,const wxBitmap&,const wxString&))
            BIND_F2MF_OVERLOAD(AddTool, 4,
            wxToolBarToolBase *, (wxToolBar*,int,const wxBitmap&,const wxString&,const wxString&))

            // Auto generated MACRO code for 'AddTool':
            // =================================
            BIND_F2MF_OVERLOAD(AddTool, 5,
            wxToolBarToolBase *, (wxToolBar*,int,const wxBitmap&,const wxBitmap&,bool,wxCoord))
            BIND_F2MF_OVERLOAD(AddTool, 6,
            wxToolBarToolBase *, (wxToolBar*,int,const wxBitmap&,const wxBitmap&,bool,wxCoord,wxCoord))
            BIND_F2MF_OVERLOAD(AddTool, 7,
            wxToolBarToolBase *, (wxToolBar*,int,const wxBitmap&,const wxBitmap&,bool,wxCoord,wxCoord,wxObject *))
            BIND_F2MF_OVERLOAD(AddTool, 8,
            wxToolBarToolBase *, (wxToolBar*,int,const wxBitmap&,const wxBitmap&,bool,wxCoord,wxCoord,wxObject *,const wxString&))
            BIND_F2MF_OVERLOAD(AddTool, 9,
            wxToolBarToolBase *, (wxToolBar*,int,const wxBitmap&,const wxBitmap&,bool,wxCoord,wxCoord,wxObject *,const wxString&,const wxString&))

            // Auto generated MACRO code for 'InsertTool':
            // =================================
            BIND_F2MF_OVERLOAD(InsertTool, 3,
            wxToolBarToolBase *, (wxToolBar*,size_t,int,const wxBitmap&))
            BIND_F2MF_OVERLOAD(InsertTool, 4,
            wxToolBarToolBase *, (wxToolBar*,size_t,int,const wxBitmap&,const wxBitmap&))
            BIND_F2MF_OVERLOAD(InsertTool, 5,
            wxToolBarToolBase *, (wxToolBar*,size_t,int,const wxBitmap&,const wxBitmap&,bool))
            BIND_F2MF_OVERLOAD(InsertTool, 6,
            wxToolBarToolBase *, (wxToolBar*,size_t,int,const wxBitmap&,const wxBitmap&,bool,wxObject *))
            BIND_F2MF_OVERLOAD(InsertTool, 7,
            wxToolBarToolBase *, (wxToolBar*,size_t,int,const wxBitmap&,const wxBitmap&,bool,wxObject *,const wxString&))
            BIND_F2MF_OVERLOAD(InsertTool, 8,
            wxToolBarToolBase *, (wxToolBar*,size_t,int,const wxBitmap&,const wxBitmap&,bool,wxObject *,const wxString&,const wxString&))

            // Auto generated MACRO code for 'UpdateWindowUI':
            // =================================
            BIND_F2MF_OVERLOAD(UpdateWindowUI, 0,
            void, (wxToolBar*))
            BIND_F2MF_OVERLOAD(UpdateWindowUI, 1,
            void, (wxToolBar*,long))

            BIND_MF_OVERLOAD(wxToolBar, AddTool,
                wxToolBarToolBase*, (wxToolBarToolBase *))
            BIND_MF_OVERLOAD(wxToolBar, InsertTool,
                wxToolBarToolBase*, (size_t, wxToolBarToolBase *))
            BIND_MF(wxToolBar, AddControl)
            BIND_MF(wxToolBar, InsertControl)
            BIND_MF(wxToolBar, FindControl)
            BIND_MF(wxToolBar, AddSeparator)
            BIND_MF(wxToolBar, InsertSeparator)
            BIND_MF(wxToolBar, RemoveTool)
            BIND_MF(wxToolBar, DeleteToolByPos)
            BIND_MF(wxToolBar, DeleteTool)
            BIND_MF(wxToolBar, ClearTools)
            BIND_MF(wxToolBar, Realize)
            BIND_MF(wxToolBar, EnableTool)
            BIND_MF(wxToolBar, ToggleTool)
            BIND_MF(wxToolBar, SetToggle)
            BIND_MF(wxToolBar, GetToolClientData)
            BIND_MF(wxToolBar, SetToolClientData)
            BIND_MF(wxToolBar, GetToolPos)
            BIND_MF(wxToolBar, GetToolState)
            BIND_MF(wxToolBar, GetToolEnabled)
            BIND_MF(wxToolBar, SetToolShortHelp)
            BIND_MF(wxToolBar, GetToolShortHelp)
            BIND_MF(wxToolBar, SetToolLongHelp)
            BIND_MF(wxToolBar, GetToolLongHelp)
            BIND_MF_OVERLOAD(wxToolBar, SetMargins,
                void, (const wxSize&))
            BIND_MF_OVERLOAD(wxToolBar, SetMargins,
                void, (int, int))
            BIND_MF(wxToolBar, SetToolPacking)
            BIND_MF(wxToolBar, SetToolSeparation)
            BIND_MF(wxToolBar, GetToolMargins)
            BIND_MF(wxToolBar, GetToolPacking)
            BIND_MF(wxToolBar, GetToolSeparation)
            BIND_MF(wxToolBar, SetRows)
            BIND_MF(wxToolBar, SetMaxRowsCols)
            BIND_MF(wxToolBar, GetMaxRows)
            BIND_MF(wxToolBar, GetMaxCols)
            BIND_MF(wxToolBar, SetToolBitmapSize)
            BIND_MF(wxToolBar, GetToolBitmapSize)
            BIND_MF(wxToolBar, GetToolSize)
            BIND_MF(wxToolBar, FindToolForPosition)
            BIND_MF(wxToolBar, FindById)
            BIND_MF(wxToolBar, IsVertical)
            BIND_MF(wxToolBar, OnLeftClick)
            BIND_MF(wxToolBar, OnRightClick)
            BIND_MF(wxToolBar, OnMouseEnter)
            BIND_MF(wxToolBar, GetMargins)
            BIND_MF(wxToolBar, GetToolsCount)
            BIND_MF(wxToolBar, AcceptsFocus)

        END_BIND_CLASS(wxToolBar)
    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
        // enum wxToolBarToolStyle
        BIND_ENUM(wxTOOL_STYLE_BUTTON)
        BIND_ENUM(wxTOOL_STYLE_SEPARATOR)
        BIND_ENUM(wxTOOL_STYLE_CONTROL)

        // bind pointer:  (const wxChar wxToolBarNameStr[])
        BIND_TABLE_VALUE(wxToolBarNameStr, &wxToolBarNameStr[0])
    END_LUA_TABLE(wx)
    return 0;
}