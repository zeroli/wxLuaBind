#include <precompile.h>

#include <wx/calctrl.h>

//All cpp code wrapper for wxluabind
// namespace for class wxCalendarCtrl
namespace
{
    // Auto generated CPP code for 'Create'
    // =================================
    bool Create2(wxCalendarCtrl* self, wxWindow * parent, wxWindowID id)
    {
        return self->Create(parent,id);
    }
    bool Create3(wxCalendarCtrl* self, wxWindow * parent, wxWindowID id, const wxDateTime& date)
    {
        return self->Create(parent,id,date);
    }
    bool Create4(wxCalendarCtrl* self, wxWindow * parent, wxWindowID id, const wxDateTime& date, const wxPoint& pos)
    {
        return self->Create(parent,id,date,pos);
    }
    bool Create5(wxCalendarCtrl* self, wxWindow * parent, wxWindowID id, const wxDateTime& date, const wxPoint& pos, const wxSize& size)
    {
        return self->Create(parent,id,date,pos,size);
    }
    bool Create6(wxCalendarCtrl* self, wxWindow * parent, wxWindowID id, const wxDateTime& date, const wxPoint& pos, const wxSize& size, long style)
    {
        return self->Create(parent,id,date,pos,size,style);
    }
    bool Create7(wxCalendarCtrl* self, wxWindow * parent, wxWindowID id, const wxDateTime& date, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
    {
        return self->Create(parent,id,date,pos,size,style,name);
    }

    // Auto generated CPP code for 'SetLowerDateLimit'
    // =================================
    bool SetLowerDateLimit0(wxCalendarCtrl* self)
    {
        return self->SetLowerDateLimit();
    }
    bool SetLowerDateLimit1(wxCalendarCtrl* self, const wxDateTime& date)
    {
        return self->SetLowerDateLimit(date);
    }

    // Auto generated CPP code for 'SetUpperDateLimit'
    // =================================
    bool SetUpperDateLimit0(wxCalendarCtrl* self)
    {
        return self->SetUpperDateLimit();
    }
    bool SetUpperDateLimit1(wxCalendarCtrl* self, const wxDateTime& date)
    {
        return self->SetUpperDateLimit(date);
    }

    // Auto generated CPP code for 'SetDateRange'
    // =================================
    bool SetDateRange0(wxCalendarCtrl* self)
    {
        return self->SetDateRange();
    }
    bool SetDateRange1(wxCalendarCtrl* self, const wxDateTime& lowerdate)
    {
        return self->SetDateRange(lowerdate);
    }
    bool SetDateRange2(wxCalendarCtrl* self, const wxDateTime& lowerdate, const wxDateTime& upperdate)
    {
        return self->SetDateRange(lowerdate,upperdate);
    }

    // Auto generated CPP code for 'EnableYearChange'
    // =================================
    void EnableYearChange0(wxCalendarCtrl* self)
    {
        return self->EnableYearChange();
    }
    void EnableYearChange1(wxCalendarCtrl* self, bool enable)
    {
        return self->EnableYearChange(enable);
    }

    // Auto generated CPP code for 'EnableMonthChange'
    // =================================
    void EnableMonthChange0(wxCalendarCtrl* self)
    {
        return self->EnableMonthChange();
    }
    void EnableMonthChange1(wxCalendarCtrl* self, bool enable)
    {
        return self->EnableMonthChange(enable);
    }

    // Auto generated CPP code for 'EnableHolidayDisplay'
    // =================================
    void EnableHolidayDisplay0(wxCalendarCtrl* self)
    {
        return self->EnableHolidayDisplay();
    }
    void EnableHolidayDisplay1(wxCalendarCtrl* self, bool display)
    {
        return self->EnableHolidayDisplay(display);
    }

    // Auto generated CPP code for 'HitTest'
    // =================================
    wxCalendarHitTestResult HitTest1(wxCalendarCtrl* self, const wxPoint& pos)
    {
        return self->HitTest(pos);
    }
    wxCalendarHitTestResult HitTest2(wxCalendarCtrl* self, const wxPoint& pos, wxDateTime * date)
    {
        return self->HitTest(pos,date);
    }
    wxCalendarHitTestResult HitTest3(wxCalendarCtrl* self, const wxPoint& pos, wxDateTime * date, wxDateTime::WeekDay * wd)
    {
        return self->HitTest(pos,date,wd);
    }

    // Auto generated CPP code for 'Enable'
    // =================================
    bool Enable0(wxCalendarCtrl* self)
    {
        return self->Enable();
    }
    bool Enable1(wxCalendarCtrl* self, bool enable)
    {
        return self->Enable(enable);
    }

    // Auto generated CPP code for 'Show'
    // =================================
    bool Show0(wxCalendarCtrl* self)
    {
        return self->Show();
    }
    bool Show1(wxCalendarCtrl* self, bool show)
    {
        return self->Show(show);
    }
}  // namespace for wxCalendarCtrl

BEGIN_WXLUA_BINDFUNC(calctrl)
    BEGIN_LUA_TABLE(wx)
        // Bind enum  (totally 7)
        BIND_ENUM(wxCAL_SUNDAY_FIRST)
        BIND_ENUM(wxCAL_MONDAY_FIRST)
        BIND_ENUM(wxCAL_SHOW_HOLIDAYS)
        BIND_ENUM(wxCAL_NO_YEAR_CHANGE)
        BIND_ENUM(wxCAL_NO_MONTH_CHANGE)
        BIND_ENUM(wxCAL_SEQUENTIAL_MONTH_SELECTION)
        BIND_ENUM(wxCAL_SHOW_SURROUNDING_WEEKS)

