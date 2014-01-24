#ifndef WXLUABIND_WXLUA_BIND_INFO_H_
#define WXLUABIND_WXLUA_BIND_INFO_H_

typedef int (*wxLuaBindFunc)(lua_State*);

class wxLuaBindInfo : public wxObject
{
public:
    wxLuaBindInfo(const wxChar* name, wxLuaBindFunc func,
        bool prebind = false, int NO = -1)
        : m_name(name), m_func(func), m_prebind(prebind), m_NO(NO)
    {
        Register(prebind, NO);
    }
    ~wxLuaBindInfo()
    {
        Unregister();
    }

    int Bind(lua_State* L);
public:
    static int BindAll(lua_State* L);
private:
    void Register(bool prebind, long NO);

    void RegisterPrebindInfo(long NO);
    void RegisterBindInfo();

    void Unregister();
private:
    const wxChar* m_name;
    wxLuaBindFunc m_func;
    bool m_prebind;
    long m_NO;
private:
    static wxHashTable* m_sPreBindTable;
    static wxHashTable* m_sBindTable;
};

#define REGISTER_WXLUA_BIND(name, ...) \
    EXTERN_C int luaopen_##name(lua_State* L); \
    wxLuaBindInfo wxLB_##name(wxT(#name), \
        (wxLuaBindFunc)luaopen_##name, ##__VA_ARGS__); \
    int luaopen_##name(lua_State* L)

#define REGISTER_WXLUA_PREBIND(name, NO) \
    REGISTER_WXLUA_BIND(name, true, NO)

enum {
    BIND_NO_WXDEFS = 0,
    BIND_NO_CLIENTDATA,
    BIND_NO_OBJECT,
    BIND_NO_EVENT,
    BIND_NO_WINDOW,
    BIND_NO_CONTROL,
};

#endif  // WXLUABIND_WX_BIND_INFO_H_
