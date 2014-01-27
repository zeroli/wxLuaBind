--[[
test lua using controls wx sample
--]]

--package.cpath = package.cpath..";../../Debug/?.dll;"
--package.loadlib('wx.dll', 'luaopen_wx')()
require("wx")

app = wx.wxApp()

function CreateControls(panel)
	mainSizer = wx.wxBoxSizer(wx.wxVERTICAL)
	panel:SetSizer(mainSizer)
	-- test text ctrl
	mainSizer:Add(wx.wxTextCtrl(panel, wx.wxID_ANY, wx.wxString("this is one testing text control"),
		wx.wxDefaultPosition, wx.wxSize(200, 40)), 0)
	-- test static text
	mainSizer:Add(wx.wxStaticText(panel, wx.wxID_ANY, wx.wxString("this is one static text")), 0)
	-- test button
	mainSizer:Add(wx.wxButton(panel, wx.wxID_ANY, wx.wxString("this is one button")), 0)

	-- test combo box
	combo = wx.wxComboBox(panel, wx.wxID_ANY, wx.wxString("combo box text"))
	mainSizer:Add(combo, 0)
	for i=1, 5 do
		combo:Append(wx.wxString("item"..i))
	end
	-- test check box
	for i=1, 5 do
		checkbox = wx.wxCheckBox(panel, wx.wxID_ANY, wx.wxString("check box"..i))
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
		listbox:Insert(wx.wxString("list item"..i), listbox:GetCount())
	end
	-- test check list box
	checklistbox = wx.wxCheckListBox(panel, wx.wxID_ANY)
	sizer1:Add(checklistbox, 0)
	for i=1, 10 do
		checklistbox:Insert(wx.wxString("check list item"..i), checklistbox:GetCount())
		if i % 2 == 0 then
			checklistbox:Check(i-1, true)
		end		
	end

	--do	-- test radio box
		--sizer2 = wx.wxBoxSizer(wx.wxVERTICAL)
		--sizer1:Add(sizer2, 0)
		--radiobox = wx.wxRadioBox(panel, wx.wxID_ANY, wx.wxString("radio box test"))
		--sizer2:Add(radiobox, 0)
	--end
	
	do	-- test radio buttons
		staticbox = wx.wxStaticBox(panel, wx.wxID_ANY, wx.wxString("Radio button test"))
		sizer3 = wx.wxStaticBoxSizer(staticbox, wx.wxVERTICAL)
		sizer1:Add(sizer3, 0, wx.wxALL, 5)
		for i=1, 5 do
			btn = wx.wxRadioButton(panel, wx.wxID_ANY, wx.wxString("radio button"..i))
			sizer3:Add(btn, 0, wx.wxALL, 2)
			if i == 3 then btn:SetValue(true) end
		end
	end
	
	panel:Layout()
end

function main()
	parentwin = wx.NULL
	winid = wx.wxID_ANY
	title = wx.wxString("this is one minimal frame window")
	frame = wx.wxFrame(parentwin, winid, title, wx.wxDefaultPosition,
		wx.wxSize(600, 500), wx.wxDEFAULT_FRAME_STYLE)

	-- test basic controls
	panel = wx.wxPanel(frame, wx.wxID_ANY)
	CreateControls(panel)

    -- create a simple file menu
    local fileMenu = wx.wxMenu()
    fileMenu:Append(wx.wxID_EXIT, wx.wxString("E&xit"), wx.wxString("Quit the program"))

    -- create a simple help menu
    local helpMenu = wx.wxMenu()
    helpMenu:Append(wx.wxID_ABOUT, wx.wxString("&About"), 
		wx.wxString("About the wxLua Minimal Application"))

    -- create a menu bar and append the file and help menus
    local menuBar = wx.wxMenuBar()
    menuBar:Append(fileMenu, wx.wxString("&File"))
    menuBar:Append(helpMenu, wx.wxString("&Help"))

    -- attach the menu bar into the frame
    frame:SetMenuBar(menuBar)

    -- create a simple status bar
    frame:CreateStatusBar(1)
    frame:SetStatusText(wx.wxString("Welcome to wxLuaBind."))

    -- connect the selection event of the exit menu item to an
    -- event handler that closes the window
    frame:Connect(wx.wxID_EXIT, wx.wxEVT_COMMAND_MENU_SELECTED,
                  function (event) frame:Close(true) end )
                  
    -- connect the selection event of the about menu item    
    frame:Connect(wx.wxID_ABOUT, wx.wxEVT_COMMAND_MENU_SELECTED,
        function (event)
            wx.wxMessageBox(wx.wxString('This is the "About" dialog of the Minimal wxLuaBind sample.\n'..
                            " built with "..wx.wxVERSION_STRING),
                            wx.wxString("About wxLuaBind"),
                            wx.wxOK + wx.wxICON_INFORMATION,
                            frame)
        end )
	
	frame:Show(true)
end

main()

app:MainLoop()