        // Bind enum wxCalendarHitTestResult (totally 6)
        BIND_ENUM(wxCAL_HITTEST_NOWHERE)
        BIND_ENUM(wxCAL_HITTEST_HEADER)
        BIND_ENUM(wxCAL_HITTEST_DAY)
        BIND_ENUM(wxCAL_HITTEST_INCMONTH)
        BIND_ENUM(wxCAL_HITTEST_DECMONTH)
        BIND_ENUM(wxCAL_HITTEST_SURROUNDING_WEEK)

        // Bind enum wxCalendarDateBorder (totally 3)
        BIND_ENUM(wxCAL_BORDER_NONE)
        BIND_ENUM(wxCAL_BORDER_SQUARE)
        BIND_ENUM(wxCAL_BORDER_ROUND)

        BIND_MACRO(wxCalendarNameStr)

    END_LUA_TABLE(wx)

    BEGIN_BIND_MODULE(wx)
        // Bind class wxCalendarDateAttr
        BEGIN_BIND_CLASS(wxCalendarDateAttr)
        // Auto generated MACRO code for ctor of 'wxCalendarDateAttr':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxCalendarDateAttr':
        // =================================
        BIND_CTOR(const wxColour&)
        BIND_CTOR(const wxColour&, const wxColour&)
        BIND_CTOR(const wxColour&, const wxColour&, const wxColour&)
        BIND_CTOR(const wxColour&, const wxColour&, const wxColour&, const wxFont&)
        BIND_CTOR(const wxColour&, const wxColour&, const wxColour&, const wxFont&, wxCalendarDateBorder)
        BIND_MF(wxCalendarDateAttr, SetTextColour)
        BIND_MF(wxCalendarDateAttr, SetBackgroundColour)
        BIND_MF(wxCalendarDateAttr, SetBorderColour)
        BIND_MF(wxCalendarDateAttr, SetFont)
        BIND_MF(wxCalendarDateAttr, SetBorder)
        BIND_MF(wxCalendarDateAttr, SetHoliday)
        BIND_MF(wxCalendarDateAttr, HasTextColour)
        BIND_MF(wxCalendarDateAttr, HasBackgroundColour)
        BIND_MF(wxCalendarDateAttr, HasBorderColour)
        BIND_MF(wxCalendarDateAttr, HasFont)
        BIND_MF(wxCalendarDateAttr, HasBorder)
        BIND_MF(wxCalendarDateAttr, IsHoliday)
        BIND_MF(wxCalendarDateAttr, GetTextColour)
        BIND_MF(wxCalendarDateAttr, GetBackgroundColour)
        BIND_MF(wxCalendarDateAttr, GetBorderColour)
        BIND_MF(wxCalendarDateAttr, GetFont)
        BIND_MF(wxCalendarDateAttr, GetBorder)
        END_BIND_CLASS(wxCalendarDateAttr)

