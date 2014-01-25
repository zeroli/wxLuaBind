#include <precompile.h>

REGISTER_WXLUA_BIND(wxdnd)
{
    BEGIN_BIND_MODULE(wx)
        BEGIN_BIND_CLASS(wxDropTarget)
            BIND_MF(wxDropTarget, GetDataObject)
            BIND_MF(wxDropTarget, SetDataObject)
            BIND_MF(wxDropTarget, OnEnter)
            BIND_MF(wxDropTarget, OnDragOver)
            BIND_MF(wxDropTarget, OnLeave)
            BIND_MF(wxDropTarget, OnDrop)
            BIND_MF(wxDropTarget, OnData)
            BIND_MF(wxDropTarget, GetData)
            BIND_MF(wxDropTarget, SetDefaultAction)
            BIND_MF(wxDropTarget, GetDefaultAction)
        END_BIND_CLASS(wxDropTarget)

        BEGIN_BIND_CLASS(wxTextDropTarget)
            BIND_MF(wxTextDropTarget, OnDropText)
        END_BIND_CLASS(wxTextDropTarget)

        BEGIN_BIND_CLASS(wxFileDropTarget)
            BIND_MF(wxFileDropTarget, OnDropFiles)
        END_BIND_CLASS(wxFileDropTarget)
    END_BIND_MODULE(wx)

    return 0;
}