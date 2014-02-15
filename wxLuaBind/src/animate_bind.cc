#include <precompile.h>

#include <wx/animate.h>

namespace
{
    // Auto generated CPP code for 'LoadFile'
    // =================================
    bool LoadFile1(wxAnimation* self, const wxString& filename)
    {
        return self->LoadFile(filename);
    }
    bool LoadFile2(wxAnimation* self, const wxString& filename, wxAnimationType type)
    {
        return self->LoadFile(filename,type);
    }

    // Auto generated CPP code for 'Load'
    // =================================
    bool Load1(wxAnimation* self, wxInputStream& stream)
    {
        return self->Load(stream);
    }
    bool Load2(wxAnimation* self, wxInputStream& stream, wxAnimationType type)
    {
        return self->Load(stream,type);
    }
}  // namespace

namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxAnimationCtrl* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxAnimationCtrl* self, wxWindow * parent, wxWindowID id, const wxAnimation& anim)
    {
        return self->Create(parent,id,anim);
    }
    bool Create4(wxAnimationCtrl* self, wxWindow * parent, wxWindowID id, const wxAnimation& anim, const wxPoint& pos)
    {
        return self->Create(parent,id,anim,pos);
    }
    bool Create5(wxAnimationCtrl* self, wxWindow * parent, wxWindowID id, const wxAnimation& anim, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,anim,pos,size);
    }
    bool Create6(wxAnimationCtrl* self, wxWindow * parent, wxWindowID id, const wxAnimation& anim, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,anim,pos,size,style);
    }
    bool Create7(wxAnimationCtrl* self, wxWindow * parent, wxWindowID id, const wxAnimation& anim, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
    {
        return self->Create(parent,id,anim,pos,size,style,name);
    }

    // Auto generated CPP code for 'LoadFile'
    // =================================
    bool LoadFile1(wxAnimationCtrl* self, const wxString& filename)
    {
        return self->LoadFile(filename);
    }
    bool LoadFile2(wxAnimationCtrl* self, const wxString& filename, wxAnimationType type)
    {
        return self->LoadFile(filename,type);
    }

    // Auto generated CPP code for 'SetUseWindowBackgroundColour'
    // =================================
    void SetUseWindowBackgroundColour0(wxAnimationCtrl* self)
    {
        return self->SetUseWindowBackgroundColour();
    }
    void SetUseWindowBackgroundColour1(wxAnimationCtrl* self, bool useWinBackground)
    {
        return self->SetUseWindowBackgroundColour(useWinBackground);
    }
}  // namespace

