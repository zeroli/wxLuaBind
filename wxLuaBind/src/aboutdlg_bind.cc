#include <precompile.h>

#include <wx/aboutdlg.h>

namespace
{
    // Auto generated CPP code for 'SetWebSite'
    // =================================
    void SetWebSite1(wxAboutDialogInfo* self, const wxString& url)
    {
        return self->SetWebSite(url);
    }
    void SetWebSite2(wxAboutDialogInfo* self, const wxString& url, const wxString& desc)
    {
        return self->SetWebSite(url,desc);
    }
}  // namespace

REGISTER_WXLUA_BIND(aboutdlg)
{
    BEGIN_BIND_MODULE(wx)
        // wxAboutDialogInfo binding
        BEGIN_BIND_CLASS(wxAboutDialogInfo)
        // Auto generated MACRO code for ctor of 'wxAboutDialogInfo':
        // =================================
        BIND_CTOR()
        BIND_MF(wxAboutDialogInfo, SetName)
        BIND_MF(wxAboutDialogInfo, GetName)
        BIND_MF(wxAboutDialogInfo, SetVersion)
        BIND_MF(wxAboutDialogInfo, HasVersion)
        BIND_MF(wxAboutDialogInfo, GetVersion)
        BIND_MF(wxAboutDialogInfo, SetDescription)
        BIND_MF(wxAboutDialogInfo, HasDescription)
        BIND_MF(wxAboutDialogInfo, GetDescription)
        BIND_MF(wxAboutDialogInfo, SetCopyright)
        BIND_MF(wxAboutDialogInfo, HasCopyright)
        BIND_MF(wxAboutDialogInfo, GetCopyright)
        BIND_MF(wxAboutDialogInfo, SetLicence)
        BIND_MF(wxAboutDialogInfo, SetLicense)
        BIND_MF(wxAboutDialogInfo, HasLicence)
        BIND_MF(wxAboutDialogInfo, GetLicence)
        BIND_MF(wxAboutDialogInfo, SetIcon)
        BIND_MF(wxAboutDialogInfo, HasIcon)
        BIND_MF(wxAboutDialogInfo, GetIcon)
        // Auto generated MACRO code for 'SetWebSite':
        // =================================
        BIND_F2MF_OVERLOAD(SetWebSite, 1,
        void, (wxAboutDialogInfo*, const wxString&))
        BIND_F2MF_OVERLOAD(SetWebSite, 2,
        void, (wxAboutDialogInfo*, const wxString&, const wxString&))
        BIND_MF(wxAboutDialogInfo, HasWebSite)
        BIND_MF(wxAboutDialogInfo, GetWebSiteURL)
        BIND_MF(wxAboutDialogInfo, GetWebSiteDescription)
        BIND_MF(wxAboutDialogInfo, SetDevelopers)
        BIND_MF(wxAboutDialogInfo, AddDeveloper)
        BIND_MF(wxAboutDialogInfo, HasDevelopers)
        BIND_MF(wxAboutDialogInfo, GetDevelopers)
        BIND_MF(wxAboutDialogInfo, SetDocWriters)
        BIND_MF(wxAboutDialogInfo, AddDocWriter)
        BIND_MF(wxAboutDialogInfo, HasDocWriters)
        BIND_MF(wxAboutDialogInfo, GetDocWriters)
        BIND_MF(wxAboutDialogInfo, SetArtists)
        BIND_MF(wxAboutDialogInfo, AddArtist)
        BIND_MF(wxAboutDialogInfo, HasArtists)
        BIND_MF(wxAboutDialogInfo, GetArtists)
        BIND_MF(wxAboutDialogInfo, SetTranslators)
        BIND_MF(wxAboutDialogInfo, AddTranslator)
        BIND_MF(wxAboutDialogInfo, HasTranslators)
        BIND_MF(wxAboutDialogInfo, GetTranslators)
        BIND_MF(wxAboutDialogInfo, IsSimple)
        BIND_MF(wxAboutDialogInfo, GetDescriptionAndCredits)
        END_BIND_CLASS(wxAboutDialogInfo)

    END_BIND_MODULE(wx)
    return 0;
}