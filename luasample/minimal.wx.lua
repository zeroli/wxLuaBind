--[[
test lua using minimal wx sample
--]]

--package.cpath = package.cpath..";../../Debug/?.dll;"
--package.loadlib('wx.dll', 'luaopen_wx')()
require("wx")

app = wx.wxApp()

function main()
	parentwin = wx.NULL
	winid = wx.wxID_ANY
	title = wx.wxString("this is one minimal frame window")
	frame = wx.wxFrame(parentwin, winid, title, wx.wxDefaultPosition,
		wx.wxDefaultSize, wx.wxDEFAULT_FRAME_STYLE)

	panel = wx.wxPanel(frame, wx.wxID_ANY)
	mainSizer = wx.wxBoxSizer(wx.wxVERTICAL)
	--panel.SetSizer(mainSizer)
	mainSizer.Add(wx.wxTextCtrl(panel, wx.wxID_ANY, wx.wxString("this is one testing text control"),
		wx.wxDefaultPosition, wx.wxSize(200, 40)), 0)
	mainSizer.Add(wx.wxStaticText(panel, wx.wxID_ANY, wx.wxString("this is one static text")), 0)
    -- connect the paint event handler function with the paint event
    --panel:Connect(wx.wxEVT_PAINT, OnPaint)

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
    --[[
    frame:Connect(wx.wxID_EXIT, wx.wxEVT_COMMAND_MENU_SELECTED,
                  function (event) frame:Close(true) end )
	--]]
    -- connect the selection event of the about menu item
    --[[
    frame:Connect(wx.wxID_ABOUT, wx.wxEVT_COMMAND_MENU_SELECTED,
        function (event)
            wx.MessageBox('This is the "About" dialog of the Minimal wxLua sample.\n'..
                            wxlua.wxLUA_VERSION_STRING.." built with "..wx.wxVERSION_STRING,
                            "About wxLua",
                            wx.wxOK + wx.wxICON_INFORMATION,
                            frame)
        end )
	--]]        
	
	frame:Show(true)
end

main()

app:MainLoop()


