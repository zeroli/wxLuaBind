--[[
test lua using minimal wx sample
--]]

package.cpath = package.cpath..";../../Debug/?.dll;"
package.loadlib('wx.dll', 'luaopen_wx')()
--require("wx")

app = wx.App()

parentwin = wx.NULL
winid = wx.wxID_ANY
title = wx.String("this is one minimal frame window")
frame = wx.Frame(parentwin, winid, title, wx.wxDefaultPosition, wx.wxDefaultSize, wx.wxDEFAULT_FRAME_STYLE)
frame:Show(true)

app:MainLoop()


