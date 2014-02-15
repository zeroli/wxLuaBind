#include <precompile.h>

namespace
{
    class wxLuaEvtHandler : public wxEvtHandler
    {
    public:
        explicit wxLuaEvtHandler(const object& luafunc)
            : m_luaFunc(luafunc)
        {
        }

        void OnEvent(wxEvent& evt)
        {
            wxASSERT_MSG(m_luaFunc.is_valid(),
                "Connected Lua function is not valid\n");

            lua_State* L = m_luaFunc.interpreter();
            m_luaFunc.push(L);
            lua_pushlightuserdata(L, &evt);

            if (lua_pcall(L, 1, 0, 0) != 0)
            {
                wxLogError("Error: %s\n", lua_tostring(L, -1));
                lua_pop(L, 1);
            }
        }
    private:
        object m_luaFunc;
    };
}  // anonymous namespace

namespace
{
    // Auto generated CPP code for 'Connect'
    // =================================
    void Connect4(wxEvtHandler* self, int winid, int lastId, int eventType, object objfunc)
    {
        wxASSERT_MSG(objfunc.is_valid(), wxT("Lua state is not valid for last argument."));

        if (type(objfunc) != LUA_TFUNCTION)
        {
            wxLogError("The last argument is not valid Lua function");
            return;
        }

        wxLuaEvtHandler* evtHandler(new wxLuaEvtHandler(objfunc));
        // pass evt handler as userdata, to let wx help us destroy it, to make our life easier
        return self->Connect(winid, lastId, eventType,
            (wxObjectEventFunction)&wxLuaEvtHandler::OnEvent, evtHandler, evtHandler);
    }

    // Auto generated CPP code for 'Connect'
    // =================================
    void Connect3(wxEvtHandler* self, int winid, int eventType, object objfunc)
    {
        Connect4(self, winid, wxID_ANY, eventType, objfunc);
    }

    // Auto generated CPP code for 'Connect'
    // =================================
    void Connect2(wxEvtHandler* self, int eventType, object objfunc)
    {
        Connect4(self, wxID_ANY, wxID_ANY, eventType, objfunc);
    }

    // Auto generated CPP code for 'Disconnect'
    // =================================
    bool Disconnect3(wxEvtHandler* self, int winid, int lastId, wxEventType eventType)
    {
        return self->Disconnect(winid,lastId,eventType);
    }

    // Auto generated CPP code for 'Disconnect'
    // =================================
    bool Disconnect0(wxEvtHandler* self)
    {
        return self->Disconnect();
    }
    bool Disconnect1(wxEvtHandler* self, int winid)
    {
        return self->Disconnect(winid);
    }
    bool Disconnect2(wxEvtHandler* self, int winid, wxEventType eventType)
    {
        return self->Disconnect(winid,eventType);
    }
}  // namespace

REGISTER_WXLUA_PREBIND(wxevent, BIND_NO_EVENT)
    BEGIN_BIND_MODULE(wx)
        BIND_FUNC(wxNewEventType)
    END_BIND_MODULE(wx)

    // EVENT types
    BEGIN_LUA_TABLE(wx)
        BIND_VARIABLE(wxEVT_FIRST)
        BIND_VARIABLE(wxEVT_USER_FIRST)

        BIND_VARIABLE(wxEVT_NULL)

        BIND_VARIABLE(wxEVT_COMMAND_BUTTON_CLICKED)
        BIND_VARIABLE(wxEVT_COMMAND_CHECKBOX_CLICKED)
        BIND_VARIABLE(wxEVT_COMMAND_CHOICE_SELECTED)
        BIND_VARIABLE(wxEVT_COMMAND_LISTBOX_SELECTED)
        BIND_VARIABLE(wxEVT_COMMAND_CHECKLISTBOX_TOGGLED)

        BIND_VARIABLE(wxEVT_COMMAND_MENU_SELECTED)
        BIND_VARIABLE(wxEVT_COMMAND_SLIDER_UPDATED)
        BIND_VARIABLE(wxEVT_COMMAND_RADIOBOX_SELECTED)
        BIND_VARIABLE(wxEVT_COMMAND_RADIOBUTTON_SELECTED)
        BIND_VARIABLE(wxEVT_COMMAND_SCROLLBAR_UPDATED)
        BIND_VARIABLE(wxEVT_COMMAND_VLBOX_SELECTED)
        BIND_VARIABLE(wxEVT_COMMAND_COMBOBOX_SELECTED)
        BIND_VARIABLE(wxEVT_COMMAND_TOOL_RCLICKED)
        BIND_VARIABLE(wxEVT_COMMAND_TOOL_ENTER)
        BIND_VARIABLE(wxEVT_COMMAND_SPINCTRL_UPDATED)

        BIND_VARIABLE(wxEVT_SOCKET)

        BIND_VARIABLE(wxEVT_TIMER)

        BIND_VARIABLE(wxEVT_LEFT_DOWN)
        BIND_VARIABLE(wxEVT_LEFT_UP)
        BIND_VARIABLE(wxEVT_MIDDLE_DOWN)
        BIND_VARIABLE(wxEVT_MIDDLE_UP)
        BIND_VARIABLE(wxEVT_RIGHT_DOWN)
        BIND_VARIABLE(wxEVT_RIGHT_UP)
        BIND_VARIABLE(wxEVT_MOTION)
        BIND_VARIABLE(wxEVT_ENTER_WINDOW)
        BIND_VARIABLE(wxEVT_LEAVE_WINDOW)
        BIND_VARIABLE(wxEVT_LEFT_DCLICK)
        BIND_VARIABLE(wxEVT_MIDDLE_DCLICK)
        BIND_VARIABLE(wxEVT_RIGHT_DCLICK)
        BIND_VARIABLE(wxEVT_SET_FOCUS)
        BIND_VARIABLE(wxEVT_KILL_FOCUS)
        BIND_VARIABLE(wxEVT_CHILD_FOCUS)
        BIND_VARIABLE(wxEVT_MOUSEWHEEL)

        BIND_VARIABLE(wxEVT_NC_LEFT_DOWN)
        BIND_VARIABLE(wxEVT_NC_LEFT_UP)
        BIND_VARIABLE(wxEVT_NC_MIDDLE_DOWN)
        BIND_VARIABLE(wxEVT_NC_MIDDLE_UP)
        BIND_VARIABLE(wxEVT_NC_RIGHT_DOWN)
        BIND_VARIABLE(wxEVT_NC_RIGHT_UP)
        BIND_VARIABLE(wxEVT_NC_MOTION)
        BIND_VARIABLE(wxEVT_NC_ENTER_WINDOW)
        BIND_VARIABLE(wxEVT_NC_LEAVE_WINDOW)
        BIND_VARIABLE(wxEVT_NC_LEFT_DCLICK)
        BIND_VARIABLE(wxEVT_NC_MIDDLE_DCLICK)
        BIND_VARIABLE(wxEVT_NC_RIGHT_DCLICK)

        BIND_VARIABLE(wxEVT_CHAR)
        BIND_VARIABLE(wxEVT_CHAR_HOOK)
        BIND_VARIABLE(wxEVT_NAVIGATION_KEY)
        BIND_VARIABLE(wxEVT_KEY_UP)
