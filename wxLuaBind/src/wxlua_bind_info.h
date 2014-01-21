#ifndef WXLUABIND_WXLUA_BIND_INFO_H_
#define WXLUABIND_WXLUA_BIND_INFO_H_

typedef int (*wxLuaBindFunc)(lua_State*);

class wxLuaBindInfo : public wxObject
{
public:
    wxLuaBindInfo(const wxChar* name, wxLuaBindFunc func, bool prebind = false)
        : m_name(name), m_func(func), m_prebind(prebind)
    {
        Register(prebind);
    }
    ~wxLuaBindInfo()
    {
        Unregister();
    }

    int Bind(lua_State* L);
public:
    static int BindAll(lua_State* L);
private:
    void Register(bool prebind);
    void Register(wxHashTable** table);
    void Unregister();
private:
    const wxChar* m_name;
    wxLuaBindFunc m_func;
    bool m_prebind;
private:
    static wxHashTable* m_sPreBindTable;
    static wxHashTable* m_sBindTable;
};

#define REGISTER_WXLUA_BIND(name, ...) \
    EXTERN_C int luaopen_##name(lua_State* L); \
    wxLuaBindInfo wxLB_##name(wxT(#name), \
        (wxLuaBindFunc)luaopen_##name, ##__VA_ARGS__); \
    int luaopen_##name(lua_State* L)

#define REGISTER_WXLUA_PREBIND(name) \
    REGISTER_WXLUA_BIND(name, true)

#endif  // WXLUABIND_WX_BIND_INFO_H_
