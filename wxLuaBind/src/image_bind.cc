#include <precompile.h>

#include <wx/image.h>

// namespace for class wxImage
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxImage* self, int width, int height)
    {
        return self->Create(width,height);
    }
    bool Create3(wxImage* self, int width, int height, bool clear)
    {
        return self->Create(width,height,clear);
    }

    // Auto generated CPP code for 'Create'
    // =================================
    bool Create3(wxImage* self, int width, int height, unsigned char* data)
    {
        return self->Create(width,height,data);
    }
    bool Create4(wxImage* self, int width, int height, unsigned char* data, bool static_data)
    {
        return self->Create(width,height,data,static_data);
    }

    // Auto generated CPP code for 'Create'
    // =================================
    bool Create4(wxImage* self, int width, int height, unsigned char* data, unsigned char* alpha)
    {
        return self->Create(width,height,data,alpha);
    }
    bool Create5(wxImage* self, int width, int height, unsigned char* data, unsigned char* alpha, bool static_data)
    {
        return self->Create(width,height,data,alpha,static_data);
    }

    // Auto generated CPP code for 'Size'
    // =================================
    wxImage Size2(wxImage* self, const wxSize& size, const wxPoint& pos)
    {
        return self->Size(size,pos);
    }
    wxImage Size3(wxImage* self, const wxSize& size, const wxPoint& pos, int r)
    {
        return self->Size(size,pos,r);
    }
    wxImage Size4(wxImage* self, const wxSize& size, const wxPoint& pos, int r, int g)
    {
        return self->Size(size,pos,r,g);
    }
    wxImage Size5(wxImage* self, const wxSize& size, const wxPoint& pos, int r, int g, int b)
    {
        return self->Size(size,pos,r,g,b);
    }

    // Auto generated CPP code for 'Scale'
    // =================================
    wxImage Scale2(wxImage* self, int width, int height)
    {
        return self->Scale(width,height);
    }
    wxImage Scale3(wxImage* self, int width, int height, int quality)
    {
        return self->Scale(width,height,quality);
    }

    // Auto generated CPP code for 'Rescale'
    // =================================
    wxImage& Rescale2(wxImage* self, int width, int height)
    {
        return self->Rescale(width,height);
    }
    wxImage& Rescale3(wxImage* self, int width, int height, int quality)
    {
        return self->Rescale(width,height,quality);
    }

    // Auto generated CPP code for 'Resize'
    // =================================
    wxImage& Resize2(wxImage* self, const wxSize& size, const wxPoint& pos)
    {
        return self->Resize(size,pos);
    }
    wxImage& Resize3(wxImage* self, const wxSize& size, const wxPoint& pos, int r)
    {
        return self->Resize(size,pos,r);
    }
    wxImage& Resize4(wxImage* self, const wxSize& size, const wxPoint& pos, int r, int g)
    {
        return self->Resize(size,pos,r,g);
    }
    wxImage& Resize5(wxImage* self, const wxSize& size, const wxPoint& pos, int r, int g, int b)
    {
        return self->Resize(size,pos,r,g,b);
    }

    // Auto generated CPP code for 'Rotate'
    // =================================
    wxImage Rotate2(wxImage* self, double angle, const wxPoint & centre_of_rotation)
    {
        return self->Rotate(angle,centre_of_rotation);
    }
    wxImage Rotate3(wxImage* self, double angle, const wxPoint & centre_of_rotation, bool interpolating)
    {
        return self->Rotate(angle,centre_of_rotation,interpolating);
    }
    wxImage Rotate4(wxImage* self, double angle, const wxPoint & centre_of_rotation, bool interpolating, wxPoint * offset_after_rotation)
    {
        return self->Rotate(angle,centre_of_rotation,interpolating,offset_after_rotation);
    }

    // Auto generated CPP code for 'Rotate90'
    // =================================
    wxImage Rotate900(wxImage* self)
    {
        return self->Rotate90();
    }
    wxImage Rotate901(wxImage* self, bool clockwise)
    {
        return self->Rotate90(clockwise);
    }

    // Auto generated CPP code for 'Mirror'
    // =================================
    wxImage Mirror0(wxImage* self)
    {
        return self->Mirror();
    }
    wxImage Mirror1(wxImage* self, bool horizontally)
    {
        return self->Mirror(horizontally);
    }

    // Auto generated CPP code for 'ConvertToGreyscale'
    // =================================
    wxImage ConvertToGreyscale0(wxImage* self)
    {
        return self->ConvertToGreyscale();
    }
    wxImage ConvertToGreyscale1(wxImage* self, double lr)
    {
        return self->ConvertToGreyscale(lr);
    }
    wxImage ConvertToGreyscale2(wxImage* self, double lr, double lg)
    {
        return self->ConvertToGreyscale(lr,lg);
    }
    wxImage ConvertToGreyscale3(wxImage* self, double lr, double lg, double lb)
    {
        return self->ConvertToGreyscale(lr,lg,lb);
    }

    // Auto generated CPP code for 'FindFirstUnusedColour'
    // =================================
    bool FindFirstUnusedColour3(wxImage* self, unsigned char * r, unsigned char * g, unsigned char * b)
    {
        return self->FindFirstUnusedColour(r,g,b);
    }
    bool FindFirstUnusedColour4(wxImage* self, unsigned char * r, unsigned char * g, unsigned char * b, unsigned char startR)
    {
        return self->FindFirstUnusedColour(r,g,b,startR);
    }
    bool FindFirstUnusedColour5(wxImage* self, unsigned char * r, unsigned char * g, unsigned char * b, unsigned char startR, unsigned char startG)
    {
        return self->FindFirstUnusedColour(r,g,b,startR,startG);
    }
    bool FindFirstUnusedColour6(wxImage* self, unsigned char * r, unsigned char * g, unsigned char * b, unsigned char startR, unsigned char startG, unsigned char startB)
    {
        return self->FindFirstUnusedColour(r,g,b,startR,startG,startB);
    }

    // Auto generated CPP code for 'ConvertAlphaToMask'
    // =================================
    bool ConvertAlphaToMask0(wxImage* self)
    {
        return self->ConvertAlphaToMask();
    }
    bool ConvertAlphaToMask1(wxImage* self, unsigned char threshold)
    {
        return self->ConvertAlphaToMask(threshold);
    }

    // Auto generated CPP code for 'GetImageCount'
    // =================================
    int GetImageCount1(const wxString& name)
    {
        return wxImage::GetImageCount(name);
    }
    int GetImageCount2(const wxString& name, long type)
    {
        return wxImage::GetImageCount(name,type);
    }

    // Auto generated CPP code for 'LoadFile'
    // =================================
    bool LoadFile1(wxImage* self, const wxString& name)
    {
        return self->LoadFile(name);
    }
    bool LoadFile2(wxImage* self, const wxString& name, long type)
    {
        return self->LoadFile(name,type);
    }
    bool LoadFile3(wxImage* self, const wxString& name, long type, int index)
    {
        return self->LoadFile(name,type,index);
    }

    // Auto generated CPP code for 'LoadFile'
    // =================================
    bool LoadFile2(wxImage* self, const wxString& name, const wxString& mimetype)
    {
        return self->LoadFile(name,mimetype);
    }
    bool LoadFile3(wxImage* self, const wxString& name, const wxString& mimetype, int index)
    {
        return self->LoadFile(name,mimetype,index);
    }

    // Auto generated CPP code for 'GetImageCount'
    // =================================
    int GetImageCount1(wxInputStream& stream)
    {
        return wxImage::GetImageCount(stream);
    }
    int GetImageCount2(wxInputStream& stream, long type)
    {
        return wxImage::GetImageCount(stream,type);
    }

    // Auto generated CPP code for 'LoadFile'
    // =================================
    bool LoadFile1(wxImage* self, wxInputStream& stream)
    {
        return self->LoadFile(stream);
    }
    bool LoadFile2(wxImage* self, wxInputStream& stream, long type)
    {
        return self->LoadFile(stream,type);
    }
    bool LoadFile3(wxImage* self, wxInputStream& stream, long type, int index)
    {
        return self->LoadFile(stream,type,index);
    }

    // Auto generated CPP code for 'LoadFile'
    // =================================
    bool LoadFile2(wxImage* self, wxInputStream& stream, const wxString& mimetype)
    {
        return self->LoadFile(stream,mimetype);
    }
    bool LoadFile3(wxImage* self, wxInputStream& stream, const wxString& mimetype, int index)
    {
        return self->LoadFile(stream,mimetype,index);
    }

    // Auto generated CPP code for 'SetData'
    // =================================
    void SetData1(wxImage* self, unsigned char * data)
    {
        return self->SetData(data);
    }
    void SetData2(wxImage* self, unsigned char * data, bool static_data)
    {
        return self->SetData(data,static_data);
    }

    // Auto generated CPP code for 'SetData'
    // =================================
    void SetData3(wxImage* self, unsigned char * data, int new_width, int new_height)
    {
        return self->SetData(data,new_width,new_height);
    }
    void SetData4(wxImage* self, unsigned char * data, int new_width, int new_height, bool static_data)
    {
        return self->SetData(data,new_width,new_height,static_data);
    }

    // Auto generated CPP code for 'SetAlpha'
    // =================================
    void SetAlpha0(wxImage* self)
    {
        return self->SetAlpha();
    }
    void SetAlpha1(wxImage* self, unsigned char * alpha)
    {
        return self->SetAlpha(alpha);
    }
    void SetAlpha2(wxImage* self, unsigned char * alpha, bool static_data)
    {
        return self->SetAlpha(alpha,static_data);
    }

    // Auto generated CPP code for 'IsTransparent'
    // =================================
    bool IsTransparent2(wxImage* self, int x, int y)
    {
        return self->IsTransparent(x,y);
    }
    bool IsTransparent3(wxImage* self, int x, int y, unsigned char threshold)
    {
        return self->IsTransparent(x,y,threshold);
    }

    // Auto generated CPP code for 'SetMask'
    // =================================
    void SetMask0(wxImage* self)
    {
        return self->SetMask();
    }
    void SetMask1(wxImage* self, bool mask)
    {
        return self->SetMask(mask);
    }

    // Auto generated CPP code for 'CountColours'
    // =================================
    unsigned long CountColours0(wxImage* self)
    {
        return self->CountColours();
    }
    unsigned long CountColours1(wxImage* self, unsigned long stopafter)
    {
        return self->CountColours(stopafter);
    }
}  // namespace for wxImage

