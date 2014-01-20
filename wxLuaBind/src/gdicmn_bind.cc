#include <precompile.h>

#include "gdicmn_bind.h"

REGISTER_WXLUA_BIND(gdicmn)

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

int luaopen_gdicmn(lua_State* L)
{
    module(L, "wx")
    [
        // wxSize bind
        BEGIN_BIND_CLASS(wxSize, Size)
            BIND_CTOR()
            BIND_CTOR(int, int)

            BIND_MEMBER_DATA(wxSize, x)
            BIND_MEMBER_DATA(wxSize, y)

            BIND_OPERATOR_C(==, const wxSize&)
            // FIXME: how to bind "!=" not supported in lua
            //BIND_OPERATOR_C(!=, const wxSize&)
            BIND_OPERATOR_C(+, const wxSize&)
            BIND_OPERATOR_C(-, const wxSize&)
            BIND_OPERATOR_C(/, int)
            BIND_OPERATOR_C(*, int)

            BIND_MEMBER_FUNC(wxSize, IncTo)
            BIND_MEMBER_FUNC(wxSize, DecTo)

            .def("IncBy", (void(wxSize::*)(int,int))&wxSize::IncBy)
            .def("IncBy", (void(wxSize::*)(const wxSize&))&wxSize::IncBy)
            .def("IncBy", (void(wxSize::*)(int))&wxSize::IncBy)

            .def("DecBy", (void(wxSize::*)(int,int))&wxSize::DecBy)
            .def("DecBy", (void(wxSize::*)(const wxSize&))&wxSize::DecBy)
            .def("DecBy", (void(wxSize::*)(int))&wxSize::DecBy)

            BIND_MEMBER_FUNC(wxSize, Scale)
            BIND_MEMBER_FUNC(wxSize, Set)
            BIND_MEMBER_FUNC(wxSize, SetWidth)
            BIND_MEMBER_FUNC(wxSize, SetHeight)
            BIND_MEMBER_FUNC(wxSize, GetWidth)
            BIND_MEMBER_FUNC(wxSize, GetHeight)
            BIND_MEMBER_FUNC(wxSize, IsFullySpecified)

            BIND_MEMBER_FUNC(wxSize, SetDefaults)
            BIND_MEMBER_FUNC(wxSize, GetX)
            BIND_MEMBER_FUNC(wxSize, GetY)

            BIND_CLASS_PRINT()
        END_BIND_CLASS(wxSize)

        // wxRealPoint bind
        BEGIN_BIND_CLASS(wxRealPoint, RealPoint)
            BIND_CTOR()
            BIND_CTOR(double, double)

            BIND_OPERATOR_C(+, const wxRealPoint&)
            BIND_OPERATOR_C(-, const wxRealPoint&)
            BIND_OPERATOR_C(==, const wxRealPoint&)
            //BIND_OPERATOR_C(!=, const wxRealPoint&)

            BIND_CLASS_PRINT()
        END_BIND_CLASS(wxRealPoint)

        // wxPoint bind
        BEGIN_BIND_CLASS(wxPoint, Point)
            BIND_CTOR()
            BIND_CTOR(int, int)

            BIND_MEMBER_DATA(wxPoint, x)
            BIND_MEMBER_DATA(wxPoint, y)

            BIND_OPERATOR(==, const wxPoint&)

            BIND_CLASS_PRINT()
        END_BIND_CLASS(wxPoint)

        // wxRect bind
        BEGIN_BIND_CLASS(wxRect, Rect)
            BIND_CTOR()
            BIND_CTOR(int,int,int,int)
            BIND_CTOR(const wxPoint&, const wxPoint&)
            BIND_CTOR(const wxPoint&, const wxSize&)
            BIND_CTOR(const wxSize&)

            BIND_MEMBER_FUNC(wxRect, GetX)
            BIND_MEMBER_FUNC(wxRect, SetX)

            BIND_MEMBER_FUNC(wxRect, GetY)
            BIND_MEMBER_FUNC(wxRect, SetY)

            BIND_MEMBER_FUNC(wxRect, GetWidth)
            BIND_MEMBER_FUNC(wxRect, SetWidth)

            BIND_MEMBER_FUNC(wxRect, GetHeight)
            BIND_MEMBER_FUNC(wxRect, SetHeight)

            BIND_MEMBER_FUNC(wxRect, GetPosition)
            BIND_MEMBER_FUNC(wxRect, SetPosition)

            BIND_MEMBER_FUNC(wxRect, GetSize)
            BIND_MEMBER_FUNC(wxRect, SetSize)

            BIND_MEMBER_FUNC(wxRect, IsEmpty)

            BIND_MEMBER_FUNC(wxRect, GetLeft)
            BIND_MEMBER_FUNC(wxRect, GetTop)
            BIND_MEMBER_FUNC(wxRect, GetBottom)
            BIND_MEMBER_FUNC(wxRect, GetRight)

            BIND_MEMBER_FUNC(wxRect, SetLeft)
            BIND_MEMBER_FUNC(wxRect, SetRight)
            BIND_MEMBER_FUNC(wxRect, SetTop)
            BIND_MEMBER_FUNC(wxRect, SetBottom)

            BIND_MEMBER_FUNC(wxRect, GetTopLeft)
            BIND_MEMBER_FUNC(wxRect, GetLeftTop)
            BIND_MEMBER_FUNC(wxRect, SetTopLeft)
            BIND_MEMBER_FUNC(wxRect, SetLeftTop)

            BIND_MEMBER_FUNC(wxRect, GetBottomRight)
            BIND_MEMBER_FUNC(wxRect, GetRightBottom)
            BIND_MEMBER_FUNC(wxRect, SetBottomRight)
            BIND_MEMBER_FUNC(wxRect, SetRightBottom)

            BIND_MEMBER_FUNC(wxRect, GetTopRight)
            BIND_MEMBER_FUNC(wxRect, GetRightTop)
            BIND_MEMBER_FUNC(wxRect, SetTopRight)
            BIND_MEMBER_FUNC(wxRect, SetRightTop)

            BIND_MEMBER_FUNC(wxRect, GetBottomLeft)
            BIND_MEMBER_FUNC(wxRect, GetLeftBottom)
            BIND_MEMBER_FUNC(wxRect, SetBottomLeft)
            BIND_MEMBER_FUNC(wxRect, SetLeftBottom)

            BIND_MEMBER_OVERLOAD(wxRect, Inflate,
                wxRect&, (wxCoord, wxCoord))
            BIND_MEMBER_OVERLOAD(wxRect, Inflate,
                wxRect&, (const wxSize&))
            BIND_MEMBER_OVERLOAD(wxRect, Inflate,
                wxRect&, (wxCoord))
            BIND_MEMBER_OVERLOAD(wxRect, Inflate,
                wxRect, (wxCoord, wxCoord) const)

            BIND_MEMBER_OVERLOAD(wxRect, Deflate,
                wxRect, (wxCoord, wxCoord) const)
            BIND_MEMBER_OVERLOAD(wxRect, Deflate,
                wxRect&, (wxCoord, wxCoord))
            BIND_MEMBER_OVERLOAD(wxRect, Deflate,
                wxRect&, (const wxSize&))
            BIND_MEMBER_OVERLOAD(wxRect, Deflate,
                wxRect&, (wxCoord))
            BIND_MEMBER_OVERLOAD(wxRect, Deflate,
                wxRect, (wxCoord, wxCoord) const)

            BIND_MEMBER_OVERLOAD(wxRect, Offset,
                void, (wxCoord, wxCoord))
            BIND_MEMBER_OVERLOAD(wxRect, Offset,
                void, (const wxPoint&))

            BIND_MEMBER_OVERLOAD(wxRect, Intersect,
                wxRect&, (const wxRect&))
            BIND_MEMBER_OVERLOAD(wxRect, Intersect,
                wxRect, (const wxRect&)const)

            BIND_MEMBER_OVERLOAD(wxRect, Union,
                wxRect&, (const wxRect&))
            BIND_MEMBER_OVERLOAD(wxRect, Union,
                wxRect, (const wxRect&)const)

            BIND_OPERATOR_C(==, const wxRect&)
            //BIND_OPERATOR(!=, const wxRect&)

            BIND_MEMBER_OVERLOAD(wxRect, Contains, bool, (int,int)const)
            BIND_MEMBER_OVERLOAD(wxRect, Contains, bool, (const wxPoint&)const)
            BIND_MEMBER_OVERLOAD(wxRect, Contains, bool, (const wxRect&)const)

            BIND_MEMBER_FUNC(wxRect, Intersects)
            BIND_OPERATOR_C(+, const wxRect&)

            BIND_MEMBER_FUNC(wxRect, CentreIn)
            BIND_MEMBER_FUNC(wxRect, CenterIn)

            BIND_MEMBER_DATA(wxRect, x)
            BIND_MEMBER_DATA(wxRect, y)
            BIND_MEMBER_DATA(wxRect, width)
            BIND_MEMBER_DATA(wxRect, height)

            BIND_CLASS_PRINT()
    ];

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
    module(L, "wx")
    [
        BIND_FUNC_WITH_NAME(wxICON, Create_wxIcon),
        BIND_FUNC_WITH_NAME(wxBITMAP, Create_wxBitmap)
    ];

    module(L, "wx")
    [
        BEGIN_BIND_CLASS(wxPenList, PenList)
            BIND_MEMBER_FUNC(wxPenList, FindOrCreatePen)
        END_BIND_CLASS(wxPenList)

        BEGIN_BIND_CLASS(wxBrushList, BrushList)
            BIND_MEMBER_FUNC(wxBrushList, FindOrCreateBrush)
        END_BIND_CLASS(wxBrushList)

        BEGIN_BIND_CLASS(wxFontList, FontList)
            BIND_MEMBER_FUNC(wxFontList, FindOrCreateFont)
        END_BIND_CLASS(wxFontList)

        BEGIN_BIND_CLASS(wxColourDatabase, ColourDatabase)
            BIND_CTOR()

            BIND_MEMBER_FUNC(wxColourDatabase, Find)
            BIND_MEMBER_FUNC(wxColourDatabase, FindName)
            BIND_MEMBER_FUNC(wxColourDatabase, AddColour)
        END_BIND_CLASS(wxColourDatabase)

        BEGIN_BIND_CLASS(wxResourceCache, ResourceCache)
            BIND_CTOR()
#if !wxUSE_STL
            BIND_CTOR(const unsigned int)
#endif
        END_BIND_CLASS(wxResourceCache)

        BEGIN_BIND_CLASS(wxStockGDI, StockGDI)
            BIND_CTOR()

            BEGIN_BIND_SCOPE()
                BIND_STATIC_FUNC(wxStockGDI, DeleteAll),
                BIND_STATIC_FUNC(wxStockGDI, instance),
                BIND_STATIC_FUNC(wxStockGDI, GetBrush),
                BIND_STATIC_FUNC(wxStockGDI, GetColour),
                BIND_STATIC_FUNC(wxStockGDI, GetCursor),
                BIND_STATIC_FUNC(wxStockGDI, GetPen)
            END_BIND_SCOPE()

            BIND_MEMBER_FUNC(wxStockGDI, GetFont)

    ];

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
        BIND_VARIABLE(wxTheColourDatabase)

        BIND_VARIABLE(wxDefaultSize)
        BIND_VARIABLE(wxDefaultPosition)
    END_LUA_TABLE(wx)

    // bind global extern functions
    module(L, "wx")
    [
        BIND_FUNC(wxInitializeStockLists),
        BIND_FUNC(wxDeleteStockLists),
        BIND_FUNC(wxColourDisplay),
        BIND_FUNC(wxDisplayDepth),
        BIND_FUNC_WITH_NAME(wxGetDisplayDepth, wxDisplayDepth),
        BIND_FUNC(wxDisplaySize),
        BIND_FUNC(wxGetDisplaySize),
        BIND_FUNC(wxDisplaySizeMM),
        BIND_FUNC(wxGetDisplaySizeMM),
        BIND_FUNC(wxClientDisplayRect),
        BIND_FUNC(wxGetClientDisplayRect),
        BIND_FUNC(wxSetCursor)
    ];

    // dc related classes
    module(L, "wx")
    [
        BEGIN_BIND_CLASS_WX(wxDC, DC)
            BIND_MEMBER_FUNC(wxDC, DrawObject)

            BIND_MEMBER_OVERLOAD(wxDC, FloodFill,
                bool, (wxCoord,wxCoord,const wxColour&,int))
            BIND_MEMBER_OVERLOAD(wxDC, FloodFill,
                bool, (const wxPoint&, const wxColour&,int))

            BIND_MEMBER_OVERLOAD(wxDC, GradientFillConcentric,
                void, (const wxRect&,const wxColour&,const wxColour&))
            BIND_MEMBER_OVERLOAD(wxDC, GradientFillConcentric,
                void, (const wxRect&,const wxColour&,const wxColour&,const wxPoint&))

            BIND_MEMBER_FUNC(wxDC, GradientFillLinear)

            BIND_MEMBER_OVERLOAD(wxDC, GetPixel,
                bool, (wxCoord,wxCoord,wxColour*)const)
            BIND_MEMBER_OVERLOAD(wxDC, GetPixel,
                bool, (const wxPoint&,wxColour*)const)

            BIND_MEMBER_OVERLOAD(wxDC, DrawLine,
                void, (wxCoord,wxCoord,wxCoord,wxCoord))
            BIND_MEMBER_OVERLOAD(wxDC, DrawLine,
                void, (const wxPoint&,const wxPoint&))

            BIND_MEMBER_OVERLOAD(wxDC, CrossHair,
                void, (wxCoord,wxCoord))
            BIND_MEMBER_OVERLOAD(wxDC, CrossHair,
                void, (const wxPoint&))

            BIND_MEMBER_OVERLOAD(wxDC, DrawArc,
                void, (wxCoord,wxCoord,wxCoord,wxCoord,wxCoord,wxCoord))
            BIND_MEMBER_OVERLOAD(wxDC, DrawArc,
                void, (const wxPoint&, const wxPoint&,const wxPoint&))

            BIND_MEMBER_OVERLOAD(wxDC, DrawCheckMark,
                void, (wxCoord,wxCoord,wxCoord,wxCoord))
            BIND_MEMBER_OVERLOAD(wxDC, DrawCheckMark,
                void, (const wxRect&))

            BIND_MEMBER_OVERLOAD(wxDC, DrawEllipticArc,
                void, (wxCoord,wxCoord,wxCoord,wxCoord,double,double))
            BIND_MEMBER_OVERLOAD(wxDC, DrawEllipticArc,
                void, (const wxPoint&,const wxSize&,double,double))

            BIND_MEMBER_OVERLOAD(wxDC, DrawPoint,
                void, (wxCoord,wxCoord))
            BIND_MEMBER_OVERLOAD(wxDC, DrawPoint,
                void, (const wxPoint&))

            BIND_MEMBER_OVERLOAD(wxDC, DrawLines,
                void, (int,wxPoint[],wxCoord,wxCoord))
            BIND_MEMBER_OVERLOAD(wxDC, DrawLines,
                void, (const wxList*, wxCoord, wxCoord))

            BIND_MEMBER_OVERLOAD(wxDC, DrawPolygon,
                void, (int, wxPoint[], wxCoord, wxCoord, int))
            BIND_MEMBER_OVERLOAD(wxDC, DrawPolygon,
                void, (const wxList*, wxCoord, wxCoord, int))

            BIND_MEMBER_FUNC(wxDC, DrawPolyPolygon)

            BIND_MEMBER_OVERLOAD(wxDC, DrawRectangle,
                void, (wxCoord, wxCoord, wxCoord, wxCoord))
            BIND_MEMBER_OVERLOAD(wxDC, DrawRectangle,
                void, (const wxPoint&, const wxSize&))
            BIND_MEMBER_OVERLOAD(wxDC, DrawRectangle,
                void, (const wxRect&))

            BIND_MEMBER_OVERLOAD(wxDC, DrawRoundedRectangle,
                void, (wxCoord, wxCoord, wxCoord, wxCoord, double))
            BIND_MEMBER_OVERLOAD(wxDC, DrawRoundedRectangle,
                void, (const wxPoint&, const wxSize&, double))
            BIND_MEMBER_OVERLOAD(wxDC, DrawRoundedRectangle,
                void, (const wxRect&, double))

            BIND_MEMBER_OVERLOAD(wxDC, DrawCircle,
                void, (wxCoord, wxCoord, wxCoord))
            BIND_MEMBER_OVERLOAD(wxDC, DrawCircle,
                void, (const wxPoint&, wxCoord))

            BIND_MEMBER_OVERLOAD(wxDC, DrawEllipse,
                void, (wxCoord, wxCoord, wxCoord, wxCoord))
            BIND_MEMBER_OVERLOAD(wxDC, DrawEllipse,
                void, (const wxPoint&, const wxSize&))
            BIND_MEMBER_OVERLOAD(wxDC, DrawEllipse,
                void, (const wxRect&))

            BIND_MEMBER_OVERLOAD(wxDC, DrawIcon,
                void, (const wxIcon&, wxCoord, wxCoord))
            BIND_MEMBER_OVERLOAD(wxDC, DrawIcon,
                void, (const wxIcon&, const wxPoint&))

            BIND_MEMBER_OVERLOAD(wxDC, DrawBitmap,
                void, (const wxBitmap&, wxCoord, wxCoord, bool))
            BIND_MEMBER_OVERLOAD(wxDC, DrawBitmap,
                void, (const wxBitmap&, const wxPoint&, bool))

            BIND_MEMBER_OVERLOAD(wxDC, DrawText,
                void, (const wxString&, wxCoord, wxCoord))
            BIND_MEMBER_OVERLOAD(wxDC, DrawText,
                void, (const wxString&, const wxPoint&))

            BIND_MEMBER_OVERLOAD(wxDC, DrawRotatedText,
                void, (const wxString&, wxCoord, wxCoord, double))
            BIND_MEMBER_OVERLOAD(wxDC, DrawRotatedText,
                void, (const wxString&, const wxPoint&, double))

            BIND_MEMBER_OVERLOAD(wxDC, DrawLabel,
                void, (const wxString&, const wxBitmap&, const wxRect&,
                    int, int, wxRect*))
            BIND_MEMBER_OVERLOAD(wxDC, DrawLabel,
                void, (const wxString&, const wxRect&, int, int))

            // luabind only support 9 arguments
            //BIND_MEMBER_OVERLOAD(wxDC, Blit,
            //    bool, (wxCoord, wxCoord, wxCoord, wxCoord,
            //        wxDC*, wxCoord, wxCoord, int, bool, wxCoord, wxCoord))
            BIND_MEMBER_OVERLOAD(wxDC, Blit,
                bool, (const wxPoint&, const wxSize&,
                    wxDC*, const wxPoint&, int, bool, const wxPoint&))

            BIND_MEMBER_FUNC(wxDC, GetAsBitmap)
            BIND_MEMBER_FUNC(wxDC, Clear)
            BIND_MEMBER_FUNC(wxDC, StartDoc)
            BIND_MEMBER_FUNC(wxDC, EndDoc)
            BIND_MEMBER_FUNC(wxDC, StartPage)
            BIND_MEMBER_FUNC(wxDC, EndPage)

            BIND_MEMBER_FUNC(wxDC, SetFont)
            BIND_MEMBER_FUNC(wxDC, SetPen)
            BIND_MEMBER_FUNC(wxDC, SetBrush)
            BIND_MEMBER_FUNC(wxDC, SetBackground)
            BIND_MEMBER_FUNC(wxDC, SetBackgroundMode)

            BIND_MEMBER_OVERLOAD(wxDC, SetClippingRegion,
                void, (wxCoord, wxCoord, wxCoord, wxCoord))
            BIND_MEMBER_OVERLOAD(wxDC, SetClippingRegion,
                void, (const wxPoint&, const wxSize&))
            BIND_MEMBER_OVERLOAD(wxDC, SetClippingRegion,
                void, (const wxRect&))
            BIND_MEMBER_OVERLOAD(wxDC, SetClippingRegion,
                void, (const wxRegion&))

            BIND_MEMBER_FUNC(wxDC, DestroyClippingRegion)

            BIND_MEMBER_OVERLOAD(wxDC, GetClippingBox,
                void, (wxCoord*, wxCoord*, wxCoord*, wxCoord*) const)
            BIND_MEMBER_OVERLOAD(wxDC, GetClippingBox,
                void, (wxRect&) const)

            BIND_MEMBER_FUNC(wxDC, GetCharHeight)
            BIND_MEMBER_FUNC(wxDC, GetCharWidth)

            BIND_MEMBER_OVERLOAD(wxDC, GetTextExtent,
                void, (const wxString&, wxCoord *, wxCoord *,
                    wxCoord *, wxCoord *, wxFont *) const)
            BIND_MEMBER_OVERLOAD(wxDC, GetTextExtent,
                wxSize, (const wxString&) const)

            BIND_MEMBER_OVERLOAD(wxDC, GetMultiLineTextExtent,
                void, (const wxString&, wxCoord *, wxCoord *,
                    wxCoord *, wxFont *) const)
            BIND_MEMBER_OVERLOAD(wxDC, GetMultiLineTextExtent,
                wxSize, (const wxString&) const)

            BIND_MEMBER_FUNC(wxDC, GetPartialTextExtents)

            BIND_MEMBER_OVERLOAD(wxDC, GetSize,
                void, (int*, int*) const)
            BIND_MEMBER_OVERLOAD(wxDC, GetSize,
                wxSize, ()const)

            BIND_MEMBER_OVERLOAD(wxDC, GetSizeMM,
                void, (int*, int*) const)
            BIND_MEMBER_OVERLOAD(wxDC, GetSizeMM,
                wxSize, ()const)

            BIND_MEMBER_FUNC(wxDC, DeviceToLogicalX)
            BIND_MEMBER_FUNC(wxDC, DeviceToLogicalY)
            BIND_MEMBER_FUNC(wxDC, DeviceToLogicalXRel)
            BIND_MEMBER_FUNC(wxDC, DeviceToLogicalYRel)
            BIND_MEMBER_FUNC(wxDC, LogicalToDeviceX)
            BIND_MEMBER_FUNC(wxDC, LogicalToDeviceY)
            BIND_MEMBER_FUNC(wxDC, LogicalToDeviceXRel)
            BIND_MEMBER_FUNC(wxDC, LogicalToDeviceYRel)

            BIND_MEMBER_FUNC(wxDC, CanDrawBitmap)
            BIND_MEMBER_FUNC(wxDC, CanGetTextExtent)
            BIND_MEMBER_FUNC(wxDC, GetDepth)
            BIND_MEMBER_FUNC(wxDC, GetPPI)
            BIND_MEMBER_FUNC(wxDC, Ok)
            BIND_MEMBER_FUNC(wxDC, IsOk)
            BIND_MEMBER_FUNC(wxDC, GetBackgroundMode)
            BIND_MEMBER_FUNC(wxDC, GetBackground)
            BIND_MEMBER_FUNC(wxDC, GetBrush)
            BIND_MEMBER_FUNC(wxDC, GetFont)
            BIND_MEMBER_FUNC(wxDC, GetPen)
            BIND_MEMBER_FUNC(wxDC, GetTextForeground)
            BIND_MEMBER_FUNC(wxDC, GetTextBackground)
            BIND_MEMBER_FUNC(wxDC, SetTextForeground)
            BIND_MEMBER_FUNC(wxDC, SetTextBackground)
            BIND_MEMBER_FUNC(wxDC, GetMapMode)
            BIND_MEMBER_FUNC(wxDC, SetMapMode)
            BIND_MEMBER_FUNC(wxDC, GetUserScale)
            BIND_MEMBER_FUNC(wxDC, SetUserScale)
            BIND_MEMBER_FUNC(wxDC, GetLogicalScale)
            BIND_MEMBER_FUNC(wxDC, SetLogicalScale)

            BIND_MEMBER_OVERLOAD(wxDC, GetLogicalOrigin,
                void, (wxCoord*, wxCoord*) const)
            BIND_MEMBER_OVERLOAD(wxDC, GetLogicalOrigin,
                wxPoint, () const)

            BIND_MEMBER_FUNC(wxDC, SetLogicalOrigin)

            BIND_MEMBER_OVERLOAD(wxDC, GetDeviceOrigin,
                void, (wxCoord*, wxCoord*) const)
            BIND_MEMBER_OVERLOAD(wxDC, GetDeviceOrigin,
                wxPoint, () const)

            BIND_MEMBER_FUNC(wxDC, SetDeviceOrigin)

            BIND_MEMBER_FUNC(wxDC, ComputeScaleAndOrigin)
            BIND_MEMBER_FUNC(wxDC, SetAxisOrientation)
            BIND_MEMBER_FUNC(wxDC, GetLogicalFunction)
            BIND_MEMBER_FUNC(wxDC, SetLogicalFunction)

            BIND_MEMBER_FUNC(wxDC, CalcBoundingBox)
            BIND_MEMBER_FUNC(wxDC, ResetBoundingBox)

            BIND_MEMBER_FUNC(wxDC, MinX)
            BIND_MEMBER_FUNC(wxDC, MaxX)
            BIND_MEMBER_FUNC(wxDC, MinY)
            BIND_MEMBER_FUNC(wxDC, MaxY)

            BIND_MEMBER_OVERLOAD(wxDC, GetTextExtent,
                void, (const wxString&, wxCoord*, wxCoord*, wxCoord*, wxCoord*, wxFont*) const)
            BIND_MEMBER_OVERLOAD(wxDC, GetTextExtent,
                wxSize, (const wxString&) const)

            BIND_MEMBER_FUNC(wxDC, GetLayoutDirection)
            BIND_MEMBER_FUNC(wxDC, SetLayoutDirection)

        END_BIND_CLASS(wxDC)

        BEGIN_BIND_CLASS(wxDCTextColourChanger, DCTextColourChanger)
            BIND_CTOR(wxDC&)
            BIND_CTOR(wxDC&, const wxColour&)
            BIND_MEMBER_FUNC(wxDCTextColourChanger, Set)
        END_BIND_CLASS(wxDCTextColourChanger)

        BEGIN_BIND_CLASS(wxDCPenChanger, DCPenChanger)
            BIND_CTOR(wxDC&, const wxPen&)
        END_BIND_CLASS(wxDCPenChanger)

        BEGIN_BIND_CLASS(wxDCBrushChanger, DCBrushChanger)
            BIND_CTOR(wxDC&, const wxBrush&)
        END_BIND_CLASS(wxDCBrushChanger)

        BEGIN_BIND_CLASS(wxDCClipper, DCClipper)
            BIND_CTOR(wxDC&, const wxRegion&)
            BIND_CTOR(wxDC&, const wxRect&)
            BIND_CTOR(wxDC&, wxCoord, wxCoord, wxCoord, wxCoord)
        END_BIND_CLASS(wxDCClipper)

        BEGIN_BIND_CLASS_DERIVE(wxWindowDC, WindowDC, wxDC)
            BIND_CTOR()
            BIND_CTOR(wxWindow*)

    ];

    return 0;
}

