#include <precompile.h>

// namespace for class wxDCBase
namespace
{
    // Auto generated CPP code for 'FloodFill'
    // =================================
    bool FloodFill3(wxDCBase* self, wxCoord x, wxCoord y, const wxColour& col)
    {
        return self->FloodFill(x,y,col);
    }
    bool FloodFill4(wxDCBase* self, wxCoord x, wxCoord y, const wxColour& col, int style)
    {
        return self->FloodFill(x,y,col,style);
    }

    // Auto generated CPP code for 'FloodFill'
    // =================================
    bool FloodFill2(wxDCBase* self, const wxPoint& pt, const wxColour& col)
    {
        return self->FloodFill(pt,col);
    }
    bool FloodFill3(wxDCBase* self, const wxPoint& pt, const wxColour& col, int style)
    {
        return self->FloodFill(pt,col,style);
    }

    // Auto generated CPP code for 'GradientFillLinear'
    // =================================
    void GradientFillLinear3(wxDCBase* self, const wxRect& rect, const wxColour& initialColour, const wxColour& destColour)
    {
        return self->GradientFillLinear(rect,initialColour,destColour);
    }
    void GradientFillLinear4(wxDCBase* self, const wxRect& rect, const wxColour& initialColour, const wxColour& destColour, wxDirection nDirection)
    {
        return self->GradientFillLinear(rect,initialColour,destColour,nDirection);
    }

    // Auto generated CPP code for 'DrawLines'
    // =================================
    void DrawLines2(wxDCBase* self, int n, wxPoint points[])
    {
        return self->DrawLines(n,points);
    }
    void DrawLines3(wxDCBase* self, int n, wxPoint points[], wxCoord xoffset)
    {
        return self->DrawLines(n,points,xoffset);
    }
    void DrawLines4(wxDCBase* self, int n, wxPoint points[], wxCoord xoffset, wxCoord yoffset)
    {
        return self->DrawLines(n,points,xoffset,yoffset);
    }

    // Auto generated CPP code for 'DrawLines'
    // =================================
    void DrawLines1(wxDCBase* self, const wxList * list)
    {
        return self->DrawLines(list);
    }
    void DrawLines2(wxDCBase* self, const wxList * list, wxCoord xoffset)
    {
        return self->DrawLines(list,xoffset);
    }
    void DrawLines3(wxDCBase* self, const wxList * list, wxCoord xoffset, wxCoord yoffset)
    {
        return self->DrawLines(list,xoffset,yoffset);
    }

    // Auto generated CPP code for 'DrawPolygon'
    // =================================
    void DrawPolygon2(wxDCBase* self, int n, wxPoint points[])
    {
        return self->DrawPolygon(n,points);
    }
    void DrawPolygon3(wxDCBase* self, int n, wxPoint points[], wxCoord xoffset)
    {
        return self->DrawPolygon(n,points,xoffset);
    }
    void DrawPolygon4(wxDCBase* self, int n, wxPoint points[], wxCoord xoffset, wxCoord yoffset)
    {
        return self->DrawPolygon(n,points,xoffset,yoffset);
    }
    void DrawPolygon5(wxDCBase* self, int n, wxPoint points[], wxCoord xoffset, wxCoord yoffset, int fillStyle)
    {
        return self->DrawPolygon(n,points,xoffset,yoffset,fillStyle);
    }

    // Auto generated CPP code for 'DrawPolygon'
    // =================================
    void DrawPolygon1(wxDCBase* self, const wxList * list)
    {
        return self->DrawPolygon(list);
    }
    void DrawPolygon2(wxDCBase* self, const wxList * list, wxCoord xoffset)
    {
        return self->DrawPolygon(list,xoffset);
    }
    void DrawPolygon3(wxDCBase* self, const wxList * list, wxCoord xoffset, wxCoord yoffset)
    {
        return self->DrawPolygon(list,xoffset,yoffset);
    }
    void DrawPolygon4(wxDCBase* self, const wxList * list, wxCoord xoffset, wxCoord yoffset, int fillStyle)
    {
        return self->DrawPolygon(list,xoffset,yoffset,fillStyle);
    }

    // Auto generated CPP code for 'DrawPolyPolygon'
    // =================================
    void DrawPolyPolygon3(wxDCBase* self, int n, int count[], wxPoint points[])
    {
        return self->DrawPolyPolygon(n,count,points);
    }
    void DrawPolyPolygon4(wxDCBase* self, int n, int count[], wxPoint points[], wxCoord xoffset)
    {
        return self->DrawPolyPolygon(n,count,points,xoffset);
    }
    void DrawPolyPolygon5(wxDCBase* self, int n, int count[], wxPoint points[], wxCoord xoffset, wxCoord yoffset)
    {
        return self->DrawPolyPolygon(n,count,points,xoffset,yoffset);
    }
    void DrawPolyPolygon6(wxDCBase* self, int n, int count[], wxPoint points[], wxCoord xoffset, wxCoord yoffset, int fillStyle)
    {
        return self->DrawPolyPolygon(n,count,points,xoffset,yoffset,fillStyle);
    }

