#include <precompile.h>

namespace
{
    object strlua2wx(const object luastr)
    {
        wxASSERT_MSG(luastr.is_valid(), wxT("Lua state is not valid for argument"));
        int luatype = type(luastr);

        lua_State* L = luastr.interpreter();
        if (luatype == LUA_TSTRING)
        {
            const char* pstr;
            size_t len = 0;
            pstr = lua_tolstring(L, 1, &len);

            wxString str(pstr, len);
            object obj(L, str);
            return obj;
        }
        return luastr;
    }
}

REGISTER_WXLUA_BIND(string)
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS(wxString)
            BIND_CTOR()
            BIND_CTOR(const wxString&)
            BIND_CTOR(wxChar, size_t)
            BIND_CTOR(size_t, wxChar)
            BIND_CTOR(const wxChar*)
            BIND_CTOR(const wxChar*, size_t)

            BIND_MF(wxString, Len)
            BIND_MF(wxString, IsEmpty)
            BIND_MF(wxString, Truncate)
            BIND_MF(wxString, Empty)
            BIND_MF(wxString, Clear)
            BIND_CLASS_PRINT()

        END_BIND_CLASS(wxString)

        BIND_FUNC_NAME(wxT, strlua2wx)
        BIND_FUNC_NAME(_T, strlua2wx)
        BIND_FUNC_NAME(_, strlua2wx)
    END_BIND_MODULE(wx)
END_REGISTER(string)
