#include <precompile.h>

REGISTER_WXLUA_BIND(cursor)
    BEGIN_BIND_MODULE(wx)
        // Bind class wxCursor
        BEGIN_BIND_CLASS_OBJECT(wxCursor)
#if defined (__WXMSW__)
        // Auto generated MACRO code for ctor of 'wxCursor':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxCursor':
        // =================================
        BIND_CTOR(const wxImage&)
        // Auto generated MACRO code for ctor of 'wxCursor':
        // =================================
        BIND_CTOR(const char*, int, int)
        BIND_CTOR(const char*, int, int, int)
        BIND_CTOR(const char*, int, int, int, int)
        BIND_CTOR(const char*, int, int, int, int, const char*)
        // Auto generated MACRO code for ctor of 'wxCursor':
        // =================================
        BIND_CTOR(const wxString&)
        BIND_CTOR(const wxString&, long)
        BIND_CTOR(const wxString&, long, int)
        BIND_CTOR(const wxString&, long, int, int)
        // Auto generated MACRO code for ctor of 'wxCursor':
        // =================================
        BIND_CTOR(int)
#elif defined(__WXGTK20__)
        // Bind class wxCursor
        BEGIN_BIND_CLASS(wxCursor)
        // Auto generated MACRO code for ctor of 'wxCursor':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxCursor':
        // =================================
        BIND_CTOR(int)
#if wxUSE_IMAGE
        // Auto generated MACRO code for ctor of 'wxCursor':
        // =================================
        BIND_CTOR(const wxImage &)
#endif
        // Auto generated MACRO code for ctor of 'wxCursor':
        // =================================
        BIND_CTOR(const char*, int, int)
        BIND_CTOR(const char*, int, int, int)
        BIND_CTOR(const char*, int, int, int, int)
        BIND_CTOR(const char*, int, int, int, int, const char*)
        BIND_CTOR(const char*, int, int, int, int, const char*, const wxColour *)
        BIND_CTOR(const char*, int, int, int, int, const char*, const wxColour *, const wxColour *)
        BIND_MF(wxCursor, Ok)
        BIND_MF(wxCursor, IsOk)
#endif
        END_BIND_CLASS(wxCursor)

    END_BIND_MODULE(wx)

    BEGIN_LUA_TABLE(wx)
       BIND_VARIABLE(wxNullCursor)
    END_LUA_TABLE(wx)
END_REGISTER(cursor)