    // Auto generated CPP code for 'DrawBitmap'
    // =================================
    void DrawBitmap3(wxDCBase* self, const wxBitmap & bmp, wxCoord x, wxCoord y)
    {
        return self->DrawBitmap(bmp,x,y);
    }
    void DrawBitmap4(wxDCBase* self, const wxBitmap & bmp, wxCoord x, wxCoord y, bool useMask)
    {
        return self->DrawBitmap(bmp,x,y,useMask);
    }

    // Auto generated CPP code for 'DrawBitmap'
    // =================================
    void DrawBitmap2(wxDCBase* self, const wxBitmap & bmp, const wxPoint& pt)
    {
        return self->DrawBitmap(bmp,pt);
    }
    void DrawBitmap3(wxDCBase* self, const wxBitmap & bmp, const wxPoint& pt, bool useMask)
    {
        return self->DrawBitmap(bmp,pt,useMask);
    }

    // Auto generated CPP code for 'DrawLabel'
    // =================================
    void DrawLabel3(wxDCBase* self, const wxString& text, const wxBitmap& image, const wxRect& rect)
    {
        return self->DrawLabel(text,image,rect);
    }
    void DrawLabel4(wxDCBase* self, const wxString& text, const wxBitmap& image, const wxRect& rect, int alignment)
    {
        return self->DrawLabel(text,image,rect,alignment);
    }
    void DrawLabel5(wxDCBase* self, const wxString& text, const wxBitmap& image, const wxRect& rect, int alignment, int indexAccel)
    {
        return self->DrawLabel(text,image,rect,alignment,indexAccel);
    }
    void DrawLabel6(wxDCBase* self, const wxString& text, const wxBitmap& image, const wxRect& rect, int alignment, int indexAccel, wxRect * rectBounding)
    {
        return self->DrawLabel(text,image,rect,alignment,indexAccel,rectBounding);
    }

    // Auto generated CPP code for 'DrawLabel'
    // =================================
    void DrawLabel2(wxDCBase* self, const wxString& text, const wxRect& rect)
    {
        return self->DrawLabel(text,rect);
    }
    void DrawLabel3(wxDCBase* self, const wxString& text, const wxRect& rect, int alignment)
    {
        return self->DrawLabel(text,rect,alignment);
    }
    void DrawLabel4(wxDCBase* self, const wxString& text, const wxRect& rect, int alignment, int indexAccel)
    {
        return self->DrawLabel(text,rect,alignment,indexAccel);
    }

    // Auto generated CPP code for 'Blit'
    // =================================
    bool Blit7(wxDCBase* self, wxCoord xdest, wxCoord ydest, wxCoord width, wxCoord height, wxDC * source, wxCoord xsrc, wxCoord ysrc)
    {
        return self->Blit(xdest,ydest,width,height,source,xsrc,ysrc);
    }
    bool Blit8(wxDCBase* self, wxCoord xdest, wxCoord ydest, wxCoord width, wxCoord height, wxDC * source, wxCoord xsrc, wxCoord ysrc, int rop)
    {
        return self->Blit(xdest,ydest,width,height,source,xsrc,ysrc,rop);
    }
    bool Blit9(wxDCBase* self, wxCoord xdest, wxCoord ydest, wxCoord width, wxCoord height, wxDC * source, wxCoord xsrc, wxCoord ysrc, int rop, bool useMask)
    {
        return self->Blit(xdest,ydest,width,height,source,xsrc,ysrc,rop,useMask);
    }
    bool Blit10(wxDCBase* self, wxCoord xdest, wxCoord ydest, wxCoord width, wxCoord height, wxDC * source, wxCoord xsrc, wxCoord ysrc, int rop, bool useMask, wxCoord xsrcMask)
    {
        return self->Blit(xdest,ydest,width,height,source,xsrc,ysrc,rop,useMask,xsrcMask);
    }
    bool Blit11(wxDCBase* self, wxCoord xdest, wxCoord ydest, wxCoord width, wxCoord height, wxDC * source, wxCoord xsrc, wxCoord ysrc, int rop, bool useMask, wxCoord xsrcMask, wxCoord ysrcMask)
    {
        return self->Blit(xdest,ydest,width,height,source,xsrc,ysrc,rop,useMask,xsrcMask,ysrcMask);
    }