#if wxUSE_IMAGE

BEGIN_WXLUA_BINDFUNC(image)
    BEGIN_BIND_MODULE(wx)
        // Bind class wxImage
        BEGIN_BIND_CLASS_OBJECT(wxImage)
        BEGIN_BIND_SCOPE()
            BEGIN_BIND_CLASS_NAME(RGBValue, wxImage::RGBValue)

            END_BIND_CLASS(RGBValue)
            BEGIN_BIND_CLASS_NAME(HSVValue, wxImage::HSVValue)
            END_BIND_CLASS(HSVValue)
        END_BIND_SCOPE()
        // Auto generated MACRO code for ctor of 'wxImage':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxImage':
        // =================================
        BIND_CTOR(int, int)
        BIND_CTOR(int, int, bool)
        // Auto generated MACRO code for ctor of 'wxImage':
        // =================================
        BIND_CTOR(int, int, unsigned char*)
        BIND_CTOR(int, int, unsigned char*, bool)
        // Auto generated MACRO code for ctor of 'wxImage':
        // =================================
        BIND_CTOR(int, int, unsigned char*, unsigned char*)
        BIND_CTOR(int, int, unsigned char*, unsigned char*, bool)
        // Auto generated MACRO code for ctor of 'wxImage':
        // =================================
        BIND_CTOR(const wxString&)
        BIND_CTOR(const wxString&, long)
        BIND_CTOR(const wxString&, long, int)
        // Auto generated MACRO code for ctor of 'wxImage':
        // =================================
        BIND_CTOR(const wxString&, const wxString&)
        BIND_CTOR(const wxString&, const wxString&, int)

