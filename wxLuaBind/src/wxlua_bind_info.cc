#include <precompile.h>

#include "wxlua_bind_info.h"

wxHashTable* wxLuaBindInfo::m_sPreBindTable = NULL;
wxHashTable* wxLuaBindInfo::m_sBindTable = NULL;

void wxLuaBindInfo::Register(bool prebind)
{
    if (prebind)
        Register(&m_sPreBindTable);
    else
        Register(&m_sBindTable);
}

void wxLuaBindInfo::Register(wxHashTable** table)
{
    if (!*table)
    {
        wxHashTable *bindTable = new wxHashTable(wxKEY_STRING);
        *table = bindTable;
    }
    (*table)->Put(m_name, (wxObject*)this);
}

void wxLuaBindInfo::Unregister()
{
    wxHashTable* table = NULL;
    if (m_prebind) table = m_sPreBindTable;
    else table = m_sBindTable;

    if (table)
    {
        table->Delete(m_name);
        if (table->GetCount() == 0)
        {
            delete table;
            table = NULL;
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
    wxHashTable* tables[] = { m_sPreBindTable, m_sBindTable };

    for (int i = 0; i < sizeof(tables)/sizeof(wxHashTable*); i++)
    {
        wxHashTable* table = tables[i];
        if (!table) continue;

        wxHashTable::Node* pNode = NULL;
        table->BeginFind();
        while (NULL != (pNode = table->Next()))
        {
            wxLuaBindInfo* pInfo = wxDynamicCast(pNode->GetData(), wxLuaBindInfo);
            if (!pInfo) continue;

            pInfo->Bind(L);
        }
    }
    return 0;
}

