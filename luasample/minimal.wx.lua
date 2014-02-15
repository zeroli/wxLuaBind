--[[
test lua using minimal wx sample
--]]

--package.cpath = package.cpath..";../../Debug/?.dll;"
--package.loadlib('wx.dll', 'luaopen_wx')()
require("wx")

app = wx.wxApp()

function OnPaint(event)
    -- must always create a wxPaintDC in a wxEVT_PAINT handler
    local dc = wx.wxPaintDC(panel)
    -- call some drawing functions
    dc:DrawRectangle(10, 10, 300, 300);
    dc:DrawRoundedRectangle(20, 20, 280, 280, 20);
    dc:DrawEllipse(30, 30, 260, 260);
    dc:DrawText(wx.wxT("A test string"), 50, 150);
end

function CreateControls(panel)
	mainSizer = wx.wxBoxSizer(wx.wxVERTICAL)
	panel:SetSizer(mainSizer)
	-- test text ctrl
	mainSizer:Add(wx.wxTextCtrl(panel, wx.wxID_ANY, wx.wxT("this is one testing text control"),
		wx.wxDefaultPosition, wx.wxSize(200, 40)), 0)
	-- test static text
	mainSizer:Add(wx.wxStaticText(panel, wx.wxID_ANY, wx.wxT("this is one static text")), 0)
	-- test button
	mainSizer:Add(wx.wxButton(panel, wx.wxID_ANY, wx.wxT("this is one button")), 0)

	-- test combo box
	combo = wx.wxComboBox(panel, wx.wxID_ANY, wx.wxT("combo box text"))
	mainSizer:Add(combo, 0)
	for i=1, 5 do
		combo:Append(wx.wxT("item"..i))
	end
	-- test check box
	for i=1, 5 do
		checkbox = wx.wxCheckBox(panel, wx.wxID_ANY, wx.wxT("check box"..i))
		if i % 2 == 0 then
			checkbox:SetValue(true)
		end
		mainSizer:Add(checkbox, 0)
	end
	
	sizer1 = wx.wxBoxSizer(wx.wxHORIZONTAL)
	mainSizer:Add(sizer1, 1, wx.wxGROW + wx.wxALL, 5)
	-- test list box
	listbox = wx.wxListBox(panel, wx.wxID_ANY)
	sizer1:Add(listbox, 0)
	for i=1, 5 do
		listbox:Insert(wx.wxT("list item"..i), listbox:GetCount())
	end
	-- test check list box
	checklistbox = wx.wxCheckListBox(panel, wx.wxID_ANY)
	sizer1:Add(checklistbox, 0)
	for i=1, 10 do
		checklistbox:Insert(wx.wxT("check list item"..i), checklistbox:GetCount())
		if i % 2 == 0 then
			checklistbox:Check(i-1, true)
		end		
	end

	--do	-- test radio box
		--sizer2 = wx.wxBoxSizer(wx.wxVERTICAL)
		--sizer1:Add(sizer2, 0)
		--radiobox = wx.wxRadioBox(panel, wx.wxID_ANY, wx.wxT("radio box test"))
		--sizer2:Add(radiobox, 0)
	--end
	
	do	-- test radio buttons
		staticbox = wx.wxStaticBox(panel, wx.wxID_ANY, wx.wxT("Radio button test"))
		sizer3 = wx.wxStaticBoxSizer(staticbox, wx.wxVERTICAL)
		sizer1:Add(sizer3, 0, wx.wxALL, 5)
		for i=1, 5 do
			btn = wx.wxRadioButton(panel, wx.wxID_ANY, wx.wxT("radio button"..i))
			sizer3:Add(btn, 0, wx.wxALL, 2)
			if i == 3 then btn:SetValue(true) end
		end
	end
	
	panel:Layout()
end

function main()
	parentwin = wx.NULL
	winid = wx.wxID_ANY
	title = wx.wxT("this is one minimal frame window")
	
	frame = wx.wxFrame(parentwin, winid, title, wx.wxDefaultPosition,
		wx.wxSize(600, 500), wx.wxDEFAULT_FRAME_STYLE)

	-- test basic controls
	panel = wx.wxPanel(frame, wx.wxID_ANY)
	CreateControls(panel)
    -- connect the paint event handler function with the paint event
    --panel:Connect(wx.wxEVT_PAINT, OnPaint)

    -- create a simple file menu
    local fileMenu = wx.wxMenu()
    fileMenu:Append(wx.wxID_EXIT, wx.wxT("E&xit"), wx.wxT("Quit the program"))

    -- create a simple help menu
    local helpMenu = wx.wxMenu()
    helpMenu:Append(wx.wxID_ABOUT, wx.wxT("&About"), 
		wx.wxT("About the wxLua Minimal Application"))

    -- create a menu bar and append the file and help menus
    local menuBar = wx.wxMenuBar()
    menuBar:Append(fileMenu, wx.wxT("&File"))
    menuBar:Append(helpMenu, wx.wxT("&Help"))

    -- attach the menu bar into the frame
    frame:SetMenuBar(menuBar)

    -- create a simple status bar
    frame:CreateStatusBar(1)
    frame:SetStatusText(wx.wxT("Welcome to wxLuaBind."))

    -- connect the selection event of the exit menu item to an
    -- event handler that closes the window
    frame:Connect(wx.wxID_EXIT, wx.wxEVT_COMMAND_MENU_SELECTED,
                  function (event) frame:Close(true) end )
                  
    -- connect the selection event of the about menu item    
    frame:Connect(wx.wxID_ABOUT, wx.wxEVT_COMMAND_MENU_SELECTED,
        function (event)
            wx.wxMessageBox(wx.wxT('This is the "About" dialog of the Minimal wxLuaBind sample.\n'..
                            " built with "..wx.wxVERSION_STRING),
                            wx.wxT("About wxLuaBind"),
                            wx.wxOK + wx.wxICON_INFORMATION,
                            frame)
        end )
	
	frame:Show(true)
end

main()

app:MainLoop()