#if wxUSE_STREAMS
        // Auto generated MACRO code for ctor of 'wxImage':
        // =================================
        BIND_CTOR(const char* const*)
        // Auto generated MACRO code for ctor of 'wxImage':
        // =================================
        BIND_CTOR(wxInputStream&)
        BIND_CTOR(wxInputStream&, long)
        BIND_CTOR(wxInputStream&, long, int)
        // Auto generated MACRO code for ctor of 'wxImage':
        // =================================
        BIND_CTOR(wxInputStream&, const wxString&)
        BIND_CTOR(wxInputStream&, const wxString&, int)
#endif

        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxImage*, int, int))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxImage*, int, int, bool))
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxImage*, int, int, unsigned char*))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxImage*, int, int, unsigned char*, bool))
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxImage*, int, int, unsigned char*, unsigned char*))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxImage*, int, int, unsigned char*, unsigned char*, bool))
        BIND_MF_OVERLOAD(wxImage, Create,
        bool, (const char* const*))
#ifdef __BORLANDC__
        // Auto generated MACRO code for ctor of 'wxImage':
        // =================================
        BIND_CTOR(char**)
        BIND_MF_OVERLOAD(wxImage, Create,
        bool, (char**))
#endif
        BIND_MF(wxImage, Destroy)
        BIND_MF(wxImage, Copy)
        BIND_MF(wxImage, GetSubImage)
        // Auto generated MACRO code for 'Size':
        // =================================
        BIND_F2MF_OVERLOAD(Size, 2,
        wxImage, (wxImage*, const wxSize&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Size, 3,
        wxImage, (wxImage*, const wxSize&, const wxPoint&, int))
        BIND_F2MF_OVERLOAD(Size, 4,
        wxImage, (wxImage*, const wxSize&, const wxPoint&, int, int))
        BIND_F2MF_OVERLOAD(Size, 5,
        wxImage, (wxImage*, const wxSize&, const wxPoint&, int, int, int))
        BIND_MF(wxImage, Paste)
        // Auto generated MACRO code for 'Scale':
        // =================================
        BIND_F2MF_OVERLOAD(Scale, 2,
        wxImage, (wxImage*, int, int))
        BIND_F2MF_OVERLOAD(Scale, 3,
        wxImage, (wxImage*, int, int, int))
        BIND_MF(wxImage, ResampleBox)
        BIND_MF(wxImage, ResampleBicubic)
        BIND_MF(wxImage, Blur)
        BIND_MF(wxImage, BlurHorizontal)
        BIND_MF(wxImage, BlurVertical)
        BIND_MF(wxImage, ShrinkBy)
        // Auto generated MACRO code for 'Rescale':
        // =================================
        BIND_F2MF_OVERLOAD(Rescale, 2,
        wxImage&, (wxImage*, int, int))
        BIND_F2MF_OVERLOAD(Rescale, 3,
        wxImage&, (wxImage*, int, int, int))
        // Auto generated MACRO code for 'Resize':
        // =================================
        BIND_F2MF_OVERLOAD(Resize, 2,
        wxImage&, (wxImage*, const wxSize&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Resize, 3,
        wxImage&, (wxImage*, const wxSize&, const wxPoint&, int))
        BIND_F2MF_OVERLOAD(Resize, 4,
        wxImage&, (wxImage*, const wxSize&, const wxPoint&, int, int))
        BIND_F2MF_OVERLOAD(Resize, 5,
        wxImage&, (wxImage*, const wxSize&, const wxPoint&, int, int, int))
        // Auto generated MACRO code for 'Rotate':
        // =================================
        BIND_F2MF_OVERLOAD(Rotate, 2,
        wxImage, (wxImage*, double, const wxPoint &))
        BIND_F2MF_OVERLOAD(Rotate, 3,
        wxImage, (wxImage*, double, const wxPoint &, bool))
        BIND_F2MF_OVERLOAD(Rotate, 4,
        wxImage, (wxImage*, double, const wxPoint &, bool, wxPoint *))
        // Auto generated MACRO code for 'Rotate90':
        // =================================
        BIND_F2MF_OVERLOAD(Rotate90, 0,
        wxImage, (wxImage*))
        BIND_F2MF_OVERLOAD(Rotate90, 1,
        wxImage, (wxImage*, bool))
        // Auto generated MACRO code for 'Mirror':
        // =================================
        BIND_F2MF_OVERLOAD(Mirror, 0,
        wxImage, (wxImage*))
        BIND_F2MF_OVERLOAD(Mirror, 1,
        wxImage, (wxImage*, bool))
        BIND_MF(wxImage, Replace)
        // Auto generated MACRO code for 'ConvertToGreyscale':
        // =================================
        BIND_F2MF_OVERLOAD(ConvertToGreyscale, 0,
        wxImage, (wxImage*))
        BIND_F2MF_OVERLOAD(ConvertToGreyscale, 1,
        wxImage, (wxImage*, double))
        BIND_F2MF_OVERLOAD(ConvertToGreyscale, 2,
        wxImage, (wxImage*, double, double))
        BIND_F2MF_OVERLOAD(ConvertToGreyscale, 3,
        wxImage, (wxImage*, double, double, double))
        BIND_MF(wxImage, ConvertToMono)
        BIND_MF_OVERLOAD(wxImage, SetRGB,
        void, (int, int, unsigned char, unsigned char, unsigned char))
        BIND_MF_OVERLOAD(wxImage, SetRGB,
        void, (const wxRect&, unsigned char, unsigned char, unsigned char))
        BIND_MF(wxImage, GetRed)
        BIND_MF(wxImage, GetGreen)
        BIND_MF(wxImage, GetBlue)
        BIND_MF_OVERLOAD(wxImage, SetAlpha,
        void, (int, int, unsigned char))
        BIND_MF_OVERLOAD(wxImage, GetAlpha,
        unsigned char, (int, int) const)

        // Auto generated MACRO code for 'FindFirstUnusedColour':
        // =================================
        BIND_F2MF_OVERLOAD(FindFirstUnusedColour, 3,
        bool, (wxImage*, unsigned char *, unsigned char *, unsigned char *))
        BIND_F2MF_OVERLOAD(FindFirstUnusedColour, 4,
        bool, (wxImage*, unsigned char *, unsigned char *, unsigned char *, unsigned char))
        BIND_F2MF_OVERLOAD(FindFirstUnusedColour, 5,
        bool, (wxImage*, unsigned char *, unsigned char *, unsigned char *, unsigned char, unsigned char))
        BIND_F2MF_OVERLOAD(FindFirstUnusedColour, 6,
        bool, (wxImage*, unsigned char *, unsigned char *, unsigned char *, unsigned char, unsigned char, unsigned char))
        BIND_MF(wxImage, SetMaskFromImage)
        // Auto generated MACRO code for 'ConvertAlphaToMask':
        // =================================
        BIND_F2MF_OVERLOAD(ConvertAlphaToMask, 0,
        bool, (wxImage*))
        BIND_F2MF_OVERLOAD(ConvertAlphaToMask, 1,
        bool, (wxImage*, unsigned char))
        BIND_MF(wxImage, ConvertColourToAlpha)
        BEGIN_BIND_SCOPE()
        BIND_SMF_OVERLOAD(wxImage, CanRead,
        bool, (const wxString&))
        END_BIND_SCOPE()
        // Auto generated MACRO code for 'GetImageCount':
        // =================================
        BEGIN_BIND_SCOPE()
        BIND_F2SMF_OVERLOAD(GetImageCount,1,
        int, (const wxString&))
        BIND_F2SMF_OVERLOAD(GetImageCount,2,
        int, (const wxString&, long))
        END_BIND_SCOPE()

        // Auto generated MACRO code for 'LoadFile':
        // =================================
        BIND_F2MF_OVERLOAD(LoadFile, 1,
        bool, (wxImage*, const wxString&))
        BIND_F2MF_OVERLOAD(LoadFile, 2,
        bool, (wxImage*, const wxString&, long))
        BIND_F2MF_OVERLOAD(LoadFile, 3,
        bool, (wxImage*, const wxString&, long, int))
        // Auto generated MACRO code for 'LoadFile':
        // =================================
        BIND_F2MF_OVERLOAD(LoadFile, 2,
        bool, (wxImage*, const wxString&, const wxString&))
        BIND_F2MF_OVERLOAD(LoadFile, 3,
        bool, (wxImage*, const wxString&, const wxString&, int))

#if wxUSE_STREAMS
        BEGIN_BIND_SCOPE()
        BIND_SMF_OVERLOAD(wxImage, CanRead,
        bool, (wxInputStream&))
        END_BIND_SCOPE()
        // Auto generated MACRO code for 'GetImageCount':
        // =================================
        BEGIN_BIND_SCOPE()
        BIND_F2SMF_OVERLOAD(GetImageCount,1,
        int, (wxInputStream&))
        BIND_F2SMF_OVERLOAD(GetImageCount,2,
        int, (wxInputStream&, long))
        END_BIND_SCOPE()

        // Auto generated MACRO code for 'LoadFile':
        // =================================
        BIND_F2MF_OVERLOAD(LoadFile, 1,
        bool, (wxImage*, wxInputStream&))
        BIND_F2MF_OVERLOAD(LoadFile, 2,
        bool, (wxImage*, wxInputStream&, long))
        BIND_F2MF_OVERLOAD(LoadFile, 3,
        bool, (wxImage*, wxInputStream&, long, int))
        // Auto generated MACRO code for 'LoadFile':
        // =================================
        BIND_F2MF_OVERLOAD(LoadFile, 2,
        bool, (wxImage*, wxInputStream&, const wxString&))
        BIND_F2MF_OVERLOAD(LoadFile, 3,
        bool, (wxImage*, wxInputStream&, const wxString&, int))
#endif

        BIND_MF_OVERLOAD(wxImage, SaveFile,
        bool, (const wxString&) const)
        BIND_MF_OVERLOAD(wxImage, SaveFile,
        bool, (const wxString&, int) const)
        BIND_MF_OVERLOAD(wxImage, SaveFile,
        bool, (const wxString&, const wxString&) const)

#if wxUSE_STREAMS
        BIND_MF_OVERLOAD(wxImage, SaveFile,
        bool, (wxOutputStream&, int) const)
        BIND_MF_OVERLOAD(wxImage, SaveFile,
        bool, (wxOutputStream&, const wxString&) const)
#endif
        BIND_MF(wxImage, Ok)
        BIND_MF(wxImage, IsOk)
        BIND_MF(wxImage, GetWidth)
        BIND_MF(wxImage, GetHeight)
        BIND_MF(wxImage, GetData)
        // Auto generated MACRO code for 'SetData':
        // =================================
        BIND_F2MF_OVERLOAD(SetData, 1,
        void, (wxImage*, unsigned char *))
        BIND_F2MF_OVERLOAD(SetData, 2,
        void, (wxImage*, unsigned char *, bool))
        // Auto generated MACRO code for 'SetData':
        // =================================
        BIND_F2MF_OVERLOAD(SetData, 3,
        void, (wxImage*, unsigned char *, int, int))
        BIND_F2MF_OVERLOAD(SetData, 4,
        void, (wxImage*, unsigned char *, int, int, bool))
        BIND_MF_OVERLOAD(wxImage, GetAlpha,
        unsigned char*, () const)
        BIND_MF(wxImage, HasAlpha)
        // Auto generated MACRO code for 'SetAlpha':
        // =================================
        BIND_F2MF_OVERLOAD(SetAlpha, 0,
        void, (wxImage*))
        BIND_F2MF_OVERLOAD(SetAlpha, 1,
        void, (wxImage*, unsigned char *))
        BIND_F2MF_OVERLOAD(SetAlpha, 2,
        void, (wxImage*, unsigned char *, bool))
        BIND_MF(wxImage, InitAlpha)
        // Auto generated MACRO code for 'IsTransparent':
        // =================================
        BIND_F2MF_OVERLOAD(IsTransparent, 2,
        bool, (wxImage*, int, int))
        BIND_F2MF_OVERLOAD(IsTransparent, 3,
        bool, (wxImage*, int, int, unsigned char))
        BIND_MF(wxImage, SetMaskColour)
        BIND_MF(wxImage, GetOrFindMaskColour)
        BIND_MF(wxImage, GetMaskRed)
        BIND_MF(wxImage, GetMaskGreen)
        BIND_MF(wxImage, GetMaskBlue)
        // Auto generated MACRO code for 'SetMask':
        // =================================
        BIND_F2MF_OVERLOAD(SetMask, 0,
        void, (wxImage*))
        BIND_F2MF_OVERLOAD(SetMask, 1,
        void, (wxImage*, bool))
        BIND_MF(wxImage, HasMask)
#if wxUSE_PALETTE
        BIND_MF(wxImage, HasPalette)
        BIND_MF(wxImage, GetPalette)
        BIND_MF(wxImage, SetPalette)
#endif
        BIND_MF_OVERLOAD(wxImage, SetOption,
        void, (const wxString&, const wxString&))
        BIND_MF_OVERLOAD(wxImage, SetOption,
        void, (const wxString&, int))
        BIND_MF(wxImage, GetOption)
        BIND_MF(wxImage, GetOptionInt)
        BIND_MF(wxImage, HasOption)
        // Auto generated MACRO code for 'CountColours':
        // =================================
        BIND_F2MF_OVERLOAD(CountColours, 0,
        unsigned long, (wxImage*))
        BIND_F2MF_OVERLOAD(CountColours, 1,
        unsigned long, (wxImage*, unsigned long))
        BIND_MF(wxImage, ComputeHistogram)
        BIND_MF(wxImage, RotateHue)

        BEGIN_BIND_SCOPE()
        BIND_SMF(wxImage, GetHandlers)
        BIND_SMF(wxImage, AddHandler)
        BIND_SMF(wxImage, InsertHandler)
        BIND_SMF(wxImage, RemoveHandler)
        BIND_SMF_OVERLOAD(wxImage, FindHandler,
        wxImageHandler *, (const wxString&))
        BIND_SMF_OVERLOAD(wxImage, FindHandler,
        wxImageHandler *, (const wxString&, long))
        BIND_SMF_OVERLOAD(wxImage, FindHandler,
        wxImageHandler *, (long))
        BIND_SMF(wxImage, FindHandlerMime)
        BIND_SMF(wxImage, GetImageExtWildcard)
        BIND_SMF(wxImage, CleanUpHandlers)
        BIND_SMF(wxImage, InitStandardHandlers)
        BIND_SMF(wxImage, RGBtoHSV)
        BIND_SMF(wxImage, HSVtoRGB)
        END_BIND_SCOPE()
        END_BIND_CLASS(wxImage)

        BIND_FUNC(wxInitAllImageHandlers)
    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
        BIND_VARIABLE(wxNullImage)
    END_LUA_TABLE(wx)
END_WXLUA_BINDFUNC(Image)
#endif  // wxUSE_IMAGE
