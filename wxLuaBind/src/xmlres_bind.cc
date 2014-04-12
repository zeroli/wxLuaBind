#include <precompile.h>

#include <wx/xrc/xmlres.h>

// namespace for class wxXmlResource
namespace
{
    // Auto generated CPP code for 'AttachUnknownControl'
    // =================================
    bool AttachUnknownControl2(wxXmlResource* self, const wxString& name, wxWindow * control)
    {
        return self->AttachUnknownControl(name,control);
    }
    bool AttachUnknownControl3(wxXmlResource* self, const wxString& name, wxWindow * control, wxWindow * parent)
    {
        return self->AttachUnknownControl(name,control,parent);
    }

    // Auto generated CPP code for 'XRCID'
    // =================================
    int XRCID1(const wxChar * str_id)
    {
        return wxXmlResource::GetXRCID(str_id);
    }
    int XRCID2(const wxChar * str_id, int value_if_not_found)
    {
        return wxXmlResource::GetXRCID(str_id,value_if_not_found);
    }

    // function supported for macro XRCCTRL
    wxWindow* myXRCCTRL(wxWindow* window, const wxChar* str_id)
    {
        return window->FindWindow(XRCID1(str_id));
    }
}  // namespace for wxXmlResource

BEGIN_WXLUA_BINDFUNC(xmlres)
    BEGIN_LUA_TABLE(wx)
        // Bind enum wxXmlResourceFlags (totally 3)
        BIND_ENUM(wxXRC_USE_LOCALE)
        BIND_ENUM(wxXRC_NO_SUBCLASSING)
        BIND_ENUM(wxXRC_NO_RELOADING)
    END_LUA_TABLE(wx)

    BEGIN_BIND_MODULE(wx)
        //All macro code for wxluabind
        // Bind class wxXmlResource
        BEGIN_BIND_CLASS(wxXmlResource)
            // Auto generated MACRO code for ctor of 'wxXmlResource':
            // =================================
            BIND_CTOR(int)
            BIND_CTOR(int, const wxString&)
            // Auto generated MACRO code for ctor of 'wxXmlResource':
            // =================================
            BIND_CTOR(const wxString&)
            BIND_CTOR(const wxString&, int)
            BIND_CTOR(const wxString&, int, const wxString&)
            BIND_MF(wxXmlResource, Load)
            BIND_MF(wxXmlResource, Unload)
            BIND_MF(wxXmlResource, InitAllHandlers)
            BIND_MF(wxXmlResource, AddHandler)
            BIND_MF(wxXmlResource, InsertHandler)
            BIND_MF(wxXmlResource, ClearHandlers)
            BEGIN_BIND_SCOPE()
            BIND_SMF(wxXmlResource, AddSubclassFactory)
            END_BIND_SCOPE()
            BIND_MF(wxXmlResource, LoadMenu)
            BIND_MF_OVERLOAD(wxXmlResource, LoadMenuBar,
                         wxMenuBar *, (wxWindow *, const wxString&))
             BIND_MF_OVERLOAD(wxXmlResource, LoadMenuBar,
             wxMenuBar *, (const wxString&))
             BIND_MF(wxXmlResource, LoadToolBar)
             BIND_MF_OVERLOAD(wxXmlResource, LoadDialog,
             wxDialog *, (wxWindow *, const wxString&))
             BIND_MF_OVERLOAD(wxXmlResource, LoadDialog,
             bool, (wxDialog *, wxWindow *, const wxString&))
             BIND_MF_OVERLOAD(wxXmlResource, LoadPanel,
             wxPanel *, (wxWindow *, const wxString&))
             BIND_MF_OVERLOAD(wxXmlResource, LoadPanel,
             bool, (wxPanel *, wxWindow *, const wxString&))
             BIND_MF_OVERLOAD(wxXmlResource, LoadFrame,
             wxFrame *, (wxWindow*, const wxString&))
             BIND_MF_OVERLOAD(wxXmlResource, LoadFrame,
             bool, (wxFrame*, wxWindow *, const wxString&))
             BIND_MF_OVERLOAD(wxXmlResource, LoadObject,
             wxObject *, (wxWindow *, const wxString&, const wxString&))
             BIND_MF_OVERLOAD(wxXmlResource, LoadObject,
             bool, (wxObject *, wxWindow *, const wxString&, const wxString&))
             BIND_MF(wxXmlResource, LoadBitmap)
             BIND_MF(wxXmlResource, LoadIcon)
             // Auto generated MACRO code for 'AttachUnknownControl':
             // =================================
             BIND_F2MF_OVERLOAD(AttachUnknownControl, 2,
             bool, (wxXmlResource*, const wxString&, wxWindow *))
             BIND_F2MF_OVERLOAD(AttachUnknownControl, 3,
             bool, (wxXmlResource*, const wxString&, wxWindow *, wxWindow *))
             // Auto generated MACRO code for 'XRCID':
             // =================================
             BEGIN_BIND_SCOPE()
             BIND_F2SMF_OVERLOAD(XRCID,1,
             int, (const wxChar *))
             BIND_F2SMF_OVERLOAD(XRCID,2,
             int, (const wxChar *, int))
             END_BIND_SCOPE()

             BIND_MF(wxXmlResource, GetVersion)
             BIND_MF(wxXmlResource, CompareVersion)
             BEGIN_BIND_SCOPE()
             BIND_SMF(wxXmlResource, Get)
             END_BIND_SCOPE()
             BEGIN_BIND_SCOPE()
             BIND_SMF(wxXmlResource, Set)
             END_BIND_SCOPE()
             BIND_MF(wxXmlResource, GetFlags)
             BIND_MF(wxXmlResource, SetFlags)
             BIND_MF(wxXmlResource, GetDomain)
             BIND_MF(wxXmlResource, SetDomain)
         END_BIND_CLASS(wxXmlResource)

         BIND_FUNC_NAME(XRCCTRL, myXRCCTRL)
     END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(xmlres)