#if wxUSE_HOTKEY
        BIND_VARIABLE(wxEVT_HOTKEY)
#endif
        BIND_VARIABLE(wxEVT_SET_CURSOR)

        BIND_VARIABLE(wxEVT_SCROLL_TOP)
        BIND_VARIABLE(wxEVT_SCROLL_BOTTOM)
        BIND_VARIABLE(wxEVT_SCROLL_LINEUP)
        BIND_VARIABLE(wxEVT_SCROLL_LINEDOWN)
        BIND_VARIABLE(wxEVT_SCROLL_PAGEUP)
        BIND_VARIABLE(wxEVT_SCROLL_PAGEDOWN)
        BIND_VARIABLE(wxEVT_SCROLL_THUMBTRACK)
        BIND_VARIABLE(wxEVT_SCROLL_THUMBRELEASE)
        BIND_VARIABLE(wxEVT_SCROLL_CHANGED)

        BIND_VARIABLE(wxEVT_SCROLLWIN_TOP)
        BIND_VARIABLE(wxEVT_SCROLLWIN_BOTTOM)
        BIND_VARIABLE(wxEVT_SCROLLWIN_LINEUP)
        BIND_VARIABLE(wxEVT_SCROLLWIN_LINEDOWN)
        BIND_VARIABLE(wxEVT_SCROLLWIN_PAGEUP)
        BIND_VARIABLE(wxEVT_SCROLLWIN_PAGEDOWN)
        BIND_VARIABLE(wxEVT_SCROLLWIN_THUMBTRACK)
        BIND_VARIABLE(wxEVT_SCROLLWIN_THUMBRELEASE)

        BIND_VARIABLE(wxEVT_SIZE)
        BIND_VARIABLE(wxEVT_MOVE)
        BIND_VARIABLE(wxEVT_CLOSE_WINDOW)
        BIND_VARIABLE(wxEVT_END_SESSION)
        BIND_VARIABLE(wxEVT_QUERY_END_SESSION)
        BIND_VARIABLE(wxEVT_ACTIVATE_APP)

        BIND_VARIABLE(wxEVT_ACTIVATE)
        BIND_VARIABLE(wxEVT_CREATE)
        BIND_VARIABLE(wxEVT_DESTROY)
        BIND_VARIABLE(wxEVT_SHOW)
        BIND_VARIABLE(wxEVT_ICONIZE)
        BIND_VARIABLE(wxEVT_MAXIMIZE)
        BIND_VARIABLE(wxEVT_MOUSE_CAPTURE_CHANGED)
        BIND_VARIABLE(wxEVT_MOUSE_CAPTURE_LOST)
        BIND_VARIABLE(wxEVT_PAINT)
        BIND_VARIABLE(wxEVT_ERASE_BACKGROUND)
        BIND_VARIABLE(wxEVT_NC_PAINT)
        BIND_VARIABLE(wxEVT_PAINT_ICON)
        BIND_VARIABLE(wxEVT_MENU_OPEN)
        BIND_VARIABLE(wxEVT_MENU_CLOSE)
        BIND_VARIABLE(wxEVT_MENU_HIGHLIGHT)
        BIND_VARIABLE(wxEVT_CONTEXT_MENU)
        BIND_VARIABLE(wxEVT_SYS_COLOUR_CHANGED)
        BIND_VARIABLE(wxEVT_DISPLAY_CHANGED)
        BIND_VARIABLE(wxEVT_SETTING_CHANGED)
        BIND_VARIABLE(wxEVT_QUERY_NEW_PALETTE)
        BIND_VARIABLE(wxEVT_PALETTE_CHANGED)
        BIND_VARIABLE(wxEVT_JOY_BUTTON_DOWN)
        BIND_VARIABLE(wxEVT_JOY_BUTTON_UP)
        BIND_VARIABLE(wxEVT_JOY_MOVE)
        BIND_VARIABLE(wxEVT_JOY_ZMOVE)
        BIND_VARIABLE(wxEVT_DROP_FILES)
        BIND_VARIABLE(wxEVT_DRAW_ITEM)
        BIND_VARIABLE(wxEVT_MEASURE_ITEM)
        BIND_VARIABLE(wxEVT_COMPARE_ITEM)
        BIND_VARIABLE(wxEVT_INIT_DIALOG)
        BIND_VARIABLE(wxEVT_IDLE)
        BIND_VARIABLE(wxEVT_UPDATE_UI)
        BIND_VARIABLE(wxEVT_SIZING)
        BIND_VARIABLE(wxEVT_MOVING)
        BIND_VARIABLE(wxEVT_HIBERNATE)

        BIND_VARIABLE(wxEVT_COMMAND_TEXT_COPY)
        BIND_VARIABLE(wxEVT_COMMAND_TEXT_CUT)
        BIND_VARIABLE(wxEVT_COMMAND_TEXT_PASTE)

        BIND_VARIABLE(wxEVT_COMMAND_LEFT_CLICK)
        BIND_VARIABLE(wxEVT_COMMAND_LEFT_DCLICK)
        BIND_VARIABLE(wxEVT_COMMAND_RIGHT_CLICK)
        BIND_VARIABLE(wxEVT_COMMAND_RIGHT_DCLICK)
        BIND_VARIABLE(wxEVT_COMMAND_SET_FOCUS)
        BIND_VARIABLE(wxEVT_COMMAND_KILL_FOCUS)
        BIND_VARIABLE(wxEVT_COMMAND_ENTER)

        BIND_VARIABLE(wxEVT_HELP)
        BIND_VARIABLE(wxEVT_DETAILED_HELP)

        BIND_VARIABLE(wxEVT_COMMAND_TOOL_CLICKED)

        BIND_VARIABLE(wxEVT_COMMAND_TEXT_UPDATED)

    // end EVENT types
    END_LUA_TABLE(wx)

    BEGIN_LUA_TABLE(wx)
        BIND_ENUM(wxEVENT_PROPAGATE_NONE)
        BIND_ENUM(wxEVENT_PROPAGATE_MAX)
    END_LUA_TABLE(wx)

    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS_OBJECT(wxEvent)
            BIND_MF(wxEvent, SetEventType)
            BIND_MF(wxEvent, GetEventType)
            BIND_MF(wxEvent, GetEventObject)
            BIND_MF(wxEvent, SetEventObject)
            BIND_MF(wxEvent, GetTimestamp)
            BIND_MF(wxEvent, SetTimestamp)
            BIND_MF(wxEvent, GetId)
            BIND_MF(wxEvent, SetId)

            BIND_MF(wxEvent, Skip)
            BIND_MF(wxEvent, GetSkipped)

            BIND_MF(wxEvent, Clone)

            BIND_MF(wxEvent, IsCommandEvent)

            BIND_MF(wxEvent, ShouldPropagate)
            BIND_MF(wxEvent, StopPropagation)
            BIND_MF(wxEvent, ResumePropagation)
        END_BIND_CLASS(wxEvent)

        BEGIN_BIND_CLASS(wxPropagationDisabler)
            BIND_CTOR(wxEvent&)
        END_BIND_CLASS(wxPropagationDisabler)

        BEGIN_BIND_CLASS(wxPropagateOnce)
            BIND_CTOR(wxEvent&)
        END_BIND_CLASS(wxPropagateOnce)

        // wxCommandEvent bind
        BEGIN_BIND_CLASS_EVENT(wxCommandEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, int)
            BIND_CTOR(const wxCommandEvent&)

            BIND_MF(wxCommandEvent, SetClientData)
            BIND_MF(wxCommandEvent, GetClientData)

            BIND_MF(wxCommandEvent, SetClientObject)
            BIND_MF(wxCommandEvent, GetClientObject)

            BIND_MF(wxCommandEvent, GetSelection)

            BIND_MF(wxCommandEvent, SetString)
            BIND_MF(wxCommandEvent, GetString)

            BIND_MF(wxCommandEvent, IsChecked)

            BIND_MF(wxCommandEvent, IsSelection)

            BIND_MF(wxCommandEvent, SetExtraLong)
            BIND_MF(wxCommandEvent, GetExtraLong)

            BIND_MF(wxCommandEvent, SetInt)
            BIND_MF(wxCommandEvent, GetInt)
        END_BIND_CLASS(wxCommandEvent)

        // wxNotifyEvent bind
        BEGIN_BIND_CLASS_EVENT(wxNotifyEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, int)
            BIND_CTOR(const wxNotifyEvent&)

            BIND_MF(wxNotifyEvent, Veto)
            BIND_MF(wxNotifyEvent, Allow)
            BIND_MF(wxNotifyEvent, IsAllowed)
        END_BIND_CLASS(wxNotifyEvent)

        // wxScrollEvent bind
        BEGIN_BIND_CLASS(wxScrollEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, int)
            BIND_CTOR(wxEventType, int, int)
            BIND_CTOR(wxEventType, int, int, int)

            BIND_MF(wxScrollEvent, GetOrientation)
            BIND_MF(wxScrollEvent, GetPosition)
            BIND_MF(wxScrollEvent, SetOrientation)
            BIND_MF(wxScrollEvent, SetPosition)
        END_BIND_CLASS(wxScrollEvent)

        // wxScrollWinEvent
        BEGIN_BIND_CLASS_EVENT(wxScrollWinEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, int)
            BIND_CTOR(wxEventType, int, int)
            BIND_CTOR(const wxScrollWinEvent&)

            BIND_MF(wxScrollWinEvent, GetOrientation)
            BIND_MF(wxScrollWinEvent, GetPosition)
            BIND_MF(wxScrollWinEvent, SetOrientation)
            BIND_MF(wxScrollWinEvent, SetPosition)
        END_BIND_CLASS(wxScrollWinEvent)

        // wxMouseEvent bind
        BEGIN_BIND_CLASS_EVENT(wxMouseEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(const wxMouseEvent&)

            BIND_MF(wxMouseEvent, IsButton)
            BIND_MF(wxMouseEvent, ButtonDown)
            BIND_MF(wxMouseEvent, ButtonDClick)
            BIND_MF(wxMouseEvent, ButtonUp)

            BIND_MF(wxMouseEvent, Button)
            BIND_MF(wxMouseEvent, ButtonIsDown)
            BIND_MF(wxMouseEvent, GetButton)
            BIND_MF(wxMouseEvent, ControlDown)
            BIND_MF(wxMouseEvent, MetaDown)
            BIND_MF(wxMouseEvent, AltDown)
            BIND_MF(wxMouseEvent, ShiftDown)
            BIND_MF(wxMouseEvent, CmdDown)

            BIND_MF(wxMouseEvent, LeftDown)
            BIND_MF(wxMouseEvent, MiddleDown)
            BIND_MF(wxMouseEvent, RightDown)

            BIND_MF(wxMouseEvent, LeftUp)
            BIND_MF(wxMouseEvent, MiddleUp)
            BIND_MF(wxMouseEvent, RightUp)

            BIND_MF(wxMouseEvent, LeftDClick)
            BIND_MF(wxMouseEvent, MiddleDClick)
            BIND_MF(wxMouseEvent, RightDClick)

            BIND_MF(wxMouseEvent, LeftIsDown)
            BIND_MF(wxMouseEvent, MiddleIsDown)
            BIND_MF(wxMouseEvent, RightIsDown)

            BIND_MF(wxMouseEvent, Dragging)
            BIND_MF(wxMouseEvent, Moving)

            BIND_MF(wxMouseEvent, Entering)
            BIND_MF(wxMouseEvent, Leaving)

            BIND_MF_OVERLOAD(wxMouseEvent, GetPosition,
                void, (wxCoord*, wxCoord*) const)
            BIND_MF_OVERLOAD(wxMouseEvent, GetPosition,
                void, (long*, long*) const)
            BIND_MF_OVERLOAD(wxMouseEvent, GetPosition,
                wxPoint, () const)

            BIND_MF(wxMouseEvent, GetLogicalPosition)

            BIND_MF(wxMouseEvent, GetX)
            BIND_MF(wxMouseEvent, GetY)
            BIND_MF(wxMouseEvent, GetWheelRotation)
            BIND_MF(wxMouseEvent, GetWheelDelta)
            BIND_MF(wxMouseEvent, GetLinesPerAction)
            BIND_MF(wxMouseEvent, IsPageScroll)
        END_BIND_CLASS(wxMouseEvent)

        // wxSetCursorEvent bind
        BEGIN_BIND_CLASS_EVENT(wxSetCursorEvent)
            BIND_CTOR()
            BIND_CTOR(wxCoord)
            BIND_CTOR(wxCoord, wxCoord)
            BIND_CTOR(const wxSetCursorEvent &)

            BIND_MF(wxSetCursorEvent, GetX)
            BIND_MF(wxSetCursorEvent, GetY)
            BIND_MF(wxSetCursorEvent, SetCursor)
            BIND_MF(wxSetCursorEvent, GetCursor)
            BIND_MF(wxSetCursorEvent, HasCursor)
        END_BIND_CLASS(wxSetCursorEvent)

        // wxKeyEvent bind
        BEGIN_BIND_CLASS_EVENT(wxKeyEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)

            BIND_MF(wxKeyEvent, GetModifiers)
            BIND_MF(wxKeyEvent, ControlDown)
            BIND_MF(wxKeyEvent, ShiftDown)
            BIND_MF(wxKeyEvent, MetaDown)
            BIND_MF(wxKeyEvent, AltDown)
            BIND_MF(wxKeyEvent, CmdDown)
            BIND_MF(wxKeyEvent, HasModifiers)
            BIND_MF(wxKeyEvent, GetKeyCode)

            BIND_MF(wxKeyEvent, GetRawKeyCode)
            BIND_MF(wxKeyEvent, GetRawKeyFlags)

            BIND_MF_OVERLOAD(wxKeyEvent, GetPosition,
                void, (wxCoord*, wxCoord*) const)
            BIND_MF_OVERLOAD(wxKeyEvent, GetPosition,
                void, (long*, long*) const)
            BIND_MF_OVERLOAD(wxKeyEvent, GetPosition,
                wxPoint, () const)

            BIND_MF(wxKeyEvent, GetX)
            BIND_MF(wxKeyEvent, GetY)

            BIND_MF_NAME(copy, wxKeyEvent, operator =)
        END_BIND_CLASS(wxKeyEvent)

        // wxSizeEvent bind
        BEGIN_BIND_CLASS_EVENT(wxSizeEvent)
            BIND_CTOR()
            BIND_CTOR(const wxSize&)
            BIND_CTOR(const wxSize&, int)
            BIND_CTOR(const wxSizeEvent&)
            BIND_CTOR(const wxRect&)
            BIND_CTOR(const wxRect&, int)

            BIND_MF(wxSizeEvent, GetSize)
            BIND_MF(wxSizeEvent, GetRect)
            BIND_MF(wxSizeEvent, SetRect)
        END_BIND_CLASS(wxSizeEvent)

        // wxMoveEvent bind
        BEGIN_BIND_CLASS_EVENT(wxMoveEvent)
            BIND_CTOR()
            BIND_CTOR(const wxPoint&)
            BIND_CTOR(const wxPoint&, int)
            BIND_CTOR(const wxMoveEvent&)
            BIND_CTOR(const wxRect&)
            BIND_CTOR(const wxRect&, int)

            BIND_MF(wxMoveEvent, GetPosition)
            BIND_MF(wxMoveEvent, SetPosition)
            BIND_MF(wxMoveEvent, GetRect)
            BIND_MF(wxMoveEvent, SetRect)
        END_BIND_CLASS(wxMoveEvent)

        // wxPaintEvent bind
        BEGIN_BIND_CLASS_EVENT(wxPaintEvent)
            BIND_CTOR()
            BIND_CTOR(int)
            BIND_CTOR(const wxPaintEvent&)
        END_BIND_CLASS(wxPaintEvent)

        // wxNcPaintEvent bind
        BEGIN_BIND_CLASS_EVENT(wxNcPaintEvent)
            BIND_CTOR()
            BIND_CTOR(int)
        END_BIND_CLASS(wxNcPaintEvent)

        // wxEraseEvent bind
        BEGIN_BIND_CLASS_EVENT(wxEraseEvent)
            BIND_CTOR()
            BIND_CTOR(int)
            BIND_CTOR(int, wxDC*)
            BIND_CTOR(const wxEraseEvent&)

            BIND_MF(wxEraseEvent, GetDC)
        END_BIND_CLASS(wxEraseEvent)

        // wxFocusEvent bind
        BEGIN_BIND_CLASS_EVENT(wxFocusEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, int)
            BIND_CTOR(const wxFocusEvent&)

            BIND_MF(wxFocusEvent, GetWindow)
            BIND_MF(wxFocusEvent, SetWindow)
        END_BIND_CLASS(wxFocusEvent)

        // wxChildFocusEvent bind
        BEGIN_BIND_CLASS_EVENT(wxChildFocusEvent)
            BIND_CTOR()
            BIND_CTOR(wxWindow*)

            BIND_MF(wxChildFocusEvent, GetWindow)
        END_BIND_CLASS(wxChildFocusEvent)

        // wxActivateEvent bind
        BEGIN_BIND_CLASS_EVENT(wxActivateEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, bool)
            BIND_CTOR(wxEventType, bool, int)
            BIND_CTOR(const wxActivateEvent&)

            BIND_MF(wxActivateEvent, GetActive)
        END_BIND_CLASS(wxActivateEvent)

        // wxInitDialogEvent bind
        BEGIN_BIND_CLASS_EVENT(wxInitDialogEvent)
            BIND_CTOR()
            BIND_CTOR(int)
        END_BIND_CLASS(wxInitDialogEvent)

        // wxMenuEvent bind
        BEGIN_BIND_CLASS_EVENT(wxMenuEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, int)
            BIND_CTOR(wxEventType, int, wxMenu*)
            BIND_CTOR(const wxMenuEvent&)

            BIND_MF(wxMenuEvent, GetMenuId)
            BIND_MF(wxMenuEvent, IsPopup)
            BIND_MF(wxMenuEvent, GetMenu)
        END_BIND_CLASS(wxMenuEvent)

        // wxCloseEvent bind
        BEGIN_BIND_CLASS_EVENT(wxCloseEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, int)
            BIND_CTOR(const wxCloseEvent&)

            BIND_MF(wxCloseEvent, SetLoggingOff)
            BIND_MF(wxCloseEvent, GetLoggingOff)

            BIND_MF(wxCloseEvent, Veto)
            BIND_MF(wxCloseEvent, SetCanVeto)
            BIND_MF(wxCloseEvent, CanVeto)
            BIND_MF(wxCloseEvent, GetVeto)
        END_BIND_CLASS(wxCloseEvent)

        // wxShowEvent bind
        BEGIN_BIND_CLASS_EVENT(wxShowEvent)
            BIND_CTOR()
            BIND_CTOR(int)
            BIND_CTOR(int, bool)
            BIND_CTOR(const wxShowEvent&)

            BIND_MF(wxShowEvent, SetShow)
            BIND_MF(wxShowEvent, GetShow)
        END_BIND_CLASS(wxShowEvent)

        // wxIconizeEvent bind
        BEGIN_BIND_CLASS_EVENT(wxIconizeEvent)
            BIND_CTOR()
            BIND_CTOR(int)
            BIND_CTOR(int, bool)
            BIND_CTOR(const wxIconizeEvent&)

            BIND_MF(wxIconizeEvent, Iconized)
        END_BIND_CLASS(wxIconizeEvent)

        // wxMaximizeEvent bind
        BEGIN_BIND_CLASS_EVENT(wxMaximizeEvent)
            BIND_CTOR()
            BIND_CTOR(int)
        END_BIND_CLASS(wxMaximizeEvent)

        // wxJoystickEvent bind
        BEGIN_BIND_CLASS_EVENT(wxJoystickEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, int)
            BIND_CTOR(wxEventType, int, int)
            BIND_CTOR(const wxJoystickEvent&)

            BIND_MF(wxJoystickEvent, GetPosition)
            BIND_MF(wxJoystickEvent, GetZPosition)
            BIND_MF(wxJoystickEvent, GetButtonState)
            BIND_MF(wxJoystickEvent, GetButtonChange)
            BIND_MF(wxJoystickEvent, GetJoystick)

            BIND_MF(wxJoystickEvent, SetJoystick)
            BIND_MF(wxJoystickEvent, SetButtonState)
            BIND_MF(wxJoystickEvent, SetButtonChange)
            BIND_MF(wxJoystickEvent, SetPosition)
            BIND_MF(wxJoystickEvent, SetZPosition)

            BIND_MF(wxJoystickEvent, IsButton)
            BIND_MF(wxJoystickEvent, IsMove)

            BIND_MF(wxJoystickEvent, ButtonDown)
            BIND_MF(wxJoystickEvent, ButtonUp)
            BIND_MF(wxJoystickEvent, ButtonIsDown)
        END_BIND_CLASS(wxJoystickEvent)

        // wxDropFilesEvent bind
        BEGIN_BIND_CLASS_EVENT(wxDropFilesEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, int)
            BIND_CTOR(wxEventType, int, wxString*)
            BIND_CTOR(const wxDropFilesEvent&)

            BIND_MF(wxDropFilesEvent, GetPosition)
            BIND_MF(wxDropFilesEvent, GetNumberOfFiles)
            BIND_MF(wxDropFilesEvent, GetFiles)
        END_BIND_CLASS(wxDropFilesEvent)

        // wxUpdateUIEvent bind
        BEGIN_BIND_CLASS_EVENT(wxUpdateUIEvent)
            BIND_CTOR()
            BIND_CTOR(wxWindowID)
            BIND_CTOR(const wxUpdateUIEvent&)

            BIND_MF(wxUpdateUIEvent, GetChecked)
            BIND_MF(wxUpdateUIEvent, GetEnabled)
            BIND_MF(wxUpdateUIEvent, GetShown)
            BIND_MF(wxUpdateUIEvent, GetText)
            BIND_MF(wxUpdateUIEvent, GetSetText)
            BIND_MF(wxUpdateUIEvent, GetSetChecked)
            BIND_MF(wxUpdateUIEvent, GetSetEnabled)
            BIND_MF(wxUpdateUIEvent, GetSetShown)

            BIND_MF(wxUpdateUIEvent, Check)
            BIND_MF(wxUpdateUIEvent, Enable)
            BIND_MF(wxUpdateUIEvent, Show)
            BIND_MF(wxUpdateUIEvent, SetText)

            BEGIN_BIND_SCOPE()
                BIND_SMF(wxUpdateUIEvent, SetUpdateInterval)
                BIND_SMF(wxUpdateUIEvent, GetUpdateInterval)
                BIND_SMF(wxUpdateUIEvent, CanUpdate)
                BIND_SMF(wxUpdateUIEvent, ResetUpdateTime)
                BIND_SMF(wxUpdateUIEvent, SetMode)
                BIND_SMF(wxUpdateUIEvent, GetMode)
            END_BIND_SCOPE()
        END_BIND_CLASS(wxUpdateUIEvent)

        // wxSysColourChangedEvent bind
        BEGIN_BIND_CLASS_EVENT(wxSysColourChangedEvent)
            BIND_CTOR()
        END_BIND_CLASS(wxSysColourChangedEvent)

        // wxMouseCaptureChangedEvent bind
        BEGIN_BIND_CLASS_EVENT(wxMouseCaptureChangedEvent)
            BIND_CTOR()
            BIND_CTOR(wxWindowID)
            BIND_CTOR(wxWindowID, wxWindow*)
            BIND_CTOR(const wxMouseCaptureChangedEvent&)

            BIND_MF(wxMouseCaptureChangedEvent, GetCapturedWindow)
        END_BIND_CLASS(wxMouseCaptureChangedEvent)

        // wxMouseCaptureLostEvent bind
        BEGIN_BIND_CLASS_EVENT(wxMouseCaptureLostEvent)
            BIND_CTOR()
            BIND_CTOR(wxWindowID)
            BIND_CTOR(const wxMouseCaptureLostEvent&)
        END_BIND_CLASS(wxMouseCaptureLostEvent)

        // wxDisplayChangedEvent bind
        BEGIN_BIND_CLASS_EVENT(wxDisplayChangedEvent)
            BIND_CTOR()
        END_BIND_CLASS(wxDisplayChangedEvent)

        // wxPaletteChangedEvent bind
        BEGIN_BIND_CLASS_EVENT(wxPaletteChangedEvent)
            BIND_CTOR()
            BIND_CTOR(wxWindowID)
            BIND_CTOR(const wxPaletteChangedEvent&)

            BIND_MF(wxPaletteChangedEvent, SetChangedWindow)
            BIND_MF(wxPaletteChangedEvent, GetChangedWindow)
        END_BIND_CLASS(wxPaletteChangedEvent)

        // wxQueryNewPaletteEvent bind
        BEGIN_BIND_CLASS_EVENT(wxQueryNewPaletteEvent)
            BIND_CTOR()
            BIND_CTOR(wxWindowID)
            BIND_CTOR(const wxQueryNewPaletteEvent&)

            BIND_MF(wxQueryNewPaletteEvent, SetPaletteRealized)
            BIND_MF(wxQueryNewPaletteEvent, GetPaletteRealized)
        END_BIND_CLASS(wxQueryNewPaletteEvent)

        // wxNavigationKeyEvent bind
        BEGIN_BIND_CLASS_EVENT(wxNavigationKeyEvent)
            BIND_CTOR()
            BIND_CTOR(const wxNavigationKeyEvent&)

            BIND_MF(wxNavigationKeyEvent, GetDirection)
            BIND_MF(wxNavigationKeyEvent, SetDirection)
            BIND_MF(wxNavigationKeyEvent, IsWindowChange)
            BIND_MF(wxNavigationKeyEvent, SetWindowChange)

            BIND_MF(wxNavigationKeyEvent, IsFromTab)
            BIND_MF(wxNavigationKeyEvent, SetFromTab)

            BIND_MF(wxNavigationKeyEvent, GetCurrentFocus)
            BIND_MF(wxNavigationKeyEvent, SetCurrentFocus)

            BIND_MF(wxNavigationKeyEvent, SetFlags)

            BEGIN_CLASS_ENUM(constant)
                BIND_CLASS_ENUM(wxNavigationKeyEvent, IsBackward)
                BIND_CLASS_ENUM(wxNavigationKeyEvent, IsForward)
                BIND_CLASS_ENUM(wxNavigationKeyEvent, WinChange)
                BIND_CLASS_ENUM(wxNavigationKeyEvent, FromTab)
            END_CLASS_ENUM(constant)
        END_BIND_CLASS(wxNavigationKeyEvent)

        // wxWindowCreateEvent bind
        BEGIN_BIND_CLASS_EVENT(wxWindowCreateEvent)
            BIND_CTOR()
            BIND_CTOR(wxWindow*)

            BIND_MF(wxWindowCreateEvent, GetWindow)
        END_BIND_CLASS(wxWindowCreateEvent)

        // wxWindowDestroyEvent bind
        BEGIN_BIND_CLASS_EVENT(wxWindowDestroyEvent)
            BIND_CTOR()
            BIND_CTOR(wxWindow*)

            BIND_MF(wxWindowDestroyEvent, GetWindow)
        END_BIND_CLASS(wxWindowDestroyEvent)

        // wxHelpEvent bind
        BEGIN_BIND_CLASS(wxHelpEvent, wxCommandEvent)
            BEGIN_CLASS_ENUM(Origin)
                BIND_CLASS_ENUM(wxHelpEvent, Origin_Unknown)
                BIND_CLASS_ENUM(wxHelpEvent, Origin_Keyboard)
                BIND_CLASS_ENUM(wxHelpEvent, Origin_HelpButton)
            END_CLASS_ENUM(Origin)

            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, wxWindowID)
            BIND_CTOR(wxEventType, wxWindowID, const wxPoint&)
            BIND_CTOR(wxEventType, wxWindowID, const wxPoint&, wxHelpEvent::Origin)
            BIND_CTOR(const wxHelpEvent&)

            BIND_MF(wxHelpEvent, GetPosition)
            BIND_MF(wxHelpEvent, SetPosition)

            BIND_MF(wxHelpEvent, GetLink)
            BIND_MF(wxHelpEvent, SetLink)
            BIND_MF(wxHelpEvent, GetTarget)
            BIND_MF(wxHelpEvent, SetTarget)

            BIND_MF(wxHelpEvent, GetOrigin)
            BIND_MF(wxHelpEvent, SetOrigin)
        END_BIND_CLASS(wxHelpEvent)

        // wxClipboardTextEvent bind
        BEGIN_BIND_CLASS(wxClipboardTextEvent, wxCommandEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, wxWindowID)
            BIND_CTOR(const wxClipboardTextEvent&)
        END_BIND_CLASS(wxClipboardTextEvent)

        // wxContextMenuEvent bind
        BEGIN_BIND_CLASS(wxContextMenuEvent, wxCommandEvent)
            BIND_CTOR()
            BIND_CTOR(wxEventType)
            BIND_CTOR(wxEventType, wxWindowID)
            BIND_CTOR(wxEventType, wxWindowID, const wxPoint&)
            BIND_CTOR(const wxContextMenuEvent&)

            BIND_MF(wxContextMenuEvent, GetPosition)
            BIND_MF(wxContextMenuEvent, SetPosition)
        END_BIND_CLASS(wxContextMenuEvent)

        // wxIdleEvent bind
        BEGIN_BIND_CLASS_EVENT(wxIdleEvent)
            BIND_CTOR()
            BIND_CTOR(const wxIdleEvent&)

            BIND_MF(wxIdleEvent, RequestMore)
            BIND_MF(wxIdleEvent, MoreRequested)

            BEGIN_BIND_SCOPE()
                BIND_SMF(wxIdleEvent, SetMode)
                BIND_SMF(wxIdleEvent, GetMode)
                BIND_SMF(wxIdleEvent, CanSend)
            END_BIND_SCOPE()
        END_BIND_CLASS(wxIdleEvent)

        // wxEvtHandler bind
        BEGIN_BIND_CPPCLASS_OBJECT(wxEvtHandler)
            BIND_CTOR()

            BIND_MF(wxEvtHandler, GetNextHandler)
            BIND_MF(wxEvtHandler, GetPreviousHandler)
            BIND_MF(wxEvtHandler, SetNextHandler)
            BIND_MF(wxEvtHandler, SetPreviousHandler)

            BIND_MF(wxEvtHandler, SetEvtHandlerEnabled)
            BIND_MF(wxEvtHandler, GetEvtHandlerEnabled)

            BIND_MF(wxEvtHandler, ProcessEvent)
            BIND_MF(wxEvtHandler, AddPendingEvent)

            BIND_MF(wxEvtHandler, ProcessPendingEvents)