    // Auto generated CPP code for 'Blit'
    // =================================
    bool Blit4(wxDCBase* self, const wxPoint& destPt, const wxSize& sz, wxDC * source, const wxPoint& srcPt)
    {
        return self->Blit(destPt,sz,source,srcPt);
    }
    bool Blit5(wxDCBase* self, const wxPoint& destPt, const wxSize& sz, wxDC * source, const wxPoint& srcPt, int rop)
    {
        return self->Blit(destPt,sz,source,srcPt,rop);
    }
    bool Blit6(wxDCBase* self, const wxPoint& destPt, const wxSize& sz, wxDC * source, const wxPoint& srcPt, int rop, bool useMask)
    {
        return self->Blit(destPt,sz,source,srcPt,rop,useMask);
    }
    bool Blit7(wxDCBase* self, const wxPoint& destPt, const wxSize& sz, wxDC * source, const wxPoint& srcPt, int rop, bool useMask, const wxPoint& srcPtMask)
    {
        return self->Blit(destPt,sz,source,srcPt,rop,useMask,srcPtMask);
    }

    // Auto generated CPP code for 'GetAsBitmap'
    // =================================
    wxBitmap GetAsBitmap0(wxDCBase* self)
    {
        return self->GetAsBitmap();
    }
    wxBitmap GetAsBitmap1(wxDCBase* self, const wxRect * subrect)
    {
        return self->GetAsBitmap(subrect);
    }

    // Auto generated CPP code for 'GetTextExtent'
    // =================================
    void GetTextExtent3(wxDCBase* self, const wxString& string, wxCoord * x, wxCoord * y)
    {
        return self->GetTextExtent(string,x,y);
    }
    void GetTextExtent4(wxDCBase* self, const wxString& string, wxCoord * x, wxCoord * y, wxCoord * descent)
    {
        return self->GetTextExtent(string,x,y,descent);
    }
    void GetTextExtent5(wxDCBase* self, const wxString& string, wxCoord * x, wxCoord * y, wxCoord * descent, wxCoord * externalLeading)
    {
        return self->GetTextExtent(string,x,y,descent,externalLeading);
    }
    void GetTextExtent6(wxDCBase* self, const wxString& string, wxCoord * x, wxCoord * y, wxCoord * descent, wxCoord * externalLeading, wxFont * theFont)
    {
        return self->GetTextExtent(string,x,y,descent,externalLeading,theFont);
    }

    // Auto generated CPP code for 'GetMultiLineTextExtent'
    // =================================
    void GetMultiLineTextExtent3(wxDCBase* self, const wxString& string, wxCoord * width, wxCoord * height)
    {
        return self->GetMultiLineTextExtent(string,width,height);
    }
    void GetMultiLineTextExtent4(wxDCBase* self, const wxString& string, wxCoord * width, wxCoord * height, wxCoord * heightLine)
    {
        return self->GetMultiLineTextExtent(string,width,height,heightLine);
    }
    void GetMultiLineTextExtent5(wxDCBase* self, const wxString& string, wxCoord * width, wxCoord * height, wxCoord * heightLine, wxFont * font)
    {
        return self->GetMultiLineTextExtent(string,width,height,heightLine,font);
    }

    // Auto generated CPP code for 'GetTextExtent'
    // =================================
    void GetTextExtent3(wxDCBase* self, const wxString& string, long * x, long * y)
    {
        return self->GetTextExtent(string,x,y);
    }
    void GetTextExtent4(wxDCBase* self, const wxString& string, long * x, long * y, long * descent)
    {
        return self->GetTextExtent(string,x,y,descent);
    }
    void GetTextExtent5(wxDCBase* self, const wxString& string, long * x, long * y, long * descent, long * externalLeading)
    {
        return self->GetTextExtent(string,x,y,descent,externalLeading);
    }
    void GetTextExtent6(wxDCBase* self, const wxString& string, long * x, long * y, long * descent, long * externalLeading, wxFont * theFont)
    {
        return self->GetTextExtent(string,x,y,descent,externalLeading,theFont);
    }
}  // namespace for wxDCBase

