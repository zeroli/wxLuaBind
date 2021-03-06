#include <wx/wxprec.h>
#include <wx/caret.h>

#include <wx/tooltip.h>
#include <wx/dnd.h>

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

#include "config.h"
#include "luabind_helper.h"
#include "win_bind_helper.h"

