#include <precompile.h>

#include "gdicmn_bind.h"

namespace
{
    std::ostream& operator << (std::ostream& out, const wxSize& size)
    {
        out << "size: (w = " << size.x << ", h = " << size.y << ")";
        return out;
    }
    std::ostream& operator << (std::ostream& out, const wxPoint& pt)
    {
        out << "point: (x = " << pt.x << ", y = " << pt.y << ")";
        return out;
    }
}  // anonymous namespace

int luaopen_gdicmn(lua_State* L)
{
    module(L, "wx")
    [
        // wxSize bind
        BIND_CLASS(wxSize, Size)
            BIND_CTOR()
            BIND_CTOR_2(int, int)

            BIND_MEMBER_DATA(wxSize, x)
            BIND_MEMBER_DATA(wxSize, y)

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
        ,
        // wxPoint bind
        BIND_CLASS(wxPoint, Point)
            BIND_CTOR()
            BIND_CTOR_2(int, int)

            BIND_MEMBER_DATA(wxPoint, x)
            BIND_MEMBER_DATA(wxPoint, y)

            BIND_CLASS_PRINT()
    ];
    BEGIN_LUA_TABLE(wx)
        BIND_VARIABLE(wxDefaultSize)
        BIND_VARIABLE(wxDefaultPosition)
    END_LUA_TABLE(wx)
    return 0;
}