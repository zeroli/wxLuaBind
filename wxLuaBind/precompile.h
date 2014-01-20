#ifndef WXLUABIND_PRECOMPILE_H_
#define WXLUABIND_PRECOMPILE_H_

#include <luabind/luabind.hpp>
#include <luabind/operator.hpp>

#ifdef __cplusplus
extern "C" {
#endif

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

#ifdef __cplusplus
};
#endif

#include <wx/wxprec.h>

#include "luabind_helper.h"
#include "win_bind_helper.h"

using namespace luabind;

#endif  // WXLUABIND_PRECOMPILE_H_
