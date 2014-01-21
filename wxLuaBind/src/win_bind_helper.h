#ifndef WXLUABIND_WIN_BIND_HELPER_H_
#define WXLUABIND_WIN_BIND_HELPER_H_

#include "luabind_helper.h"

//  creation arguments to window without title (args: 2-6)
#define WIN_CREATOR_ARGS_MIN() \
    wxWindow * \
    , wxWindowID

#define WIN_CREATOR_ARGS_3() \
    WIN_CREATOR_ARGS_MIN() \
    , const wxPoint&

#define WIN_CREATOR_ARGS_4()  \
    WIN_CREATOR_ARGS_3() \
    , const wxSize&

#define WIN_CREATOR_ARGS_5() \
    WIN_CREATOR_ARGS_4() \
    , long

#define WIN_CREATOR_ARGS_6() \
    WIN_CREATOR_ARGS_5() \
    , const wxString&

#define BIND_WIN_ALL_CTORS() \
    BIND_CTOR() \
    BIND_CTOR(WIN_CREATOR_ARGS_MIN())\
    BIND_CTOR(WIN_CREATOR_ARGS_3())\
    BIND_CTOR(WIN_CREATOR_ARGS_4())\
    BIND_CTOR(WIN_CREATOR_ARGS_5())\
    BIND_CTOR(WIN_CREATOR_ARGS_6())

//  creation arguments to window with title (args: 3-7)
#define TITLE_WIN_CREATOR_ARGS_MIN() \
    WIN_CREATOR_ARGS_MIN() \
    , const wxString&

#define TITLE_WIN_CREATOR_ARGS_4() \
    TITLE_WIN_CREATOR_ARGS_MIN() \
    , const wxPoint&

#define TITLE_WIN_CREATOR_ARGS_5() \
    TITLE_WIN_CREATOR_ARGS_4() \
    , const wxSize&

#define TITLE_WIN_CREATOR_ARGS_6() \
    TITLE_WIN_CREATOR_ARGS_5() \
    , long

#define TITLE_WIN_CREATOR_ARGS_7() \
    TITLE_WIN_CREATOR_ARGS_6() \
    , const wxString&

#define BIND_TITLE_WIN_ALL_CTORS() \
    BIND_CTOR() \
    BIND_CTOR(TITLE_WIN_CREATOR_ARGS_MIN())\
    BIND_CTOR(TITLE_WIN_CREATOR_ARGS_4()) \
    BIND_CTOR(TITLE_WIN_CREATOR_ARGS_5()) \
    BIND_CTOR(TITLE_WIN_CREATOR_ARGS_6()) \
    BIND_CTOR(TITLE_WIN_CREATOR_ARGS_7())

// ============================================
#define BIND_WIN_CREATE_FUNC(class) \
    BIND_MF(class, Create)

#endif  // WXLUABIND_WIN_BIND_HELPER_H_
