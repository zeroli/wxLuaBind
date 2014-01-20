#include <precompile.h>

#include "wxlua_bind_info.h"

wxHashTable* wxLuaBindInfo::m_sBindTable = NULL;

void wxLuaBindInfo::Register()
{
    if (!m_sBindTable)
    {
        wxHashTable *bindTable = new wxHashTable(wxKEY_STRING);
        if (m_sBindTable)
            delete m_sBindTable;
        else
            m_sBindTable = bindTable;
    }
    m_sBindTable->Put(m_name, (wxObject*)this);
}

void wxLuaBindInfo::Unregister()
{
    if (m_sBindTable)
    {
        m_sBindTable->Delete(m_name);
        if (m_sBindTable->GetCount() == 0)
        {
            delete m_sBindTable;
            m_sBindTable = NULL;
        }
    }
}

int wxLuaBindInfo::Bind( lua_State* L )
{
    if (m_func) return m_func(L);
    return 0;
}

int wxLuaBindInfo::BindAll(lua_State* L)
{
    if (!m_sBindTable) return 0;

    wxHashTable::Node* pNode = NULL;
    m_sBindTable->BeginFind();
    while (NULL != (pNode = m_sBindTable->Next()))
    {
        wxLuaBindInfo* pInfo = wxDynamicCast(pNode->GetData(), wxLuaBindInfo);
        if (!pInfo) continue;

        pInfo->Bind(L);
    }
    return 0;
}