REGISTER_WXLUA_BIND(animate)
    BEGIN_BIND_MODULE(wx)
        // Bind class wxAnimation
        BEGIN_BIND_CLASS_GDIOBJECT(wxAnimation)
        BIND_CTOR()

        BIND_MF(wxAnimation, IsOk)
        BIND_MF(wxAnimation, GetFrameCount)
        BIND_MF(wxAnimation, GetDelay)
        BIND_MF(wxAnimation, GetFrame)
        BIND_MF(wxAnimation, GetSize)
        // Auto generated MACRO code for 'LoadFile':
        // =================================
        BIND_F2MF_OVERLOAD(LoadFile, 1,
        bool, (wxAnimation*, const wxString&))
        BIND_F2MF_OVERLOAD(LoadFile, 2,
        bool, (wxAnimation*, const wxString&, wxAnimationType))
        // Auto generated MACRO code for 'Load':
        // =================================
        BIND_F2MF_OVERLOAD(Load, 1,
        bool, (wxAnimation*, wxInputStream&))
        BIND_F2MF_OVERLOAD(Load, 2,
        bool, (wxAnimation*, wxInputStream&, wxAnimationType))
        BIND_MF(wxAnimation, GetFramePosition)
        BIND_MF(wxAnimation, GetFrameSize)
        BIND_MF(wxAnimation, GetDisposalMethod)
        BIND_MF(wxAnimation, GetTransparentColour)
        BIND_MF(wxAnimation, GetBackgroundColour)

        BEGIN_BIND_SCOPE()
        BIND_SMF(wxAnimation, GetHandlers)
        BIND_SMF(wxAnimation, AddHandler)
        BIND_SMF(wxAnimation, InsertHandler)
        BIND_SMF(wxAnimation, FindHandler)
        BIND_SMF(wxAnimation, CleanUpHandlers)
        BIND_SMF(wxAnimation, InitStandardHandlers)
        END_BIND_SCOPE()

        END_BIND_CLASS(wxAnimation)

        // Bind class wxAnimationCtrl
        BEGIN_BIND_CLASS_CONTROL(wxAnimationCtrl)
        // Auto generated MACRO code for ctor of 'wxAnimationCtrl':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxAnimationCtrl':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID)
        BIND_CTOR(wxWindow *, wxWindowID, const wxAnimation&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxAnimation&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxAnimation&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxAnimation&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxAnimation&, const wxPoint&, const wxSize&, long, const wxString&)
        BIND_MF(wxAnimationCtrl, Init)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxAnimationCtrl*, wxWindow *, wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxAnimationCtrl*, wxWindow *, wxWindowID, const wxAnimation&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxAnimationCtrl*, wxWindow *, wxWindowID, const wxAnimation&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxAnimationCtrl*, wxWindow *, wxWindowID, const wxAnimation&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxAnimationCtrl*, wxWindow *, wxWindowID, const wxAnimation&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxAnimationCtrl*, wxWindow *, wxWindowID, const wxAnimation&, const wxPoint&, const wxSize&, long, const wxString&))
        // Auto generated MACRO code for 'LoadFile':
        // =================================
        BIND_F2MF_OVERLOAD(LoadFile, 1,
        bool, (wxAnimationCtrl*, const wxString&))
        BIND_F2MF_OVERLOAD(LoadFile, 2,
        bool, (wxAnimationCtrl*, const wxString&, wxAnimationType))
        BIND_MF(wxAnimationCtrl, Stop)
        BIND_MF_OVERLOAD(wxAnimationCtrl, Play,
        bool, ())
        BIND_MF(wxAnimationCtrl, IsPlaying)
        BIND_MF(wxAnimationCtrl, SetAnimation)
        BIND_MF(wxAnimationCtrl, GetAnimation)
        BIND_MF(wxAnimationCtrl, SetInactiveBitmap)
        BIND_MF(wxAnimationCtrl, SetBackgroundColour)
        BIND_MF(wxAnimationCtrl, OnPaint)
        BIND_MF(wxAnimationCtrl, OnTimer)
        BIND_MF(wxAnimationCtrl, OnSize)
        // Auto generated MACRO code for 'SetUseWindowBackgroundColour':
        // =================================
        BIND_F2MF_OVERLOAD(SetUseWindowBackgroundColour, 0,
        void, (wxAnimationCtrl*))
        BIND_F2MF_OVERLOAD(SetUseWindowBackgroundColour, 1,
        void, (wxAnimationCtrl*, bool))
        BIND_MF(wxAnimationCtrl, IsUsingWindowBackgroundColour)
        BIND_MF_OVERLOAD(wxAnimationCtrl, Play,
        bool, (bool))
        BIND_MF(wxAnimationCtrl, DrawCurrentFrame)
        BIND_MF(wxAnimationCtrl, GetBackingStore)
        END_BIND_CLASS(wxAnimationCtrl)

    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
        BIND_MACRO(wxAC_NO_AUTORESIZE)
        BIND_MACRO(wxAC_DEFAULT_STYLE)

        BIND_VARIABLE(wxNullAnimation)
        BIND_TABLE_VALUE(wxAnimationCtrlNameStr, &wxAnimationCtrlNameStr[0])
    END_LUA_TABLE(wx)
END_REGISTER(animate)