REGISTER_WXLUA_PREBIND(dc, BIND_NO_DC)
    BEGIN_BIND_MODULE(wx)
        // Bind class wxDrawObject
        BEGIN_BIND_CLASS(wxDrawObject)
        BIND_MF(wxDrawObject, Draw)
        BIND_MF(wxDrawObject, CalcBoundingBox)
        BIND_MF(wxDrawObject, ResetBoundingBox)
        BIND_MF(wxDrawObject, MinX)
        BIND_MF(wxDrawObject, MaxX)
        BIND_MF(wxDrawObject, MinY)
        BIND_MF(wxDrawObject, MaxY)
        BIND_MF(wxDrawObject, GetType)
        END_BIND_CLASS(wxDrawObject)

        // Bind class wxDCBase
        BEGIN_BIND_CLASS_OBJECT(wxDCBase)
        BIND_MF(wxDCBase, DrawObject)
        // Auto generated MACRO code for 'FloodFill':
        // =================================
        BIND_F2MF_OVERLOAD(FloodFill, 3,
        bool, (wxDCBase*, wxCoord, wxCoord, const wxColour&))
        BIND_F2MF_OVERLOAD(FloodFill, 4,
        bool, (wxDCBase*, wxCoord, wxCoord, const wxColour&, int))
        // Auto generated MACRO code for 'FloodFill':
        // =================================
        BIND_F2MF_OVERLOAD(FloodFill, 2,
        bool, (wxDCBase*, const wxPoint&, const wxColour&))
        BIND_F2MF_OVERLOAD(FloodFill, 3,
        bool, (wxDCBase*, const wxPoint&, const wxColour&, int))
        BIND_MF_OVERLOAD(wxDCBase, GradientFillConcentric,
        void, (const wxRect&, const wxColour&, const wxColour&))
        BIND_MF_OVERLOAD(wxDCBase, GradientFillConcentric,
        void, (const wxRect&, const wxColour&, const wxColour&, const wxPoint&))
        // Auto generated MACRO code for 'GradientFillLinear':
        // =================================
        BIND_F2MF_OVERLOAD(GradientFillLinear, 3,
        void, (wxDCBase*, const wxRect&, const wxColour&, const wxColour&))
        BIND_F2MF_OVERLOAD(GradientFillLinear, 4,
        void, (wxDCBase*, const wxRect&, const wxColour&, const wxColour&, wxDirection))
        BIND_MF_OVERLOAD(wxDCBase, GetPixel,
        bool, (wxCoord, wxCoord, wxColour *) const)
        BIND_MF_OVERLOAD(wxDCBase, GetPixel,
        bool, (const wxPoint&, wxColour *) const)
        BIND_MF_OVERLOAD(wxDCBase, DrawLine,
        void, (wxCoord, wxCoord, wxCoord, wxCoord))
        BIND_MF_OVERLOAD(wxDCBase, DrawLine,
        void, (const wxPoint&, const wxPoint&))
        BIND_MF_OVERLOAD(wxDCBase, CrossHair,
        void, (wxCoord, wxCoord))
        BIND_MF_OVERLOAD(wxDCBase, CrossHair,
        void, (const wxPoint&))
        BIND_MF_OVERLOAD(wxDCBase, DrawArc,
        void, (wxCoord, wxCoord, wxCoord, wxCoord, wxCoord, wxCoord))
        BIND_MF_OVERLOAD(wxDCBase, DrawArc,
        void, (const wxPoint&, const wxPoint&, const wxPoint&))
        BIND_MF_OVERLOAD(wxDCBase, DrawCheckMark,
        void, (wxCoord, wxCoord, wxCoord, wxCoord))
        BIND_MF_OVERLOAD(wxDCBase, DrawCheckMark,
        void, (const wxRect&))
        BIND_MF_OVERLOAD(wxDCBase, DrawEllipticArc,
        void, (wxCoord, wxCoord, wxCoord, wxCoord, double, double))
        BIND_MF_OVERLOAD(wxDCBase, DrawEllipticArc,
        void, (const wxPoint&, const wxSize&, double, double))
        BIND_MF_OVERLOAD(wxDCBase, DrawPoint,
        void, (wxCoord, wxCoord))
        BIND_MF_OVERLOAD(wxDCBase, DrawPoint,
        void, (const wxPoint&))
        // Auto generated MACRO code for 'DrawLines':
        // =================================
        BIND_F2MF_OVERLOAD(DrawLines, 2,
        void, (wxDCBase*, int, wxPoint*))
        BIND_F2MF_OVERLOAD(DrawLines, 3,
        void, (wxDCBase*, int, wxPoint*, wxCoord))
        BIND_F2MF_OVERLOAD(DrawLines, 4,
        void, (wxDCBase*, int, wxPoint*, wxCoord, wxCoord))
        // Auto generated MACRO code for 'DrawLines':
        // =================================
        BIND_F2MF_OVERLOAD(DrawLines, 1,
        void, (wxDCBase*, const wxList *))
        BIND_F2MF_OVERLOAD(DrawLines, 2,
        void, (wxDCBase*, const wxList *, wxCoord))
        BIND_F2MF_OVERLOAD(DrawLines, 3,
        void, (wxDCBase*, const wxList *, wxCoord, wxCoord))
        // Auto generated MACRO code for 'DrawPolygon':
        // =================================
        BIND_F2MF_OVERLOAD(DrawPolygon, 2,
        void, (wxDCBase*, int, wxPoint*))
        BIND_F2MF_OVERLOAD(DrawPolygon, 3,
        void, (wxDCBase*, int, wxPoint*, wxCoord))
        BIND_F2MF_OVERLOAD(DrawPolygon, 4,
        void, (wxDCBase*, int, wxPoint*, wxCoord, wxCoord))
        BIND_F2MF_OVERLOAD(DrawPolygon, 5,
        void, (wxDCBase*, int, wxPoint*, wxCoord, wxCoord, int))
        // Auto generated MACRO code for 'DrawPolygon':
        // =================================
        BIND_F2MF_OVERLOAD(DrawPolygon, 1,
        void, (wxDCBase*, const wxList *))
        BIND_F2MF_OVERLOAD(DrawPolygon, 2,
        void, (wxDCBase*, const wxList *, wxCoord))
        BIND_F2MF_OVERLOAD(DrawPolygon, 3,
        void, (wxDCBase*, const wxList *, wxCoord, wxCoord))
        BIND_F2MF_OVERLOAD(DrawPolygon, 4,
        void, (wxDCBase*, const wxList *, wxCoord, wxCoord, int))
        // Auto generated MACRO code for 'DrawPolyPolygon':
        // =================================
        BIND_F2MF_OVERLOAD(DrawPolyPolygon, 3,
        void, (wxDCBase*, int, int, wxPoint))
        BIND_F2MF_OVERLOAD(DrawPolyPolygon, 4,
        void, (wxDCBase*, int, int, wxPoint, wxCoord))
        BIND_F2MF_OVERLOAD(DrawPolyPolygon, 5,
        void, (wxDCBase*, int, int, wxPoint, wxCoord, wxCoord))
        BIND_F2MF_OVERLOAD(DrawPolyPolygon, 6,
        void, (wxDCBase*, int, int, wxPoint, wxCoord, wxCoord, int))
        BIND_MF_OVERLOAD(wxDCBase, DrawRectangle,
        void, (wxCoord, wxCoord, wxCoord, wxCoord))
        BIND_MF_OVERLOAD(wxDCBase, DrawRectangle,
        void, (const wxPoint&, const wxSize&))
        BIND_MF_OVERLOAD(wxDCBase, DrawRectangle,
        void, (const wxRect&))
        BIND_MF_OVERLOAD(wxDCBase, DrawRoundedRectangle,
        void, (wxCoord, wxCoord, wxCoord, wxCoord, double))
        BIND_MF_OVERLOAD(wxDCBase, DrawRoundedRectangle,
        void, (const wxPoint&, const wxSize&, double))
        BIND_MF_OVERLOAD(wxDCBase, DrawRoundedRectangle,
        void, (const wxRect&, double))
        BIND_MF_OVERLOAD(wxDCBase, DrawCircle,
        void, (wxCoord, wxCoord, wxCoord))
        BIND_MF_OVERLOAD(wxDCBase, DrawCircle,
        void, (const wxPoint&, wxCoord))
        BIND_MF_OVERLOAD(wxDCBase, DrawEllipse,
        void, (wxCoord, wxCoord, wxCoord, wxCoord))
        BIND_MF_OVERLOAD(wxDCBase, DrawEllipse,
        void, (const wxPoint&, const wxSize&))
        BIND_MF_OVERLOAD(wxDCBase, DrawEllipse,
        void, (const wxRect&))
        BIND_MF_OVERLOAD(wxDCBase, DrawIcon,
        void, (const wxIcon&, wxCoord, wxCoord))
        BIND_MF_OVERLOAD(wxDCBase, DrawIcon,
        void, (const wxIcon&, const wxPoint&))
        // Auto generated MACRO code for 'DrawBitmap':
        // =================================
        BIND_F2MF_OVERLOAD(DrawBitmap, 3,
        void, (wxDCBase*, const wxBitmap &, wxCoord, wxCoord))
        BIND_F2MF_OVERLOAD(DrawBitmap, 4,
        void, (wxDCBase*, const wxBitmap &, wxCoord, wxCoord, bool))
        // Auto generated MACRO code for 'DrawBitmap':
        // =================================
        BIND_F2MF_OVERLOAD(DrawBitmap, 2,
        void, (wxDCBase*, const wxBitmap &, const wxPoint&))
        BIND_F2MF_OVERLOAD(DrawBitmap, 3,
        void, (wxDCBase*, const wxBitmap &, const wxPoint&, bool))
        BIND_MF_OVERLOAD(wxDCBase, DrawText,
        void, (const wxString&, wxCoord, wxCoord))
        BIND_MF_OVERLOAD(wxDCBase, DrawText,
        void, (const wxString&, const wxPoint&))
        BIND_MF_OVERLOAD(wxDCBase, DrawRotatedText,
        void, (const wxString&, wxCoord, wxCoord, double))
        BIND_MF_OVERLOAD(wxDCBase, DrawRotatedText,
        void, (const wxString&, const wxPoint&, double))
        // Auto generated MACRO code for 'DrawLabel':
        // =================================
        BIND_F2MF_OVERLOAD(DrawLabel, 3,
        void, (wxDCBase*, const wxString&, const wxBitmap&, const wxRect&))
        BIND_F2MF_OVERLOAD(DrawLabel, 4,
        void, (wxDCBase*, const wxString&, const wxBitmap&, const wxRect&, int))
        BIND_F2MF_OVERLOAD(DrawLabel, 5,
        void, (wxDCBase*, const wxString&, const wxBitmap&, const wxRect&, int, int))
        BIND_F2MF_OVERLOAD(DrawLabel, 6,
        void, (wxDCBase*, const wxString&, const wxBitmap&, const wxRect&, int, int, wxRect *))
        // Auto generated MACRO code for 'DrawLabel':
        // =================================
        BIND_F2MF_OVERLOAD(DrawLabel, 2,
        void, (wxDCBase*, const wxString&, const wxRect&))
        BIND_F2MF_OVERLOAD(DrawLabel, 3,
        void, (wxDCBase*, const wxString&, const wxRect&, int))
        BIND_F2MF_OVERLOAD(DrawLabel, 4,
        void, (wxDCBase*, const wxString&, const wxRect&, int, int))
        // Auto generated MACRO code for 'Blit':
        // =================================
        BIND_F2MF_OVERLOAD(Blit, 7,
        bool, (wxDCBase*, wxCoord, wxCoord, wxCoord, wxCoord, wxDC *, wxCoord, wxCoord))
        BIND_F2MF_OVERLOAD(Blit, 8,
        bool, (wxDCBase*, wxCoord, wxCoord, wxCoord, wxCoord, wxDC *, wxCoord, wxCoord, int))
        BIND_F2MF_OVERLOAD(Blit, 9,
        bool, (wxDCBase*, wxCoord, wxCoord, wxCoord, wxCoord, wxDC *, wxCoord, wxCoord, int, bool))
