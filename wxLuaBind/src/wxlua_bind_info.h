#ifndef WXLUABIND_WXLUA_BIND_INFO_H_
#define WXLUABIND_WXLUA_BIND_INFO_H_

typedef int (*wxLuaBindFunc)(lua_State*);

class wxLuaBindInfo : public wxObject
{
public:
    wxLuaBindInfo(const wxChar* name, wxLuaBindFunc func)
        : m_name(name), m_func(func)
    {
        Register();
    }
    ~wxLuaBindInfo()
    {
        Unregister();
    }

    int Bind(lua_State* L);
public:
    static int BindAll(lua_State* L);
private:
    void Register();
    void Unregister();
private:
    const wxChar* m_name;
    wxLuaBindFunc m_func;
private:
    static wxHashTable* m_sBindTable;
};

#define REGISTER_WXLUA_BIND(name) \
    wxLuaBindInfo wxLB_##name(wxT(#name), (wxLuaBindFunc)luaopen_##name);

#endif  // WXLUABIND_WX_BIND_INFO_H_
