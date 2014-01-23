#include <precompile.h>

namespace
{
    std::ostream& operator << (std::ostream& out, const wxSize& size)
    {
        out << "size: (w=" << size.x << ", h=" << size.y << ")";
        return out;
    }
    std::ostream& operator << (std::ostream& out, const wxRealPoint& pt)
    {
        out << "point: (x=" << pt.x << ", y=" << pt.y << ")";
        return out;
    }
    std::ostream& operator << (std::ostream& out, const wxPoint& pt)
    {
        out << "point: (x=" << pt.x << ", y=" << pt.y << ")";
        return out;
    }
    std::ostream& operator << (std::ostream& out, const wxRect& rc)
    {
        out << "rect: (x=" << rc.x << ", y=" << rc.y << ", w=" << rc.width << ", h=" << rc.height << ")";
        return out;
    }
    wxIcon Create_wxIcon(const wxChar* x)
    {
#ifdef __WXMSW__
        return wxIcon(wxT(x));
#elif defined (__WXPM__)
        return wxIcon(wxT(x));
#elif defined (__WXMGL__)
        return wxIcon((const char**)wxString::Format("%s_xpm", x).c_str());
#elif defined(__WXDFB__)
        return wxIcon((const char**)wxString::Format("%s_xpm", x).c_str());
#elif defined(__WXGTK__)
        return wxIcon((const char**)wxString::Format("%s_xpm", x).c_str());
#elif defined(__WXMAC__)
        return wxIcon((const char**)wxString::Format("%s_xpm", x).c_str());
#elif defined(__WXMOTIF__)
        return wxIcon(wxString::Format("%s_xpm", x));
#elif defined(__WXX11__)
        return wxIcon(wxString::Format("%s_xpm", x));
#else
        return wxIcon(wxT(x));
#endif
    }

    wxBitmap Create_wxBitmap(const wxChar* name)
    {
#if defined(__WXMSW__) || defined(__WXPM__)
        return wxBitmap(wxT(name), wxBITMAP_TYPE_RESOURCE);
#elif defined(__WXGTK__)   || \
        defined(__WXMOTIF__) || \
        defined(__WXX11__)   || \
        defined(__WXMAC__)   || \
        defined(__WXMGL__)   || \
        defined(__WXDFB__)   || \
        defined(__WXCOCOA__)
        return wxBitmap((const char**)wxString::Format("%s_xpm", name).c_str());
#else
        return wxBitmap(wxString::Format("%s_xpm", name),
            wxBITMAP_TYPE_XPM);
#endif
    }
}  // anonymous namespace