        // Bind class wxDateEvent
        BEGIN_BIND_CLASS(wxDateEvent)
        // Auto generated MACRO code for ctor of 'wxDateEvent':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxDateEvent':
        // =================================
        BIND_CTOR(wxWindow *, const wxDateTime&, wxEventType)
        BIND_MF(wxDateEvent, GetDate)
        BIND_MF(wxDateEvent, SetDate)
        END_BIND_CLASS(wxDateEvent)

        // Bind class wxCalendarEvent
        BEGIN_BIND_CLASS(wxCalendarEvent, wxDateEvent)
        // Auto generated MACRO code for ctor of 'wxCalendarEvent':
        // =================================
        BIND_CTOR()
        BIND_CTOR(wxCalendarCtrl *, wxEventType)
        BIND_MF(wxCalendarEvent, SetWeekDay)
        BIND_MF(wxCalendarEvent, GetWeekDay)
        END_BIND_CLASS(wxCalendarEvent)

        // Bind class wxCalendarCtrl
        BEGIN_BIND_CLASS_CONTROL(wxCalendarCtrl)
        // Auto generated MACRO code for ctor of 'wxCalendarCtrl':
        // =================================
        BIND_CTOR()
        // Auto generated MACRO code for ctor of 'wxCalendarCtrl':
        // =================================
        BIND_CTOR(wxWindow *, wxWindowID)
        BIND_CTOR(wxWindow *, wxWindowID, const wxDateTime&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxDateTime&, const wxPoint&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxDateTime&, const wxPoint&, const wxSize&)
        BIND_CTOR(wxWindow *, wxWindowID, const wxDateTime&, const wxPoint&, const wxSize&, long)
        BIND_CTOR(wxWindow *, wxWindowID, const wxDateTime&, const wxPoint&, const wxSize&, long, const wxString&)
        // Auto generated MACRO code for 'Create':
        // =================================
        BIND_F2MF_OVERLOAD(Create, 2,
        bool, (wxCalendarCtrl*, wxWindow *, wxWindowID))
        BIND_F2MF_OVERLOAD(Create, 3,
        bool, (wxCalendarCtrl*, wxWindow *, wxWindowID, const wxDateTime&))
        BIND_F2MF_OVERLOAD(Create, 4,
        bool, (wxCalendarCtrl*, wxWindow *, wxWindowID, const wxDateTime&, const wxPoint&))
        BIND_F2MF_OVERLOAD(Create, 5,
        bool, (wxCalendarCtrl*, wxWindow *, wxWindowID, const wxDateTime&, const wxPoint&, const wxSize&))
        BIND_F2MF_OVERLOAD(Create, 6,
        bool, (wxCalendarCtrl*, wxWindow *, wxWindowID, const wxDateTime&, const wxPoint&, const wxSize&, long))
        BIND_F2MF_OVERLOAD(Create, 7,
        bool, (wxCalendarCtrl*, wxWindow *, wxWindowID, const wxDateTime&, const wxPoint&, const wxSize&, long, const wxString&))
        BIND_MF(wxCalendarCtrl, Destroy)
        BIND_MF(wxCalendarCtrl, GetDate)
        // Auto generated MACRO code for 'SetLowerDateLimit':
        // =================================
        BIND_F2MF_OVERLOAD(SetLowerDateLimit, 0,
        bool, (wxCalendarCtrl*))
        BIND_F2MF_OVERLOAD(SetLowerDateLimit, 1,
        bool, (wxCalendarCtrl*, const wxDateTime&))
        BIND_MF(wxCalendarCtrl, GetLowerDateLimit)
        // Auto generated MACRO code for 'SetUpperDateLimit':
        // =================================
        BIND_F2MF_OVERLOAD(SetUpperDateLimit, 0,
        bool, (wxCalendarCtrl*))
        BIND_F2MF_OVERLOAD(SetUpperDateLimit, 1,
        bool, (wxCalendarCtrl*, const wxDateTime&))
        BIND_MF(wxCalendarCtrl, GetUpperDateLimit)
        // Auto generated MACRO code for 'SetDateRange':
        // =================================
        BIND_F2MF_OVERLOAD(SetDateRange, 0,
        bool, (wxCalendarCtrl*))
        BIND_F2MF_OVERLOAD(SetDateRange, 1,
        bool, (wxCalendarCtrl*, const wxDateTime&))
        BIND_F2MF_OVERLOAD(SetDateRange, 2,
        bool, (wxCalendarCtrl*, const wxDateTime&, const wxDateTime&))
        // Auto generated MACRO code for 'EnableYearChange':
        // =================================
        BIND_F2MF_OVERLOAD(EnableYearChange, 0,
        void, (wxCalendarCtrl*))
        BIND_F2MF_OVERLOAD(EnableYearChange, 1,
        void, (wxCalendarCtrl*, bool))
        // Auto generated MACRO code for 'EnableMonthChange':
        // =================================
        BIND_F2MF_OVERLOAD(EnableMonthChange, 0,
        void, (wxCalendarCtrl*))
        BIND_F2MF_OVERLOAD(EnableMonthChange, 1,
        void, (wxCalendarCtrl*, bool))
        // Auto generated MACRO code for 'EnableHolidayDisplay':
        // =================================
        BIND_F2MF_OVERLOAD(EnableHolidayDisplay, 0,
        void, (wxCalendarCtrl*))
        BIND_F2MF_OVERLOAD(EnableHolidayDisplay, 1,
        void, (wxCalendarCtrl*, bool))
        BIND_MF(wxCalendarCtrl, SetHeaderColours)
        BIND_MF(wxCalendarCtrl, GetHeaderColourFg)
        BIND_MF(wxCalendarCtrl, GetHeaderColourBg)
        BIND_MF(wxCalendarCtrl, SetHighlightColours)
        BIND_MF(wxCalendarCtrl, GetHighlightColourFg)
        BIND_MF(wxCalendarCtrl, GetHighlightColourBg)
        BIND_MF(wxCalendarCtrl, SetHolidayColours)
        BIND_MF(wxCalendarCtrl, GetHolidayColourFg)
        BIND_MF(wxCalendarCtrl, GetHolidayColourBg)
        BIND_MF(wxCalendarCtrl, GetAttr)
        BIND_MF(wxCalendarCtrl, SetAttr)
        BIND_MF(wxCalendarCtrl, SetHoliday)
        BIND_MF(wxCalendarCtrl, ResetAttr)
        // Auto generated MACRO code for 'HitTest':
        // =================================
        BIND_F2MF_OVERLOAD(HitTest, 1,
        wxCalendarHitTestResult, (wxCalendarCtrl*, const wxPoint&))
        BIND_F2MF_OVERLOAD(HitTest, 2,
        wxCalendarHitTestResult, (wxCalendarCtrl*, const wxPoint&, wxDateTime *))
        BIND_F2MF_OVERLOAD(HitTest, 3,
        wxCalendarHitTestResult, (wxCalendarCtrl*, const wxPoint&, wxDateTime *, wxDateTime::WeekDay *))
        // Auto generated MACRO code for 'Enable':
        // =================================
        BIND_F2MF_OVERLOAD(Enable, 0,
        bool, (wxCalendarCtrl*))
        BIND_F2MF_OVERLOAD(Enable, 1,
        bool, (wxCalendarCtrl*, bool))
        // Auto generated MACRO code for 'Show':
        // =================================
        BIND_F2MF_OVERLOAD(Show, 0,
        bool, (wxCalendarCtrl*))
        BIND_F2MF_OVERLOAD(Show, 1,
        bool, (wxCalendarCtrl*, bool))
        BIND_MF(wxCalendarCtrl, SetWindowStyleFlag)
        BIND_MF(wxCalendarCtrl, GetDefaultAttributes)
        // Auto generated MACRO code for 'wxVisualAttributesGetClassDefaultAttributes':
        // =================================
        BEGIN_BIND_SCOPE()
        BIND_SMF_OVERLOAD(wxCalendarCtrl, GetClassDefaultAttributes,
        wxVisualAttributes, ())
        BIND_SMF_OVERLOAD(wxCalendarCtrl, GetClassDefaultAttributes,
        wxVisualAttributes, (wxWindowVariant))
        END_BIND_SCOPE()

        BIND_MF(wxCalendarCtrl, OnSysColourChanged)
        END_BIND_CLASS(wxCalendarCtrl)

    END_BIND_MODULE(wx)
END_WXLUA_BINDFUNC(calctrl)