#if 0 // FIXME: over 10 arguments
        BIND_F2MF_OVERLOAD(Blit, 10,
        bool, (wxDCBase*, wxCoord, wxCoord, wxCoord, wxCoord, wxDC *, wxCoord, wxCoord, int, bool, wxCoord))
        BIND_F2MF_OVERLOAD(Blit, 11,
        bool, (wxDCBase*, wxCoord, wxCoord, wxCoord, wxCoord, wxDC *, wxCoord, wxCoord, int, bool, wxCoord, wxCoord))
#endif
        // Auto generated MACRO code for 'Blit':
        // =================================
        BIND_F2MF_OVERLOAD(Blit, 4,
        bool, (wxDCBase*, const wxPoint&, const wxSize&, wxDC *, const wxPoint&))
        BIND_F2MF_OVERLOAD(Blit, 5,
        bool, (wxDCBase*, const wxPoint&, const wxSize&, wxDC *, const wxPoint&, int))
        BIND_F2MF_OVERLOAD(Blit, 6,
        bool, (wxDCBase*, const wxPoint&, const wxSize&, wxDC *, const wxPoint&, int, bool))
        BIND_F2MF_OVERLOAD(Blit, 7,
        bool, (wxDCBase*, const wxPoint&, const wxSize&, wxDC *, const wxPoint&, int, bool, const wxPoint&))
        // Auto generated MACRO code for 'GetAsBitmap':
        // =================================
        BIND_F2MF_OVERLOAD(GetAsBitmap, 0,
        wxBitmap, (wxDCBase*))
        BIND_F2MF_OVERLOAD(GetAsBitmap, 1,
        wxBitmap, (wxDCBase*, const wxRect *))
        BIND_MF_OVERLOAD(wxDCBase, DrawSpline,
        void, (wxCoord, wxCoord, wxCoord, wxCoord, wxCoord, wxCoord))
        BIND_MF_OVERLOAD(wxDCBase, DrawSpline,
        void, (int, wxPoint*))
        BIND_MF_OVERLOAD(wxDCBase, DrawSpline,
        void, (wxList *))
        BIND_MF(wxDCBase, Clear)
        BIND_MF(wxDCBase, StartDoc)
        BIND_MF(wxDCBase, EndDoc)
        BIND_MF(wxDCBase, StartPage)
        BIND_MF(wxDCBase, EndPage)
        BIND_MF(wxDCBase, SetFont)
        BIND_MF(wxDCBase, SetPen)
        BIND_MF(wxDCBase, SetBrush)
        BIND_MF(wxDCBase, SetBackground)
        BIND_MF(wxDCBase, SetBackgroundMode)
        BIND_MF(wxDCBase, SetPalette)
        BIND_MF_OVERLOAD(wxDCBase, SetClippingRegion,
        void, (wxCoord, wxCoord, wxCoord, wxCoord))
        BIND_MF_OVERLOAD(wxDCBase, SetClippingRegion,
        void, (const wxPoint&, const wxSize&))
        BIND_MF_OVERLOAD(wxDCBase, SetClippingRegion,
        void, (const wxRect&))
        BIND_MF_OVERLOAD(wxDCBase, SetClippingRegion,
        void, (const wxRegion&))
        BIND_MF(wxDCBase, DestroyClippingRegion)
        BIND_MF_OVERLOAD(wxDCBase, GetClippingBox,
        void, (wxCoord *, wxCoord *, wxCoord *, wxCoord *) const)
        BIND_MF_OVERLOAD(wxDCBase, GetClippingBox,
        void, (wxRect&) const)
        BIND_MF(wxDCBase, GetCharHeight)
        BIND_MF(wxDCBase, GetCharWidth)
        // Auto generated MACRO code for 'GetTextExtent':
        // =================================
        BIND_F2MF_OVERLOAD(GetTextExtent, 3,
        void, (wxDCBase*, const wxString&, wxCoord *, wxCoord *))
        BIND_F2MF_OVERLOAD(GetTextExtent, 4,
        void, (wxDCBase*, const wxString&, wxCoord *, wxCoord *, wxCoord *))
        BIND_F2MF_OVERLOAD(GetTextExtent, 5,
        void, (wxDCBase*, const wxString&, wxCoord *, wxCoord *, wxCoord *, wxCoord *))
        BIND_F2MF_OVERLOAD(GetTextExtent, 6,
        void, (wxDCBase*, const wxString&, wxCoord *, wxCoord *, wxCoord *, wxCoord *, wxFont *))
        BIND_MF_OVERLOAD(wxDCBase, GetTextExtent,
        wxSize, (const wxString&) const)
        // Auto generated MACRO code for 'GetMultiLineTextExtent':
        // =================================
        BIND_F2MF_OVERLOAD(GetMultiLineTextExtent, 3,
        void, (wxDCBase*, const wxString&, wxCoord *, wxCoord *))
        BIND_F2MF_OVERLOAD(GetMultiLineTextExtent, 4,
        void, (wxDCBase*, const wxString&, wxCoord *, wxCoord *, wxCoord *))
        BIND_F2MF_OVERLOAD(GetMultiLineTextExtent, 5,
        void, (wxDCBase*, const wxString&, wxCoord *, wxCoord *, wxCoord *, wxFont *))
        BIND_MF_OVERLOAD(wxDCBase, GetMultiLineTextExtent,
        wxSize, (const wxString&) const)
        BIND_MF(wxDCBase, GetPartialTextExtents)
        BIND_MF_OVERLOAD(wxDCBase, GetSize,
        void, (int *, int *) const)
        BIND_MF_OVERLOAD(wxDCBase, GetSize,
        wxSize, () const)
        BIND_MF_OVERLOAD(wxDCBase, GetSizeMM,
        void, (int*, int*) const)
        BIND_MF_OVERLOAD(wxDCBase, GetSizeMM,
        wxSize, () const)
        BIND_MF(wxDCBase, DeviceToLogicalX)
        BIND_MF(wxDCBase, DeviceToLogicalY)
        BIND_MF(wxDCBase, DeviceToLogicalXRel)
        BIND_MF(wxDCBase, DeviceToLogicalYRel)
        BIND_MF(wxDCBase, LogicalToDeviceX)
        BIND_MF(wxDCBase, LogicalToDeviceY)
        BIND_MF(wxDCBase, LogicalToDeviceXRel)
        BIND_MF(wxDCBase, LogicalToDeviceYRel)
        BIND_MF(wxDCBase, CanDrawBitmap)
        BIND_MF(wxDCBase, CanGetTextExtent)
        BIND_MF(wxDCBase, GetDepth)
        BIND_MF(wxDCBase, GetPPI)
        BIND_MF(wxDCBase, Ok)
        BIND_MF(wxDCBase, IsOk)
        BIND_MF(wxDCBase, GetBackgroundMode)
        BIND_MF(wxDCBase, GetBackground)
        BIND_MF(wxDCBase, GetBrush)
        BIND_MF(wxDCBase, GetFont)
        BIND_MF(wxDCBase, GetPen)
        BIND_MF(wxDCBase, GetTextForeground)
        BIND_MF(wxDCBase, GetTextBackground)
        BIND_MF(wxDCBase, SetTextForeground)
        BIND_MF(wxDCBase, SetTextBackground)
        BIND_MF(wxDCBase, GetMapMode)
        BIND_MF(wxDCBase, SetMapMode)
        BIND_MF(wxDCBase, GetUserScale)
        BIND_MF(wxDCBase, SetUserScale)
        BIND_MF(wxDCBase, GetLogicalScale)
        BIND_MF(wxDCBase, SetLogicalScale)
        BIND_MF_OVERLOAD(wxDCBase, GetLogicalOrigin,
        void, (wxCoord *, wxCoord *) const)
        BIND_MF_OVERLOAD(wxDCBase, GetLogicalOrigin,
        wxPoint, () const)
        BIND_MF(wxDCBase, SetLogicalOrigin)
        BIND_MF_OVERLOAD(wxDCBase, GetDeviceOrigin,
        void, (wxCoord *, wxCoord *) const)
        BIND_MF_OVERLOAD(wxDCBase, GetDeviceOrigin,
        wxPoint, () const)
        BIND_MF(wxDCBase, SetDeviceOrigin)
        BIND_MF(wxDCBase, ComputeScaleAndOrigin)
        BIND_MF(wxDCBase, SetAxisOrientation)
        BIND_MF(wxDCBase, GetLogicalFunction)
        BIND_MF(wxDCBase, SetLogicalFunction)
        BIND_MF(wxDCBase, CalcBoundingBox)
        BIND_MF(wxDCBase, ResetBoundingBox)
        BIND_MF(wxDCBase, MinX)
        BIND_MF(wxDCBase, MaxX)
        BIND_MF(wxDCBase, MinY)
        BIND_MF(wxDCBase, MaxY)
        // Auto generated MACRO code for 'GetTextExtent':
        // =================================
        BIND_F2MF_OVERLOAD(GetTextExtent, 3,
        void, (wxDCBase*, const wxString&, long *, long *))
        BIND_F2MF_OVERLOAD(GetTextExtent, 4,
        void, (wxDCBase*, const wxString&, long *, long *, long *))
        BIND_F2MF_OVERLOAD(GetTextExtent, 5,
        void, (wxDCBase*, const wxString&, long *, long *, long *, long *))
        BIND_F2MF_OVERLOAD(GetTextExtent, 6,
        void, (wxDCBase*, const wxString&, long *, long *, long *, long *, wxFont *))
        BIND_MF_OVERLOAD(wxDCBase, GetLogicalOrigin,
        void, (long *, long *) const)
        BIND_MF_OVERLOAD(wxDCBase, GetDeviceOrigin,
        void, (long *, long *) const)
        BIND_MF_OVERLOAD(wxDCBase, GetClippingBox,
        void, (long *, long *, long *, long *) const)
        BIND_MF(wxDCBase, GetLayoutDirection)
        BIND_MF(wxDCBase, SetLayoutDirection)
        END_BIND_CLASS(wxDCBase)

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

        BEGIN_BIND_CLASS(wxDC, wxDCBase)
        END_BIND_CLASS(wxDC)

        // Bind class wxDCTemp
        BEGIN_BIND_CLASS(wxDCTemp)
        // Auto generated MACRO code for ctor of 'wxDCTemp':
        // =================================
        BIND_CTOR(WXHDC)
        BIND_CTOR(WXHDC, const wxSize&)
        END_BIND_CLASS(wxDCTemp)

        BEGIN_BIND_CLASS(wxWindowDC, wxDC)
        BIND_CTOR()
        BIND_CTOR(wxWindow*)
        END_BIND_CLASS(wxWindowDC)

        // Bind class wxClientDC
        BEGIN_BIND_CLASS(wxClientDC, wxWindowDC)
        // Auto generated MACRO code for ctor of 'wxClientDC':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxClientDC':
        // =================================
        BIND_CTOR(wxWindow *)
        END_BIND_CLASS(wxClientDC)

        // Bind class wxPaintDC
        BEGIN_BIND_CLASS(wxPaintDC, wxClientDC)
        // Auto generated MACRO code for ctor of 'wxPaintDC':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxPaintDC':
        // =================================
        BIND_CTOR(wxWindow *)
        END_BIND_CLASS(wxPaintDC)

    END_BIND_MODULE(wx)
END_REGISTER(dc)
