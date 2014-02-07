#include <precompile.h>
// namespace for class wxBitmapHandler
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create5(wxBitmapHandler* self, wxBitmap * bitmap, const void* data, long flags, int width, int height)
    {
        return self->Create(bitmap,data,flags,width,height);
    }
    bool Create6(wxBitmapHandler* self, wxBitmap * bitmap, const void* data, long flags, int width, int height, int depth)
    {
        return self->Create(bitmap,data,flags,width,height,depth);
    }

    // Auto generated CPP code for 'SaveFile'
    // =================================
    bool SaveFile3(wxBitmapHandler* self, wxBitmap * bitmap, const wxString& name, int type)
    {
        return self->SaveFile(bitmap,name,type);
    }
    bool SaveFile4(wxBitmapHandler* self, wxBitmap * bitmap, const wxString& name, int type, const wxPalette * palette)
    {
        return self->SaveFile(bitmap,name,type,palette);
    }
}  // namespace for wxBitmapHandler

// namespace for class wxBitmap
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxBitmap* self, int width, int height)
    {
        return self->Create(width,height);
    }
    bool Create3(wxBitmap* self, int width, int height, int depth)
    {
        return self->Create(width,height,depth);
    }

    // Auto generated CPP code for 'Create'
    // =================================
    bool Create4(wxBitmap* self, const void* data, long type, int width, int height)
    {
        return self->Create(data,type,width,height);
    }
    bool Create5(wxBitmap* self, const void* data, long type, int width, int height, int depth)
    {
        return self->Create(data,type,width,height,depth);
    }

    // Auto generated CPP code for 'LoadFile'
    // =================================
    bool LoadFile1(wxBitmap* self, const wxString& name)
    {
        return self->LoadFile(name);
    }
    bool LoadFile2(wxBitmap* self, const wxString& name, long type)
    {
        return self->LoadFile(name,type);
    }

    // Auto generated CPP code for 'SaveFile'
    // =================================
    bool SaveFile2(wxBitmap* self, const wxString& name, int type)
    {
        return self->SaveFile(name,type);
    }
    bool SaveFile3(wxBitmap* self, const wxString& name, int type, const wxPalette * cmap)
    {
        return self->SaveFile(name,type,cmap);
    }
}  // namespace for wxBitmap

REGISTER_WXLUA_BIND(bitmap)
{
    BEGIN_BIND_MODULE(wx)
        // Bind class wxBitmapHandler
        BEGIN_BIND_CLASS_OBJECT(wxBitmapHandler)
        // Auto generated MACRO code for ctor of 'wxBitmapHandler':
        // =================================
        BIND_CTOR()
        BIND_CTOR(const wxString&, const wxString&, long)

        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxBitmapHandler*, wxBitmap *, const void*, long, int, int))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxBitmapHandler*, wxBitmap *, const void*, long, int, int, int))
        BIND_MF(wxBitmapHandler, LoadFile)
        // Auto generated MACRO code for 'SaveFile':
        // =================================
        BIND_F2MF_OVERLOAD(SaveFile, 3,
        bool, (wxBitmapHandler*, wxBitmap *, const wxString&, int))
        BIND_F2MF_OVERLOAD(SaveFile, 4,
        bool, (wxBitmapHandler*, wxBitmap *, const wxString&, int, const wxPalette *))
        BIND_MF(wxBitmapHandler, SetName)
        BIND_MF(wxBitmapHandler, SetExtension)
        BIND_MF(wxBitmapHandler, SetType)
        BIND_MF(wxBitmapHandler, GetName)
        BIND_MF(wxBitmapHandler, GetExtension)
        BIND_MF(wxBitmapHandler, GetType)
        END_BIND_CLASS(wxBitmapHandler)

        // Bind class wxBitmap
        BEGIN_BIND_CLASS_GDIOBJECT(wxBitmap)
        // Auto generated MACRO code for ctor of 'wxBitmap':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxBitmap':
        // =================================
        BIND_CTOR(const char*, int, int)
        BIND_CTOR(const char*, int, int, int)
        // Auto generated MACRO code for ctor of 'wxBitmap':
        // =================================
        BIND_CTOR(const char* const*)
        // Auto generated MACRO code for ctor of 'wxBitmap':
        // =================================
        BIND_CTOR(char**)
        // Auto generated MACRO code for ctor of 'wxBitmap':
        // =================================
        BIND_CTOR(const wxString&)
        BIND_CTOR(const wxString&, wxBitmapType)
        // Auto generated MACRO code for ctor of 'wxBitmap':
        // =================================
        BIND_CTOR(const void*, long, int, int)
        BIND_CTOR(const void*, long, int, int, int)
        // Auto generated MACRO code for ctor of 'wxBitmap':
        // =================================
        BIND_CTOR(int, int)
        BIND_CTOR(int, int, int)
        // Auto generated MACRO code for ctor of 'wxBitmap':
        // =================================
        BIND_CTOR(int, int, const wxDC&)
        // Auto generated MACRO code for ctor of 'wxBitmap':
        // =================================
#if wxUSE_IMAGE
        BIND_CTOR(const wxImage&)
        BIND_CTOR(const wxImage&, int)
        // Auto generated MACRO code for ctor of 'wxBitmap':
        // =================================
        BIND_CTOR(const wxImage&, const wxDC&)