REGISTER_WXLUA_BIND(gdicmn)
{
    BEGIN_BIND_MODULE(wx)
        // wxSize bind
        BEGIN_BIND_CLASS(wxSize)
            BIND_CTOR()
            BIND_CTOR(int, int)

            BIND_MD(wxSize, x)
            BIND_MD(wxSize, y)

            BIND_OP_C(==, const wxSize&)
            // FIXME: how to bind "!=" not supported in lua
            //BIND_OPERATOR_C(!=, const wxSize&)
            BIND_OP_C(+, const wxSize&)
            BIND_OP_C(-, const wxSize&)
            BIND_OP_C(/, int)
            BIND_OP_C(*, int)

            BIND_MF(wxSize, IncTo)
            BIND_MF(wxSize, DecTo)

            BIND_MF_OVERLOAD(wxSize, IncBy, void, (int,int))
            BIND_MF_OVERLOAD(wxSize, IncBy, void, (const wxSize&))
            BIND_MF_OVERLOAD(wxSize, IncBy, void, (int))

            BIND_MF_OVERLOAD(wxSize, DecBy, void, (int,int))
            BIND_MF_OVERLOAD(wxSize, DecBy, void, (const wxSize&))
            BIND_MF_OVERLOAD(wxSize, DecBy, void, (int))

            BIND_MF(wxSize, Scale)
            BIND_MF(wxSize, Set)
            BIND_MF(wxSize, SetWidth)
            BIND_MF(wxSize, SetHeight)
            BIND_MF(wxSize, GetWidth)
            BIND_MF(wxSize, GetHeight)
            BIND_MF(wxSize, IsFullySpecified)

            BIND_MF(wxSize, SetDefaults)
            BIND_MF(wxSize, GetX)
            BIND_MF(wxSize, GetY)

            BIND_CLASS_PRINT()
        END_BIND_CLASS(wxSize)

        // wxRealPoint bind
        BEGIN_BIND_CLASS(wxRealPoint)
            BIND_CTOR()
            BIND_CTOR(double, double)

            BIND_OP_C(+, const wxRealPoint&)
            BIND_OP_C(-, const wxRealPoint&)
            BIND_OP_C(==, const wxRealPoint&)
            // FIXME: cannot suppot != in LUA???
            //BIND_OPERATOR_C(!=, const wxRealPoint&)

            BIND_CLASS_PRINT()
        END_BIND_CLASS(wxRealPoint)

        // wxPoint bind
        BEGIN_BIND_CLASS(wxPoint)
            BIND_CTOR()
            BIND_CTOR(int, int)

            BIND_MD(wxPoint, x)
            BIND_MD(wxPoint, y)

            BIND_OP(==, const wxPoint&)

            BIND_CLASS_PRINT()
        END_BIND_CLASS(wxPoint)

        // wxRect bind
        BEGIN_BIND_CLASS(wxRect)
            BIND_CTOR()
            BIND_CTOR(int,int,int,int)
            BIND_CTOR(const wxPoint&, const wxPoint&)
            BIND_CTOR(const wxPoint&, const wxSize&)
            BIND_CTOR(const wxSize&)

            BIND_MF(wxRect, GetX)
            BIND_MF(wxRect, SetX)

            BIND_MF(wxRect, GetY)
            BIND_MF(wxRect, SetY)

            BIND_MF(wxRect, GetWidth)
            BIND_MF(wxRect, SetWidth)

            BIND_MF(wxRect, GetHeight)
            BIND_MF(wxRect, SetHeight)

            BIND_MF(wxRect, GetPosition)
            BIND_MF(wxRect, SetPosition)

            BIND_MF(wxRect, GetSize)
            BIND_MF(wxRect, SetSize)

            BIND_MF(wxRect, IsEmpty)

            BIND_MF(wxRect, GetLeft)
            BIND_MF(wxRect, GetTop)
            BIND_MF(wxRect, GetBottom)
            BIND_MF(wxRect, GetRight)

            BIND_MF(wxRect, SetLeft)
            BIND_MF(wxRect, SetRight)
            BIND_MF(wxRect, SetTop)
            BIND_MF(wxRect, SetBottom)

            BIND_MF(wxRect, GetTopLeft)
            BIND_MF(wxRect, GetLeftTop)
            BIND_MF(wxRect, SetTopLeft)
            BIND_MF(wxRect, SetLeftTop)

            BIND_MF(wxRect, GetBottomRight)
            BIND_MF(wxRect, GetRightBottom)
            BIND_MF(wxRect, SetBottomRight)
            BIND_MF(wxRect, SetRightBottom)

            BIND_MF(wxRect, GetTopRight)
            BIND_MF(wxRect, GetRightTop)
            BIND_MF(wxRect, SetTopRight)
            BIND_MF(wxRect, SetRightTop)

            BIND_MF(wxRect, GetBottomLeft)
            BIND_MF(wxRect, GetLeftBottom)
            BIND_MF(wxRect, SetBottomLeft)
            BIND_MF(wxRect, SetLeftBottom)

            BIND_MF_OVERLOAD(wxRect, Inflate,
                wxRect&, (wxCoord, wxCoord))
            BIND_MF_OVERLOAD(wxRect, Inflate,
                wxRect&, (const wxSize&))
            BIND_MF_OVERLOAD(wxRect, Inflate,
                wxRect&, (wxCoord))
            BIND_MF_OVERLOAD(wxRect, Inflate,
                wxRect, (wxCoord, wxCoord) const)

            BIND_MF_OVERLOAD(wxRect, Deflate,
                wxRect, (wxCoord, wxCoord) const)
            BIND_MF_OVERLOAD(wxRect, Deflate,
                wxRect&, (wxCoord, wxCoord))
            BIND_MF_OVERLOAD(wxRect, Deflate,
                wxRect&, (const wxSize&))
            BIND_MF_OVERLOAD(wxRect, Deflate,
                wxRect&, (wxCoord))
            BIND_MF_OVERLOAD(wxRect, Deflate,
                wxRect, (wxCoord, wxCoord) const)

            BIND_MF_OVERLOAD(wxRect, Offset,
                void, (wxCoord, wxCoord))
            BIND_MF_OVERLOAD(wxRect, Offset,
                void, (const wxPoint&))

            BIND_MF_OVERLOAD(wxRect, Intersect,
                wxRect&, (const wxRect&))
            BIND_MF_OVERLOAD(wxRect, Intersect,
                wxRect, (const wxRect&)const)

            BIND_MF_OVERLOAD(wxRect, Union,
                wxRect&, (const wxRect&))
            BIND_MF_OVERLOAD(wxRect, Union,
                wxRect, (const wxRect&)const)

            BIND_OP_C(==, const wxRect&)
            // FIXME: cannot support != in LUA ??
            //BIND_OPERATOR(!=, const wxRect&)

            BIND_MF_OVERLOAD(wxRect, Contains, bool, (int,int)const)
            BIND_MF_OVERLOAD(wxRect, Contains, bool, (const wxPoint&)const)
            BIND_MF_OVERLOAD(wxRect, Contains, bool, (const wxRect&)const)

            BIND_MF(wxRect, Intersects)
            BIND_OP_C(+, const wxRect&)

            BIND_MF(wxRect, CentreIn)
            BIND_MF(wxRect, CenterIn)

            BIND_MD(wxRect, x)
            BIND_MD(wxRect, y)
            BIND_MD(wxRect, width)
            BIND_MD(wxRect, height)

            BIND_CLASS_PRINT()
        END_BIND_CLASS(wxRect)
    END_BIND_MODULE(wx)

    // enum: wxBitmapType
    BEGIN_LUA_TABLE(wx)
        BIND_ENUM(wxBITMAP_TYPE_INVALID)
        BIND_ENUM(wxBITMAP_TYPE_BMP)
        BIND_ENUM(wxBITMAP_TYPE_BMP_RESOURCE)
        BIND_ENUM(wxBITMAP_TYPE_RESOURCE)
        BIND_ENUM(wxBITMAP_TYPE_ICO)
        BIND_ENUM(wxBITMAP_TYPE_ICO_RESOURCE)
        BIND_ENUM(wxBITMAP_TYPE_CUR)
        BIND_ENUM(wxBITMAP_TYPE_CUR_RESOURCE)
        BIND_ENUM(wxBITMAP_TYPE_XBM)
        BIND_ENUM(wxBITMAP_TYPE_XBM_DATA)
        BIND_ENUM(wxBITMAP_TYPE_XPM)
        BIND_ENUM(wxBITMAP_TYPE_XPM_DATA)
        BIND_ENUM(wxBITMAP_TYPE_TIF)
        BIND_ENUM(wxBITMAP_TYPE_TIF_RESOURCE)
        BIND_ENUM(wxBITMAP_TYPE_GIF)
        BIND_ENUM(wxBITMAP_TYPE_GIF_RESOURCE)
        BIND_ENUM(wxBITMAP_TYPE_PNG)
        BIND_ENUM(wxBITMAP_TYPE_PNG_RESOURCE)
        BIND_ENUM(wxBITMAP_TYPE_JPEG)
        BIND_ENUM(wxBITMAP_TYPE_JPEG_RESOURCE)
        BIND_ENUM(wxBITMAP_TYPE_PNM)
        BIND_ENUM(wxBITMAP_TYPE_PNM_RESOURCE)
        BIND_ENUM(wxBITMAP_TYPE_PCX)
        BIND_ENUM(wxBITMAP_TYPE_PCX_RESOURCE)
        BIND_ENUM(wxBITMAP_TYPE_PICT)
        BIND_ENUM(wxBITMAP_TYPE_PICT_RESOURCE)
        BIND_ENUM(wxBITMAP_TYPE_ICON)
        BIND_ENUM(wxBITMAP_TYPE_ICON_RESOURCE)
        BIND_ENUM(wxBITMAP_TYPE_ANI)
        BIND_ENUM(wxBITMAP_TYPE_IFF)
        BIND_ENUM(wxBITMAP_TYPE_TGA)
        BIND_ENUM(wxBITMAP_TYPE_MACCURSOR)
        BIND_ENUM(wxBITMAP_TYPE_MACCURSOR_RESOURCE)
        BIND_ENUM(wxBITMAP_TYPE_ANY)
    END_LUA_TABLE(wx)

    // enum: wxStockCursor
    BEGIN_LUA_TABLE(wx)
        BIND_ENUM(wxCURSOR_NONE)
        BIND_ENUM(wxCURSOR_ARROW)
        BIND_ENUM(wxCURSOR_RIGHT_ARROW)
        BIND_ENUM(wxCURSOR_BULLSEYE)
        BIND_ENUM(wxCURSOR_CHAR)
        BIND_ENUM(wxCURSOR_CROSS)
        BIND_ENUM(wxCURSOR_HAND)
        BIND_ENUM(wxCURSOR_IBEAM)
        BIND_ENUM(wxCURSOR_LEFT_BUTTON)
        BIND_ENUM(wxCURSOR_MAGNIFIER)
        BIND_ENUM(wxCURSOR_MIDDLE_BUTTON)
        BIND_ENUM(wxCURSOR_NO_ENTRY)
        BIND_ENUM(wxCURSOR_PAINT_BRUSH)
        BIND_ENUM(wxCURSOR_PENCIL)
        BIND_ENUM(wxCURSOR_POINT_LEFT)
        BIND_ENUM(wxCURSOR_POINT_RIGHT)
        BIND_ENUM(wxCURSOR_QUESTION_ARROW)
        BIND_ENUM(wxCURSOR_RIGHT_BUTTON)
        BIND_ENUM(wxCURSOR_SIZENESW)
        BIND_ENUM(wxCURSOR_SIZENS)
        BIND_ENUM(wxCURSOR_SIZENWSE)
        BIND_ENUM(wxCURSOR_SIZEWE)
        BIND_ENUM(wxCURSOR_SIZING)
        BIND_ENUM(wxCURSOR_SPRAYCAN)
        BIND_ENUM(wxCURSOR_WAIT)
        BIND_ENUM(wxCURSOR_WATCH)
        BIND_ENUM(wxCURSOR_BLANK)
#ifdef __WXGTK__
        BIND_ENUM(wxCURSOR_DEFAULT)
#endif
#ifdef __WXMAC__
        BIND_ENUM(wxCURSOR_COPY_ARROW)
#endif
#ifdef __X__
        // Not yet implemented for Windows
        BIND_ENUM(wxCURSOR_CROSS_REVERSE)
        BIND_ENUM(wxCURSOR_DOUBLE_ARROW)
        BIND_ENUM(wxCURSOR_BASED_ARROW_UP)
        BIND_ENUM(wxCURSOR_BASED_ARROW_DOWN)
#endif // X11
        BIND_ENUM(wxCURSOR_ARROWWAIT)
        BIND_ENUM(wxCURSOR_MAX)

#ifndef __WXGTK__
        BIND_MACRO(wxCURSOR_DEFAULT)
#endif
    END_LUA_TABLE(wx)

    // special macro
    BEGIN_BIND_MODULE(wx)
        BIND_FUNC_NAME(wxICON, Create_wxIcon)
        BIND_FUNC_NAME(wxBITMAP, Create_wxBitmap)
    END_BIND_MODULE(wx)

    BEGIN_BIND_MODULE(wx)

        BEGIN_BIND_CLASS(wxPenList)
            BIND_MF(wxPenList, FindOrCreatePen)
        END_BIND_CLASS(wxPenList)

        BEGIN_BIND_CLASS(wxBrushList)
            BIND_MF(wxBrushList, FindOrCreateBrush)
        END_BIND_CLASS(wxBrushList)

        BEGIN_BIND_CLASS(wxFontList)
            BIND_MF(wxFontList, FindOrCreateFont)
        END_BIND_CLASS(wxFontList)

        BEGIN_BIND_CLASS(wxColourDatabase)
            BIND_CTOR()

            BIND_MF(wxColourDatabase, Find)
            BIND_MF(wxColourDatabase, FindName)
            BIND_MF(wxColourDatabase, AddColour)
        END_BIND_CLASS(wxColourDatabase)

        BEGIN_BIND_CLASS(wxResourceCache)
            BIND_CTOR()
#if !wxUSE_STL
            BIND_CTOR(const unsigned int)
#endif
        END_BIND_CLASS(wxResourceCache)

        BEGIN_BIND_CLASS(wxStockGDI)
            BIND_CTOR()

            BEGIN_BIND_SCOPE()
                BIND_SMF(wxStockGDI, DeleteAll)
                BIND_SMF(wxStockGDI, instance)
                BIND_SMF(wxStockGDI, GetBrush)
                BIND_SMF(wxStockGDI, GetColour)
                BIND_SMF(wxStockGDI, GetCursor)
                BIND_SMF(wxStockGDI, GetPen)
            END_BIND_SCOPE()

            BIND_MF(wxStockGDI, GetFont)
        END_BIND_CLASS(wxStockGDI)
    END_BIND_MODULE(wx)

    // bind global variables
    BEGIN_LUA_TABLE(wx)
        BIND_VARIABLE(wxThePenList)
        BIND_VARIABLE(wxTheBrushList)
        BIND_VARIABLE(wxTheFontList)

        //BIND_VARIABLE(wxNullBitmap)
        //BIND_VARIABLE(wxNullIcon)
        //BIND_VARIABLE(wxNullCursor)
        //BIND_VARIABLE(wxNullPen)
        //BIND_VARIABLE(wxNullBrush)
        //BIND_VARIABLE(wxNullPalette)
        //BIND_VARIABLE(wxNullFont)
        //BIND_VARIABLE(wxNullColour)
        //BIND_VARIABLE(wxTheColourDatabase)

        BIND_VARIABLE(wxDefaultSize)
        BIND_VARIABLE(wxDefaultPosition)
    END_LUA_TABLE(wx)

    // bind global extern functions
    BEGIN_BIND_MODULE(wx)
        BIND_FUNC(wxInitializeStockLists)
        BIND_FUNC(wxDeleteStockLists)
        BIND_FUNC(wxColourDisplay)
        BIND_FUNC(wxDisplayDepth)
        BIND_FUNC_NAME(wxGetDisplayDepth, wxDisplayDepth)
        BIND_FUNC(wxDisplaySize)
        BIND_FUNC(wxGetDisplaySize)
        BIND_FUNC(wxDisplaySizeMM)
        BIND_FUNC(wxGetDisplaySizeMM)
        BIND_FUNC(wxClientDisplayRect)
        BIND_FUNC(wxGetClientDisplayRect)
        BIND_FUNC(wxSetCursor)
    END_BIND_MODULE(wx)

    // dc related classes
    BEGIN_BIND_MODULE(wx)

        BEGIN_BIND_CLASS_OBJECT(wxDC)
            BIND_MF(wxDC, DrawObject)

            BIND_MF_OVERLOAD(wxDC, FloodFill,
                bool, (wxCoord,wxCoord,const wxColour&,int))
            BIND_MF_OVERLOAD(wxDC, FloodFill,
                bool, (const wxPoint&, const wxColour&,int))

            BIND_MF_OVERLOAD(wxDC, GradientFillConcentric,
                void, (const wxRect&,const wxColour&,const wxColour&))
            BIND_MF_OVERLOAD(wxDC, GradientFillConcentric,
                void, (const wxRect&,const wxColour&,const wxColour&,const wxPoint&))

            BIND_MF(wxDC, GradientFillLinear)

            BIND_MF_OVERLOAD(wxDC, GetPixel,
                bool, (wxCoord,wxCoord,wxColour*)const)
            BIND_MF_OVERLOAD(wxDC, GetPixel,
                bool, (const wxPoint&,wxColour*)const)

            BIND_MF_OVERLOAD(wxDC, DrawLine,
                void, (wxCoord,wxCoord,wxCoord,wxCoord))
            BIND_MF_OVERLOAD(wxDC, DrawLine,
                void, (const wxPoint&,const wxPoint&))

            BIND_MF_OVERLOAD(wxDC, CrossHair,
                void, (wxCoord,wxCoord))
            BIND_MF_OVERLOAD(wxDC, CrossHair,
                void, (const wxPoint&))

            BIND_MF_OVERLOAD(wxDC, DrawArc,
                void, (wxCoord,wxCoord,wxCoord,wxCoord,wxCoord,wxCoord))
            BIND_MF_OVERLOAD(wxDC, DrawArc,
                void, (const wxPoint&, const wxPoint&,const wxPoint&))

            BIND_MF_OVERLOAD(wxDC, DrawCheckMark,
                void, (wxCoord,wxCoord,wxCoord,wxCoord))
            BIND_MF_OVERLOAD(wxDC, DrawCheckMark,
                void, (const wxRect&))

            BIND_MF_OVERLOAD(wxDC, DrawEllipticArc,
                void, (wxCoord,wxCoord,wxCoord,wxCoord,double,double))
            BIND_MF_OVERLOAD(wxDC, DrawEllipticArc,
                void, (const wxPoint&,const wxSize&,double,double))

            BIND_MF_OVERLOAD(wxDC, DrawPoint,
                void, (wxCoord,wxCoord))
            BIND_MF_OVERLOAD(wxDC, DrawPoint,
                void, (const wxPoint&))

            BIND_MF_OVERLOAD(wxDC, DrawLines,
                void, (int,wxPoint[],wxCoord,wxCoord))
            BIND_MF_OVERLOAD(wxDC, DrawLines,
                void, (const wxList*, wxCoord, wxCoord))

            BIND_MF_OVERLOAD(wxDC, DrawPolygon,
                void, (int, wxPoint[], wxCoord, wxCoord, int))
            BIND_MF_OVERLOAD(wxDC, DrawPolygon,
                void, (const wxList*, wxCoord, wxCoord, int))

            BIND_MF(wxDC, DrawPolyPolygon)

            BIND_MF_OVERLOAD(wxDC, DrawRectangle,
                void, (wxCoord, wxCoord, wxCoord, wxCoord))
            BIND_MF_OVERLOAD(wxDC, DrawRectangle,
                void, (const wxPoint&, const wxSize&))
            BIND_MF_OVERLOAD(wxDC, DrawRectangle,
                void, (const wxRect&))

            BIND_MF_OVERLOAD(wxDC, DrawRoundedRectangle,
                void, (wxCoord, wxCoord, wxCoord, wxCoord, double))
            BIND_MF_OVERLOAD(wxDC, DrawRoundedRectangle,
                void, (const wxPoint&, const wxSize&, double))
            BIND_MF_OVERLOAD(wxDC, DrawRoundedRectangle,
                void, (const wxRect&, double))

            BIND_MF_OVERLOAD(wxDC, DrawCircle,
                void, (wxCoord, wxCoord, wxCoord))
            BIND_MF_OVERLOAD(wxDC, DrawCircle,
                void, (const wxPoint&, wxCoord))

            BIND_MF_OVERLOAD(wxDC, DrawEllipse,
                void, (wxCoord, wxCoord, wxCoord, wxCoord))
            BIND_MF_OVERLOAD(wxDC, DrawEllipse,
                void, (const wxPoint&, const wxSize&))
            BIND_MF_OVERLOAD(wxDC, DrawEllipse,
                void, (const wxRect&))

            BIND_MF_OVERLOAD(wxDC, DrawIcon,
                void, (const wxIcon&, wxCoord, wxCoord))
            BIND_MF_OVERLOAD(wxDC, DrawIcon,
                void, (const wxIcon&, const wxPoint&))

            BIND_MF_OVERLOAD(wxDC, DrawBitmap,
                void, (const wxBitmap&, wxCoord, wxCoord, bool))
            BIND_MF_OVERLOAD(wxDC, DrawBitmap,
                void, (const wxBitmap&, const wxPoint&, bool))

            BIND_MF_OVERLOAD(wxDC, DrawText,
                void, (const wxString&, wxCoord, wxCoord))
            BIND_MF_OVERLOAD(wxDC, DrawText,
                void, (const wxString&, const wxPoint&))

            BIND_MF_OVERLOAD(wxDC, DrawRotatedText,
                void, (const wxString&, wxCoord, wxCoord, double))
            BIND_MF_OVERLOAD(wxDC, DrawRotatedText,
                void, (const wxString&, const wxPoint&, double))

            BIND_MF_OVERLOAD(wxDC, DrawLabel,
                void, (const wxString&, const wxBitmap&, const wxRect&,
                    int, int, wxRect*))
            BIND_MF_OVERLOAD(wxDC, DrawLabel,
                void, (const wxString&, const wxRect&, int, int))

            // luabind only support 9 arguments
            //BIND_MEMBER_OVERLOAD(wxDC, Blit,
            //    bool, (wxCoord, wxCoord, wxCoord, wxCoord,
            //        wxDC*, wxCoord, wxCoord, int, bool, wxCoord, wxCoord))
            BIND_MF_OVERLOAD(wxDC, Blit,
                bool, (const wxPoint&, const wxSize&,
                    wxDC*, const wxPoint&, int, bool, const wxPoint&))

            BIND_MF(wxDC, GetAsBitmap)
            BIND_MF(wxDC, Clear)
            BIND_MF(wxDC, StartDoc)
            BIND_MF(wxDC, EndDoc)
            BIND_MF(wxDC, StartPage)
            BIND_MF(wxDC, EndPage)

            BIND_MF(wxDC, SetFont)
            BIND_MF(wxDC, SetPen)
            BIND_MF(wxDC, SetBrush)
            BIND_MF(wxDC, SetBackground)
            BIND_MF(wxDC, SetBackgroundMode)

            BIND_MF_OVERLOAD(wxDC, SetClippingRegion,
                void, (wxCoord, wxCoord, wxCoord, wxCoord))
            BIND_MF_OVERLOAD(wxDC, SetClippingRegion,
                void, (const wxPoint&, const wxSize&))
            BIND_MF_OVERLOAD(wxDC, SetClippingRegion,
                void, (const wxRect&))
            BIND_MF_OVERLOAD(wxDC, SetClippingRegion,
                void, (const wxRegion&))

            BIND_MF(wxDC, DestroyClippingRegion)

            BIND_MF_OVERLOAD(wxDC, GetClippingBox,
                void, (wxCoord*, wxCoord*, wxCoord*, wxCoord*) const)
            BIND_MF_OVERLOAD(wxDC, GetClippingBox,
                void, (wxRect&) const)

            BIND_MF(wxDC, GetCharHeight)
            BIND_MF(wxDC, GetCharWidth)

            BIND_MF_OVERLOAD(wxDC, GetTextExtent,
                void, (const wxString&, wxCoord *, wxCoord *,
                    wxCoord *, wxCoord *, wxFont *) const)
            BIND_MF_OVERLOAD(wxDC, GetTextExtent,
                wxSize, (const wxString&) const)

            BIND_MF_OVERLOAD(wxDC, GetMultiLineTextExtent,
                void, (const wxString&, wxCoord *, wxCoord *,
                    wxCoord *, wxFont *) const)
            BIND_MF_OVERLOAD(wxDC, GetMultiLineTextExtent,
                wxSize, (const wxString&) const)

            BIND_MF(wxDC, GetPartialTextExtents)

            BIND_MF_OVERLOAD(wxDC, GetSize,
                void, (int*, int*) const)
            BIND_MF_OVERLOAD(wxDC, GetSize,
                wxSize, ()const)

            BIND_MF_OVERLOAD(wxDC, GetSizeMM,
                void, (int*, int*) const)
            BIND_MF_OVERLOAD(wxDC, GetSizeMM,
                wxSize, ()const)

            BIND_MF(wxDC, DeviceToLogicalX)
            BIND_MF(wxDC, DeviceToLogicalY)
            BIND_MF(wxDC, DeviceToLogicalXRel)
            BIND_MF(wxDC, DeviceToLogicalYRel)
            BIND_MF(wxDC, LogicalToDeviceX)
            BIND_MF(wxDC, LogicalToDeviceY)
            BIND_MF(wxDC, LogicalToDeviceXRel)
            BIND_MF(wxDC, LogicalToDeviceYRel)

            BIND_MF(wxDC, CanDrawBitmap)
            BIND_MF(wxDC, CanGetTextExtent)
            BIND_MF(wxDC, GetDepth)
            BIND_MF(wxDC, GetPPI)
            BIND_MF(wxDC, Ok)
            BIND_MF(wxDC, IsOk)
            BIND_MF(wxDC, GetBackgroundMode)
            BIND_MF(wxDC, GetBackground)
            BIND_MF(wxDC, GetBrush)
            BIND_MF(wxDC, GetFont)
            BIND_MF(wxDC, GetPen)
            BIND_MF(wxDC, GetTextForeground)
            BIND_MF(wxDC, GetTextBackground)
            BIND_MF(wxDC, SetTextForeground)
            BIND_MF(wxDC, SetTextBackground)
            BIND_MF(wxDC, GetMapMode)
            BIND_MF(wxDC, SetMapMode)
            BIND_MF(wxDC, GetUserScale)
            BIND_MF(wxDC, SetUserScale)
            BIND_MF(wxDC, GetLogicalScale)
            BIND_MF(wxDC, SetLogicalScale)

            BIND_MF_OVERLOAD(wxDC, GetLogicalOrigin,
                void, (wxCoord*, wxCoord*) const)
            BIND_MF_OVERLOAD(wxDC, GetLogicalOrigin,
                wxPoint, () const)

            BIND_MF(wxDC, SetLogicalOrigin)

            BIND_MF_OVERLOAD(wxDC, GetDeviceOrigin,
                void, (wxCoord*, wxCoord*) const)
            BIND_MF_OVERLOAD(wxDC, GetDeviceOrigin,
                wxPoint, () const)

            BIND_MF(wxDC, SetDeviceOrigin)

            BIND_MF(wxDC, ComputeScaleAndOrigin)
            BIND_MF(wxDC, SetAxisOrientation)
            BIND_MF(wxDC, GetLogicalFunction)
            BIND_MF(wxDC, SetLogicalFunction)

            BIND_MF(wxDC, CalcBoundingBox)
            BIND_MF(wxDC, ResetBoundingBox)

            BIND_MF(wxDC, MinX)
            BIND_MF(wxDC, MaxX)
            BIND_MF(wxDC, MinY)
            BIND_MF(wxDC, MaxY)

            BIND_MF_OVERLOAD(wxDC, GetTextExtent,
                void, (const wxString&, wxCoord*, wxCoord*, wxCoord*, wxCoord*, wxFont*) const)
            BIND_MF_OVERLOAD(wxDC, GetTextExtent,
                wxSize, (const wxString&) const)

            BIND_MF(wxDC, GetLayoutDirection)
            BIND_MF(wxDC, SetLayoutDirection)

        END_BIND_CLASS(wxDC)

        BEGIN_BIND_CLASS(wxDCTextColourChanger)
            BIND_CTOR(wxDC&)
            BIND_CTOR(wxDC&, const wxColour&)
            BIND_MF(wxDCTextColourChanger, Set)
        END_BIND_CLASS(wxDCTextColourChanger)

        BEGIN_BIND_CLASS(wxDCPenChanger)
            BIND_CTOR(wxDC&, const wxPen&)
        END_BIND_CLASS(wxDCPenChanger)

        BEGIN_BIND_CLASS(wxDCBrushChanger)
            BIND_CTOR(wxDC&, const wxBrush&)
        END_BIND_CLASS(wxDCBrushChanger)

        BEGIN_BIND_CLASS(wxDCClipper)
            BIND_CTOR(wxDC&, const wxRegion&)
            BIND_CTOR(wxDC&, const wxRect&)
            BIND_CTOR(wxDC&, wxCoord, wxCoord, wxCoord, wxCoord)
        END_BIND_CLASS(wxDCClipper)

        BEGIN_BIND_CLASS(wxWindowDC, wxDC)
            BIND_CTOR()
            BIND_CTOR(wxWindow*)
        END_BIND_CLASS(wxWindowDC)

    END_BIND_MODULE(wx)

    return 0;
}

