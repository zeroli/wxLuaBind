--[[
test lua using minimal wx sample
--]]

package.cpath = package.cpath..";../../Debug/?.dll;"
package.loadlib('wx.dll', 'luaopen_wx')()
--require("wx")

app = wx.App()

function main()
	parentwin = wx.NULL
	winid = wx.wxID_ANY
	title = wx.String("this is one minimal frame window")
	frame = wx.Frame(parentwin, winid, title, wx.wxDefaultPosition,
		wx.wxDefaultSize, wx.wxDEFAULT_FRAME_STYLE)

	panel = wx.Panel(frame, wx.wxID_ANY)

    -- connect the paint event handler function with the paint event
    --panel:Connect(wx.wxEVT_PAINT, OnPaint)

    -- create a simple file menu
    local fileMenu = wx.Menu()
    fileMenu:Append(wx.wxID_EXIT, wx.String("E&xit"), wx.String("Quit the program"))

    -- create a simple help menu
    local helpMenu = wx.Menu()
    helpMenu:Append(wx.wxID_ABOUT, wx.String("&About"), 
		wx.String("About the wxLua Minimal Application"))

    -- create a menu bar and append the file and help menus
    local menuBar = wx.MenuBar()
    menuBar:Append(fileMenu, wx.String("&File"))
    menuBar:Append(helpMenu, wx.String("&Help"))

    -- attach the menu bar into the frame
    frame:SetMenuBar(menuBar)

    -- create a simple status bar
    frame:CreateStatusBar(1)
    frame:SetStatusText(wx.String("Welcome to wxLuaBind."))

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
            wx.wxMessageBox('This is the "About" dialog of the Minimal wxLua sample.\n'..
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