#endif
        // Auto generated MACRO code for ctor of 'wxBitmap':
        // =================================
        BIND_CTOR(const wxIcon&)
        BIND_MF_OVERLOAD_NAME(copy, wxBitmap, operator =,
        wxBitmap&, (const wxIcon&))
        BIND_MF_OVERLOAD_NAME(copy, wxBitmap, operator =,
        wxBitmap&, (const wxCursor&))
#if wxUSE_IMAGE
        BIND_MF(wxBitmap, ConvertToImage)
#endif
        BIND_MF(wxBitmap, GetSubBitmap)
        BIND_MF(wxBitmap, GetSubBitmapOfHDC)
        BIND_MF(wxBitmap, CopyFromIcon)
        BIND_MF(wxBitmap, CopyFromCursor)
#if wxUSE_WXDIB
        BIND_MF(wxBitmap, CopyFromDIB)
#endif
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxBitmap*, int, int))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxBitmap*, int, int, int))
        BIND_MF_OVERLOAD(wxBitmap, Create,
        bool, (int, int, const wxDC&))

        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxBitmap*, const void*, long, int, int))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxBitmap*, const void*, long, int, int, int))
        // Auto generated MACRO code for 'LoadFile':
        // =================================
        BIND_F2MF_OVERLOAD(LoadFile, 1,
        bool, (wxBitmap*, const wxString&))
        BIND_F2MF_OVERLOAD(LoadFile, 2,
        bool, (wxBitmap*, const wxString&, long))
        // Auto generated MACRO code for 'SaveFile':
        // =================================
        BIND_F2MF_OVERLOAD(SaveFile, 2,
        bool, (wxBitmap*, const wxString&, int))
        BIND_F2MF_OVERLOAD(SaveFile, 3,
        bool, (wxBitmap*, const wxString&, int, const wxPalette *))
#if 0 // FIXME: For different platform, need define different class
        BIND_MF(wxBitmap, GetBitmapData)
#endif
        BIND_MF(wxBitmap, GetRawData)
        BIND_MF(wxBitmap, UngetRawData)
#if wxUSE_PALETTE
        BIND_MF(wxBitmap, GetPalette)
        BIND_MF(wxBitmap, SetPalette)
#endif
        BIND_MF(wxBitmap, GetMask)
        BIND_MF(wxBitmap, GetMaskBitmap)
        BIND_MF(wxBitmap, SetMask)

        BIND_MF(wxBitmap, GetHeight)
        BIND_MF(wxBitmap, GetWidth)
        BIND_MF(wxBitmap, GetDepth)
        BIND_MF(wxBitmap, SetHeight)
        BIND_MF(wxBitmap, SetWidth)
        BIND_MF(wxBitmap, SetDepth)

        BEGIN_BIND_SCOPE()
        BIND_SMF(wxBitmap, GetHandlers)
        BIND_SMF(wxBitmap, AddHandler)
        BIND_SMF(wxBitmap, InsertHandler)
        BIND_SMF(wxBitmap, RemoveHandler)
#if defined(__WXMSW__)
        BIND_SMF_OVERLOAD(wxBitmap, FindHandler,
        wxGDIImageHandler*, (const wxString&))
        BIND_SMF_OVERLOAD(wxBitmap, FindHandler,
        wxGDIImageHandler*, (const wxString&, long))
        BIND_SMF_OVERLOAD(wxBitmap, FindHandler,
        wxGDIImageHandler*, (long))
#else // defined(__WXGTK20__) || defined (__WXGTK__)
        BIND_SMF_OVERLOAD(wxBitmap, FindHandler,
        wxImageHandler*, (const wxString&))
        BIND_SMF_OVERLOAD(wxBitmap, FindHandler,
        wxImageHandler*, (const wxString&, wxBitmapType))
        BIND_SMF_OVERLOAD(wxBitmap, FindHandler,
        wxImageHandler*, (wxBitmapType))
#endif

        BIND_SMF(wxBitmap, CleanUpHandlers)
        END_BIND_SCOPE()

        END_BIND_CLASS(wxBitmap)
        // Bind class wxMask
        BEGIN_BIND_CLASS(wxMask)
        // Auto generated MACRO code for ctor of 'wxMask':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxMask':
        // =================================
        BIND_CTOR(const wxBitmap&, const wxColour&)
        // Auto generated MACRO code for ctor of 'wxMask':
        // =================================
        BIND_CTOR(const wxBitmap&, int)
        // Auto generated MACRO code for ctor of 'wxMask':
        // =================================
        BIND_CTOR(const wxBitmap&)
        BIND_MF_OVERLOAD(wxMask, Create,
        bool, (const wxBitmap&, const wxColour&))
        BIND_MF_OVERLOAD(wxMask, Create,
        bool, (const wxBitmap&, int))
        BIND_MF_OVERLOAD(wxMask, Create,
        bool, (const wxBitmap&))
        END_BIND_CLASS(wxMask)

    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
        BIND_VARIABLE(wxNullBitmap)
    END_LUA_TABLE(wx)
    return 0;
}