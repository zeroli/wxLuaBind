#ifndef WXLUABIND_PRECOMPILE_H_
#define WXLUABIND_PRECOMPILE_H_

#include <wx/wxprec.h>

#include <luabind/luabind.hpp>
#include <luabind/operator.hpp>

using namespace luabind;

#ifdef __cplusplus
extern "C" {
#endif

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

#ifdef __cplusplus
};
#endif

#include "luabind_helper.h"
#include "win_bind_helper.h"
#include "wxlua_bind_info.h"

#endif  // WXLUABIND_PRECOMPILE_H_