#if wxUSE_THREADS
            BIND_MF(wxEvtHandler, ProcessThreadEvent)
#endif

            // Auto generated MACRO code for 'Connect':
            // =================================
            BIND_F2MF_OVERLOAD(Connect, 4,
            void, (wxEvtHandler*,int,int,int,object))

            // Auto generated MACRO code for 'Connect':
            // =================================
            BIND_F2MF_OVERLOAD(Connect, 3,
            void, (wxEvtHandler*,int,int,object))

            // Auto generated MACRO code for 'Connect':
            // =================================
            BIND_F2MF_OVERLOAD(Connect, 2,
            void, (wxEvtHandler*,int, object))

            // Auto generated MACRO code for 'Disconnect':
            // =================================
            BIND_F2MF_OVERLOAD(Disconnect, 3,
            bool, (wxEvtHandler*,int,int,wxEventType))

            // Auto generated MACRO code for 'Disconnect':
            // =================================
            BIND_F2MF_OVERLOAD(Disconnect, 0,
            bool, (wxEvtHandler*))
            BIND_F2MF_OVERLOAD(Disconnect, 1,
            bool, (wxEvtHandler*,int))
            BIND_F2MF_OVERLOAD(Disconnect, 2,
            bool, (wxEvtHandler*,int,wxEventType))

            BIND_MF(wxEvtHandler, GetDynamicEventTable)
            BIND_MF(wxEvtHandler, SetClientObject)
            BIND_MF(wxEvtHandler, GetClientObject)

            BIND_MF(wxEvtHandler, SetClientData)
            BIND_MF(wxEvtHandler, GetClientData)

            BEGIN_BIND_SCOPE()
                BIND_SMF(wxEvtHandler, ProcessEventIfMatches)
            END_BIND_SCOPE()
            BIND_MF(wxEvtHandler, SearchDynamicEventTable)
#if wxUSE_THREADS
            BIND_MF(wxEvtHandler, ClearEventLocker)
#endif
            BIND_MF(wxEvtHandler, ClearEventHashTable)
        END_BIND_CLASS(wxEvtHandler)

        BIND_FUNC(wxPostEvent)
    END_BIND_MODULE(wx)
END_REGISTER(event)

