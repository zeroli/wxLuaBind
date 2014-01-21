#include <precompile.h>

REGISTER_WXLUA_PREBIND(wxevent)
{
    BEGIN_BIND_MODULE(wx)
        BIND_FUNC(wxNewEventType)

    END_BIND_MODULE(wx)
    return 0;
}
