#include <precompile.h>

#include "wxlua_bind_info.h"

wxHashTable* wxLuaBindInfo::m_sPreBindTable = NULL;
wxHashTable* wxLuaBindInfo::m_sBindTable = NULL;

void wxLuaBindInfo::Register(bool prebind, long NO)
{
    if (prebind)
        RegisterPrebindInfo(NO);
    else
        RegisterBindInfo();
}

void wxLuaBindInfo::RegisterPrebindInfo(long NO)
{
    if (!m_sPreBindTable)
    {
        wxHashTable *bindTable = new wxHashTable(wxKEY_INTEGER);
        m_sPreBindTable = bindTable;
    }
    m_sPreBindTable->Put(NO, (wxObject*)this);
}

void wxLuaBindInfo::RegisterBindInfo()
{
    if (!m_sBindTable)
    {
        wxHashTable *bindTable = new wxHashTable(wxKEY_STRING);
        m_sBindTable = bindTable;
    }
    m_sBindTable->Put(m_name, (wxObject*)this);
}

void wxLuaBindInfo::Unregister()
{
    wxHashTable* table = NULL;
    if (m_prebind) table = m_sPreBindTable;
    else table = m_sBindTable;

    if (table)
    {
        if (m_prebind) table->Delete(m_NO);
        else table->Delete(m_name);
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

