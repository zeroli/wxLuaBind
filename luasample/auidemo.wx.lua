local IDCounter = nil
local function NewID()
    if not IDCounter then IDCounter = wx.wxID_HIGHEST end
    IDCounter = IDCounter + 1
    return IDCounter
end


local MyFrame = {
    ID_CreateTree = NewID(),
    ID_CreateGrid = NewID(),
    ID_CreateText = NewID(),
    ID_CreateHTML = NewID(),
    ID_CreateNotebook = NewID(),
    ID_CreateSizeReport = NewID(),
    ID_GridContent = NewID(),
    ID_TextContent = NewID(),
    ID_TreeContent = NewID(),
    ID_HTMLContent = NewID(),
    ID_NotebookContent = NewID(),
    ID_SizeReportContent = NewID(),
    ID_CreatePerspective = NewID(),
    ID_CopyPerspectiveCode = NewID(),
    ID_AllowFloating = NewID(),
    ID_AllowActivePane = NewID(),
    ID_TransparentHint = NewID(),
    ID_VenetianBlindsHint = NewID(),
    ID_RectangleHint = NewID(),
    ID_NoHint = NewID(),
    ID_HintFade = NewID(),
    ID_NoVenetianFade = NewID(),
    ID_TransparentDrag = NewID(),
    ID_NoGradient = NewID(),
    ID_VerticalGradient = NewID(),
    ID_HorizontalGradient = NewID(),
    ID_Settings = NewID(),
    ID_NotebookNoCloseButton = NewID(),
    ID_NotebookCloseButton = NewID(),
    ID_NotebookCloseButtonAll = NewID(),
    ID_NotebookCloseButtonActive = NewID(),
    ID_NotebookAllowTabMove = NewID(),
    ID_NotebookAllowTabExternalMove = NewID(),
    ID_NotebookAllowTabSplit = NewID(),
    ID_NotebookWindowList = NewID(),
    ID_NotebookScrollButtons = NewID(),
    ID_NotebookTabFixedWidth = NewID(),
    ID_NotebookArtGloss = NewID(),
    ID_NotebookArtSimple = NewID(),
    ID_NotebookAlignTop = NewID(),
    ID_NotebookAlignBottom = NewID(),

    m_mgr = nil,
    m_perspectives = nil,
    m_perspectives_menu = nil,
    m_notebook_style = nil,
    m_notebook_theme = nil,
}
MyFrame.ID_FirstPerspective = MyFrame.ID_CreatePerspective+1000


--// (a utility control that always reports it's client size)
function wxSizeReportCtrl(parent, id, pos, size, mgr)
    local this = wx.wxControl(parent, id, pos, size, wx.wxNO_BORDER)
    local m_mgr = mgr;

    this:Connect(wx.wxEVT_SIZE, function(event)
            this:Refresh();
        end)

    --this:Connect(wx.wxEVT_ERASE_BACKGROUND, function(event)
            ----// intentionally empty
        --end)
--
    --this:Connect(wx.wxEVT_PAINT, function(event)
            --local dc = wx.wxPaintDC(this)
            --local sizexy = this:GetClientSize();
            --local sizex = sizexy:GetWidth()
            --local sizey = sizexy:GetHeight()
            --local s;
            --local h, w, height;
--
            --s = string.format("Size: %d x %d", sizex, sizey);
--
            --dc:SetFont(wx.wxNORMAL_FONT);
            --w,height=dc:GetTextExtent(s);
            --height = height + 3;
            --dc:SetBrush(wx.wxWHITE_BRUSH);
            --dc:SetPen(wx.wxWHITE_PEN);
            --dc:DrawRectangle(0, 0, sizex, sizey);
            --dc:SetPen(wx.wxLIGHT_GREY_PEN);
            --dc:DrawLine(0, 0, sizex, sizey);
            --dc:DrawLine(0, sizey, sizex, 0);
            --dc:DrawText(s, (sizex-w)/2, ((sizey-(height*5))/2));
--
            --if (m_mgr) then
                --local pi = m_mgr:GetPane(this);
--
                --s = string.format(wx.wxT("Layer: %d"), pi.dock_layer);
                --w,h = dc:GetTextExtent(s);
                --dc:DrawText(s, (sizex-w)/2, ((sizey-(height*5))/2)+(height*1));
--
                --s = string.format(wx.wxT("Dock: %d Row: %d"), pi.dock_direction, pi.dock_row);
                --w,h = dc:GetTextExtent(s);
                --dc:DrawText(s, (sizex-w)/2, ((sizey-(height*5))/2)+(height*2));
--
                --s = string.format(wx.wxT("Position: %d"), pi.dock_pos);
                --w,h = dc:GetTextExtent(s);
                --dc:DrawText(s, (sizex-w)/2, ((sizey-(height*5))/2)+(height*3));
--
                --s = string.format(wx.wxT("Proportion: %d"), pi.dock_proportion);
                --w,h = dc:GetTextExtent(s);
                --dc:DrawText(s, (sizex-w)/2, ((sizey-(height*5))/2)+(height*4));
            --end
--
            --dc:delete()
        --end)
--
    return this
end

--[[
local wxSizeReportCtrl = {
    m_mgr = nil,
}
function wxSizeReportCtrl:create(parent, id, pos, size, mgr)
    self.this = wx.wxControl(parent, id, pos, size, wx.wxNO_BORDER)
    self.m_mgr = mgr;

    local this = self.this

    this:Connect(wx.wxEVT_SIZE, function(event) self:OnSize(event) end)
    this:Connect(wx.wxEVT_PAINT, function(event) self:OnPaint(event) end)
    this:Connect(wx.wxEVT_ERASE_BACKGROUND, function(event) self:OnEraseBackground(event) end)

    return self
end

function wxSizeReportCtrl:OnPaint(evt)
        local this = self.this
        local dc = wx.wxPaintDC(this)
        local sizex,sizey = this:GetClientSizeWH();
        local s;
        local h, w, height;

        s = string.format(wx.wxT("Size: %d x %d"), sizex, sizey);

        dc:SetFont(wx.wxNORMAL_FONT);
        w,height=dc:GetTextExtent(s);
        height = height + 3;
        dc:SetBrush(wx.wxWHITE_BRUSH);
        dc:SetPen(wx.wxWHITE_PEN);
        dc:DrawRectangle(0, 0, sizex, sizey);
        dc:SetPen(wx.wxLIGHT_GREY_PEN);
        dc:DrawLine(0, 0, sizex, sizey);
        dc:DrawLine(0, sizey, sizex, 0);
        dc:DrawText(s, (sizex-w)/2, ((sizey-(height*5))/2));

        local m_mgr = self.m_mgr
        if (m_mgr) then
            ---- [.[hd.FIXME
            local pi = m_mgr:GetPane(this);

            s = string.format(wx.wxT("Layer: %d"), pi.dock_layer);
            w,h = dc:GetTextExtent(s);
            dc:DrawText(s, (size.x-w)/2, ((size.y-(height*5))/2)+(height*1));

            s = string.format(wx.wxT("Dock: %d Row: %d"), pi.dock_direction, pi.dock_row);
            w,h = dc:GetTextExtent(s);
            dc:DrawText(s, (size.x-w)/2, ((size.y-(height*5))/2)+(height*2));

            s = string.format(wx.wxT("Position: %d"), pi.dock_pos);
            w,h = dc:GetTextExtent(s);
            dc:DrawText(s, (size.x-w)/2, ((size.y-(height*5))/2)+(height*3));

            s = string.format(wx.wxT("Proportion: %d"), pi.dock_proportion);
            w,h = dc:GetTextExtent(s);
            dc:DrawText(s, (size.x-w)/2, ((size.y-(height*5))/2)+(height*4));
            ---- ].]
        end

        dc:delete()
end

function wxSizeReportCtrl:OnEraseBackground(evt)
        --// intentionally empty
end

function wxSizeReportCtrl:OnSize(evt)
        local this = self.this
        this:Refresh();
end
--]]


local SettingsPanel = {
    ID_PaneBorderSize = NewID(),
    ID_SashSize = NewID(),
    ID_CaptionSize = NewID(),
    ID_BackgroundColor = NewID(),
    ID_SashColor = NewID(),
    ID_InactiveCaptionColor = NewID(),
    ID_InactiveCaptionGradientColor = NewID(),
    ID_InactiveCaptionTextColor = NewID(),
    ID_ActiveCaptionColor = NewID(),
    ID_ActiveCaptionGradientColor = NewID(),
    ID_ActiveCaptionTextColor = NewID(),
    ID_BorderColor = NewID(),
    ID_GripperColor = NewID(),

    m_frame = nil,
    m_border_size = nil,
    m_sash_size = nil,
    m_caption_size = nil,
    m_inactive_caption_text_color = nil,
    m_inactive_caption_gradient_color = nil,
    m_inactive_caption_color = nil,
    m_active_caption_text_color = nil,
    m_active_caption_gradient_color = nil,
    m_active_caption_color = nil,
    m_sash_color = nil,
    m_background_color = nil,
    m_border_color = nil,
    m_gripper_color = nil,
}

function SettingsPanel:create(parent, frame)
    self.this = wx.wxPanel(parent.this, wx.wxID_ANY, wx.wxDefaultPosition, wx.wxDefaultSize)
    self.m_frame = frame
    local this = self.this

        --//wxBoxSizer* vert = new wxBoxSizer(wxVERTICAL);

        --//vert:Add(1, 1, 1, wxEXPAND);

        local s1 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        self.m_border_size = wx.wxSpinCtrl(this, self.ID_PaneBorderSize, wx.wxT(string.format(("%d"),
            frame:GetDockArt():GetMetric(wx.wxAUI_DOCKART_PANE_BORDER_SIZE))),
            wx.wxDefaultPosition, wx.wxSize(50,20), wx.wxSP_ARROW_KEYS, 0, 100,
            frame:GetDockArt():GetMetric(wx.wxAUI_DOCKART_PANE_BORDER_SIZE));
        s1:Add(1, 1, 1, wx.wxEXPAND);

        s1:Add(wx.wxStaticText(this, wx.wxID_ANY, wx.wxT("Pane Border Size:")));
        s1:Add(self.m_border_size, 0);
        s1:Add(1, 1, 1, wx.wxEXPAND);
        s1:SetItemMinSize(1, 180, 20);
        --//vert:Add(s1, 0, wxEXPAND | wxLEFT | wxBOTTOM, 5);

        local s2 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        self.m_sash_size = wx.wxSpinCtrl(this, self.ID_SashSize, wx.wxT(string.format(("%d"),
            frame:GetDockArt():GetMetric(wx.wxAUI_DOCKART_SASH_SIZE))),
            wx.wxDefaultPosition, wx.wxSize(50,20), wx.wxSP_ARROW_KEYS, 0, 100,
            frame:GetDockArt():GetMetric(wx.wxAUI_DOCKART_SASH_SIZE));
        s2:Add(1, 1, 1, wx.wxEXPAND);
        s2:Add(wx.wxStaticText(this, wx.wxID_ANY, wx.wxT("Sash Size:")));
        s2:Add(self.m_sash_size);
        s2:Add(1, 1, 1, wx.wxEXPAND);
        s2:SetItemMinSize(1, 180, 20);
        --//vert:Add(s2, 0, wxEXPAND | wxLEFT | wxBOTTOM, 5);

        local s3 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        self.m_caption_size = wx.wxSpinCtrl(this, self.ID_CaptionSize, wx.wxT(string.format(("%d"),
            frame:GetDockArt():GetMetric(wx.wxAUI_DOCKART_CAPTION_SIZE))),
            wx.wxDefaultPosition, wx.wxSize(50,20), wx.wxSP_ARROW_KEYS, 0, 100,
            frame:GetDockArt():GetMetric(wx.wxAUI_DOCKART_CAPTION_SIZE));
        s3:Add(1, 1, 1, wx.wxEXPAND);
        s3:Add(wx.wxStaticText(this, wx.wxID_ANY, wx.wxT("Caption Size:")));
        s3:Add(self.m_caption_size);
        s3:Add(1, 1, 1, wx.wxEXPAND);
        s3:SetItemMinSize(1, 180, 20);
        --//vert:Add(s3, 0, wxEXPAND | wxLEFT | wxBOTTOM, 5);

        --//vert:Add(1, 1, 1, wxEXPAND);


        local b = self:CreateColorBitmap(wx.wxBLACK);

        local s4 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        self.m_background_color = wx.wxBitmapButton(this, self.ID_BackgroundColor, b, wx.wxDefaultPosition, wx.wxSize(50,25));
        s4:Add(1, 1, 1, wx.wxEXPAND);
        s4:Add(wx.wxStaticText(this, wx.wxID_ANY, wx.wxT("Background Color:")));
        s4:Add(self.m_background_color);
        s4:Add(1, 1, 1, wx.wxEXPAND);
        s4:SetItemMinSize(1, 180, 20);

        local s5 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        self.m_sash_color = wx.wxBitmapButton(this, self.ID_SashColor, b, wx.wxDefaultPosition, wx.wxSize(50,25));
        s5:Add(1, 1, 1, wx.wxEXPAND);
        s5:Add(wx.wxStaticText(this, wx.wxID_ANY, wx.wxT("Sash Color:")));
        s5:Add(self.m_sash_color);
        s5:Add(1, 1, 1, wx.wxEXPAND);
        s5:SetItemMinSize(1, 180, 20);

        local s6 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        self.m_inactive_caption_color = wx.wxBitmapButton(this, self.ID_InactiveCaptionColor, b, wx.wxDefaultPosition, wx.wxSize(50,25));
        s6:Add(1, 1, 1, wx.wxEXPAND);
        s6:Add(wx.wxStaticText(this, wx.wxID_ANY, wx.wxT("Normal Caption:")));
        s6:Add(self.m_inactive_caption_color);
        s6:Add(1, 1, 1, wx.wxEXPAND);
        s6:SetItemMinSize(1, 180, 20);

        local s7 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        self.m_inactive_caption_gradient_color = wx.wxBitmapButton(this, self.ID_InactiveCaptionGradientColor, b, wx.wxDefaultPosition, wx.wxSize(50,25));
        s7:Add(1, 1, 1, wx.wxEXPAND);
        s7:Add(wx.wxStaticText(this, wx.wxID_ANY, wx.wxT("Normal Caption Gradient:")));
        s7:Add(self.m_inactive_caption_gradient_color);
        s7:Add(1, 1, 1, wx.wxEXPAND);
        s7:SetItemMinSize(1, 180, 20);

        local s8 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        self.m_inactive_caption_text_color = wx.wxBitmapButton(this, self.ID_InactiveCaptionTextColor, b, wx.wxDefaultPosition, wx.wxSize(50,25));
        s8:Add(1, 1, 1, wx.wxEXPAND);
        s8:Add(wx.wxStaticText(this, wx.wxID_ANY, wx.wxT("Normal Caption Text:")));
        s8:Add(self.m_inactive_caption_text_color);
        s8:Add(1, 1, 1, wx.wxEXPAND);
        s8:SetItemMinSize(1, 180, 20);

        local s9 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        self.m_active_caption_color = wx.wxBitmapButton(this, self.ID_ActiveCaptionColor, b, wx.wxDefaultPosition, wx.wxSize(50,25));
        s9:Add(1, 1, 1, wx.wxEXPAND);
        s9:Add(wx.wxStaticText(this, wx.wxID_ANY, wx.wxT("Active Caption:")));
        s9:Add(self.m_active_caption_color);
        s9:Add(1, 1, 1, wx.wxEXPAND);
        s9:SetItemMinSize(1, 180, 20);

        local s10 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        self.m_active_caption_gradient_color = wx.wxBitmapButton(this, self.ID_ActiveCaptionGradientColor, b, wx.wxDefaultPosition, wx.wxSize(50,25));
        s10:Add(1, 1, 1, wx.wxEXPAND);
        s10:Add(wx.wxStaticText(this, wx.wxID_ANY, wx.wxT("Active Caption Gradient:")));
        s10:Add(self.m_active_caption_gradient_color);
        s10:Add(1, 1, 1, wx.wxEXPAND);
        s10:SetItemMinSize(1, 180, 20);

        local s11 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        self.m_active_caption_text_color = wx.wxBitmapButton(this, self.ID_ActiveCaptionTextColor, b, wx.wxDefaultPosition, wx.wxSize(50,25));
        s11:Add(1, 1, 1, wx.wxEXPAND);
        s11:Add(wx.wxStaticText(this, wx.wxID_ANY, wx.wxT("Active Caption Text:")));
        s11:Add(self.m_active_caption_text_color);
        s11:Add(1, 1, 1, wx.wxEXPAND);
        s11:SetItemMinSize(1, 180, 20);

        local s12 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        self.m_border_color = wx.wxBitmapButton(this, self.ID_BorderColor, b, wx.wxDefaultPosition, wx.wxSize(50,25));
        s12:Add(1, 1, 1, wx.wxEXPAND);
        s12:Add(wx.wxStaticText(this, wx.wxID_ANY, wx.wxT("Border Color:")));
        s12:Add(self.m_border_color);
        s12:Add(1, 1, 1, wx.wxEXPAND);
        s12:SetItemMinSize(1, 180, 20);

        local s13 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        self.m_gripper_color = wx.wxBitmapButton(this, self.ID_GripperColor, b, wx.wxDefaultPosition, wx.wxSize(50,25));
        s13:Add(1, 1, 1, wx.wxEXPAND);
        s13:Add(wx.wxStaticText(this, wx.wxID_ANY, wx.wxT("Gripper Color:")));
        s13:Add(self.m_gripper_color);
        s13:Add(1, 1, 1, wx.wxEXPAND);
        s13:SetItemMinSize(1, 180, 20);

        local grid_sizer = wx.wxGridSizer(2,0,2,2);
        grid_sizer:SetHGap(5);
        grid_sizer:Add(s1);  grid_sizer:Add(s4);
        grid_sizer:Add(s2);  grid_sizer:Add(s5);
        grid_sizer:Add(s3);  grid_sizer:Add(s13);
        grid_sizer:Add(1,1); grid_sizer:Add(s12);
        grid_sizer:Add(s6);  grid_sizer:Add(s9);
        grid_sizer:Add(s7);  grid_sizer:Add(s10);
        grid_sizer:Add(s8);  grid_sizer:Add(s11);

        local cont_sizer = wx.wxBoxSizer(wx.wxVERTICAL);
        cont_sizer:Add(grid_sizer, 1, wx.wxEXPAND + wx.wxALL, 5);
        this:SetSizer(cont_sizer);
        this:GetSizer():SetSizeHints(this);
--#if 0
--        m_border_size:SetValue(frame:GetDockArt():GetMetric(wxAUI_DOCKART_PANE_BORDER_SIZE));
--        m_sash_size:SetValue(frame:GetDockArt():GetMetric(wxAUI_DOCKART_SASH_SIZE));
--        m_caption_size:SetValue(frame:GetDockArt():GetMetric(wxAUI_DOCKART_CAPTION_SIZE));
--#endif
        self:UpdateColors();

    this:Connect(self.ID_PaneBorderSize, wx.wxEVT_COMMAND_SPINCTRL_UPDATED, function(event) self:OnPaneBorderSize(event) end)
    this:Connect(self.ID_SashSize, wx.wxEVT_COMMAND_SPINCTRL_UPDATED, function(event) self:OnSashSize(event) end)
    this:Connect(self.ID_CaptionSize, wx.wxEVT_COMMAND_SPINCTRL_UPDATED, function(event) self:OnCaptionSize(event) end)
    this:Connect(self.ID_BackgroundColor, wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) self:OnSetColor(event) end)
    this:Connect(self.ID_SashColor, wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) self:OnSetColor(event) end)
    this:Connect(self.ID_InactiveCaptionColor, wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) self:OnSetColor(event) end)
    this:Connect(self.ID_InactiveCaptionGradientColor, wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) self:OnSetColor(event) end)
    this:Connect(self.ID_InactiveCaptionTextColor, wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) self:OnSetColor(event) end)
    this:Connect(self.ID_ActiveCaptionColor, wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) self:OnSetColor(event) end)
    this:Connect(self.ID_ActiveCaptionGradientColor, wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) self:OnSetColor(event) end)
    this:Connect(self.ID_ActiveCaptionTextColor, wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) self:OnSetColor(event) end)
    this:Connect(self.ID_BorderColor, wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) self:OnSetColor(event) end)
    this:Connect(self.ID_GripperColor, wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) self:OnSetColor(event) end)
--]]
    return self
end

function SettingsPanel:CreateColorBitmap(c)
        local image = wx.wxImage()
        image:Create(25,14);
        --[[
        for x = 0, 25-1 do
            for y = 0, 14-1 do
                local pixcol = c;
                if (x == 0 or x == 24 or y == 0 or y == 13) then
                    pixcol = wx.wxBLACK;
                end
                image:SetRGB(x, y, pixcol:Red(), pixcol:Green(), pixcol:Blue());
            end
        end
        --]]
        return wx.wxBitmap(image);
end

function SettingsPanel:UpdateColors()
        local bk = self.m_frame:GetDockArt():GetColor(wx.wxAUI_DOCKART_BACKGROUND_COLOUR);
        self.m_background_color:SetBitmapLabel(self:CreateColorBitmap(bk));

        local cap = self.m_frame:GetDockArt():GetColor(wx.wxAUI_DOCKART_INACTIVE_CAPTION_COLOUR);
        self.m_inactive_caption_color:SetBitmapLabel(self:CreateColorBitmap(cap));

        local capgrad = self.m_frame:GetDockArt():GetColor(wx.wxAUI_DOCKART_INACTIVE_CAPTION_GRADIENT_COLOUR);
        self.m_inactive_caption_gradient_color:SetBitmapLabel(self:CreateColorBitmap(capgrad));

        local captxt = self.m_frame:GetDockArt():GetColor(wx.wxAUI_DOCKART_INACTIVE_CAPTION_TEXT_COLOUR);
        self.m_inactive_caption_text_color:SetBitmapLabel(self:CreateColorBitmap(captxt));

        local acap = self.m_frame:GetDockArt():GetColor(wx.wxAUI_DOCKART_ACTIVE_CAPTION_COLOUR);
        self.m_active_caption_color:SetBitmapLabel(self:CreateColorBitmap(acap));

        local acapgrad = self.m_frame:GetDockArt():GetColor(wx.wxAUI_DOCKART_ACTIVE_CAPTION_GRADIENT_COLOUR);
        self.m_active_caption_gradient_color:SetBitmapLabel(self:CreateColorBitmap(acapgrad));

        local acaptxt = self.m_frame:GetDockArt():GetColor(wx.wxAUI_DOCKART_ACTIVE_CAPTION_TEXT_COLOUR);
        self.m_active_caption_text_color:SetBitmapLabel(self:CreateColorBitmap(acaptxt));

        local sash = self.m_frame:GetDockArt():GetColor(wx.wxAUI_DOCKART_SASH_COLOUR);
        self.m_sash_color:SetBitmapLabel(self:CreateColorBitmap(sash));

        local border = self.m_frame:GetDockArt():GetColor(wx.wxAUI_DOCKART_BORDER_COLOUR);
        self.m_border_color:SetBitmapLabel(self:CreateColorBitmap(border));

        local gripper = self.m_frame:GetDockArt():GetColor(wx.wxAUI_DOCKART_GRIPPER_COLOUR);
        self.m_gripper_color:SetBitmapLabel(self:CreateColorBitmap(gripper));
end

function SettingsPanel:OnPaneBorderSize(event)
        self.m_frame:GetDockArt():SetMetric(wx.wxAUI_DOCKART_PANE_BORDER_SIZE,
                                         event:GetInt()); --event:GetPosition());
        self.m_frame:DoUpdate();
end

function SettingsPanel:OnSashSize(event)
        self.m_frame:GetDockArt():SetMetric(wx.wxAUI_DOCKART_SASH_SIZE,
                                         event:GetInt()); --event:GetPosition());
        self.m_frame:DoUpdate();
end

function SettingsPanel:OnCaptionSize(event)
        self.m_frame:GetDockArt():SetMetric(wx.wxAUI_DOCKART_CAPTION_SIZE,
                                         event:GetInt()); --event:GetPosition());
        self.m_frame:DoUpdate();
end

function SettingsPanel:OnSetColor(event)
        local dlg = wx.wxColourDialog(self.m_frame.this);
        dlg:SetTitle(wx._("Color Picker"));
        if (dlg:ShowModal() ~= wx.wxID_OK) then
            return;
        end

        local var = 0;
        local id = event:GetId()

        if     id == self.ID_BackgroundColor then              var = wx.wxAUI_DOCKART_BACKGROUND_COLOUR;
        elseif id == self.ID_SashColor then                    var = wx.wxAUI_DOCKART_SASH_COLOUR;
        elseif id == self.ID_InactiveCaptionColor then         var = wx.wxAUI_DOCKART_INACTIVE_CAPTION_COLOUR;
        elseif id == self.ID_InactiveCaptionGradientColor then var = wx.wxAUI_DOCKART_INACTIVE_CAPTION_GRADIENT_COLOUR;
        elseif id == self.ID_InactiveCaptionTextColor then     var = wx.wxAUI_DOCKART_INACTIVE_CAPTION_TEXT_COLOUR;
        elseif id == self.ID_ActiveCaptionColor then           var = wx.wxAUI_DOCKART_ACTIVE_CAPTION_COLOUR;
        elseif id == self.ID_ActiveCaptionGradientColor then   var = wx.wxAUI_DOCKART_ACTIVE_CAPTION_GRADIENT_COLOUR;
        elseif id == self.ID_ActiveCaptionTextColor then       var = wx.wxAUI_DOCKART_ACTIVE_CAPTION_TEXT_COLOUR;
        elseif id == self.ID_BorderColor then                  var = wx.wxAUI_DOCKART_BORDER_COLOUR;
        elseif id == self.ID_GripperColor then                 var = wx.wxAUI_DOCKART_GRIPPER_COLOUR;
        else return;
        end

        self.m_frame:GetDockArt():SetColor(var, dlg:GetColourData():GetColour());
        self.m_frame:DoUpdate();
        self:UpdateColors();
end




function MyFrame:create(parent, id, title, pos, size, style)
    self.this = wx.wxFrame(wx.NULL,
                        wx.wxID_ANY,
                        wx.wxT("wxAUI Sample Application"),
                        wx.wxDefaultPosition,
                        wx.wxSize(800, 600));
    local this = self.this


    --// tell wxAuiManager to manage this frame
    self.m_mgr = wx.wxAuiManager()
    self.m_mgr:SetManagedWindow(this);

--[[
    --// set frame icon
    --this:SetIcon(wx.wxIcon(sample_xpm));
    local bitmap = wx.wxBitmap(sample_xpm)
    local icon = wx.wxIcon()
    icon:CopyFromBitmap(bitmap)
    this:SetIcon(icon)
    --bitmap:delete()
    --icon:delete()
--]]
    --// set up default notebook style
    self.m_notebook_style = wx.wxAUI_NB_DEFAULT_STYLE + wx.wxAUI_NB_TAB_EXTERNAL_MOVE + wx.wxNO_BORDER;
    self.m_notebook_theme = 0;

    --// create menu
    local mb = wx.wxMenuBar();

    local file_menu = wx.wxMenu();
    file_menu:Append(wx.wxID_EXIT, wx._("Exit"));

    local view_menu = wx.wxMenu();
    view_menu:Append(self.ID_CreateText, wx._("Create Text Control"));
    view_menu:Append(self.ID_CreateHTML, wx._("Create HTML Control"));
    view_menu:Append(self.ID_CreateTree, wx._("Create Tree"));
    view_menu:Append(self.ID_CreateGrid, wx._("Create Grid"));
    view_menu:Append(self.ID_CreateNotebook, wx._("Create Notebook"));
    view_menu:Append(self.ID_CreateSizeReport, wx._("Create Size Reporter"));
    view_menu:AppendSeparator();
    view_menu:Append(self.ID_GridContent, wx._("Use a Grid for the Content Pane"));
    view_menu:Append(self.ID_TextContent, wx._("Use a Text Control for the Content Pane"));
    view_menu:Append(self.ID_HTMLContent, wx._("Use an HTML Control for the Content Pane"));
    view_menu:Append(self.ID_TreeContent, wx._("Use a Tree Control for the Content Pane"));
    view_menu:Append(self.ID_NotebookContent, wx._("Use a wxAuiNotebook control for the Content Pane"));
    view_menu:Append(self.ID_SizeReportContent, wx._("Use a Size Reporter for the Content Pane"));

    local options_menu = wx.wxMenu();
    options_menu:AppendRadioItem(self.ID_TransparentHint, wx._("Transparent Hint"));
    options_menu:AppendRadioItem(self.ID_VenetianBlindsHint, wx._("Venetian Blinds Hint"));
    options_menu:AppendRadioItem(self.ID_RectangleHint, wx._("Rectangle Hint"));
    options_menu:AppendRadioItem(self.ID_NoHint, wx._("No Hint"));
    options_menu:AppendSeparator();
    options_menu:AppendCheckItem(self.ID_HintFade, wx._("Hint Fade-in"));
    options_menu:AppendCheckItem(self.ID_AllowFloating, wx._("Allow Floating"));
    options_menu:AppendCheckItem(self.ID_NoVenetianFade, wx._("Disable Venetian Blinds Hint Fade-in"));
    options_menu:AppendCheckItem(self.ID_TransparentDrag, wx._("Transparent Drag"));
    options_menu:AppendCheckItem(self.ID_AllowActivePane, wx._("Allow Active Pane"));
    options_menu:AppendSeparator();
    options_menu:AppendRadioItem(self.ID_NoGradient, wx._("No Caption Gradient"));
    options_menu:AppendRadioItem(self.ID_VerticalGradient, wx._("Vertical Caption Gradient"));
    options_menu:AppendRadioItem(self.ID_HorizontalGradient, wx._("Horizontal Caption Gradient"));
    options_menu:AppendSeparator();
    options_menu:Append(self.ID_Settings, wx._("Settings Pane"));

    local notebook_menu = wx.wxMenu();
    notebook_menu:AppendRadioItem(self.ID_NotebookArtGloss, wx._("Glossy Theme (Default)"));
    notebook_menu:AppendRadioItem(self.ID_NotebookArtSimple, wx._("Simple Theme"));
    notebook_menu:AppendSeparator();
    notebook_menu:AppendRadioItem(self.ID_NotebookNoCloseButton, wx._("No Close Button"));
    notebook_menu:AppendRadioItem(self.ID_NotebookCloseButton, wx._("Close Button at Right"));
    notebook_menu:AppendRadioItem(self.ID_NotebookCloseButtonAll, wx._("Close Button on All Tabs"));
    notebook_menu:AppendRadioItem(self.ID_NotebookCloseButtonActive, wx._("Close Button on Active Tab"));
    notebook_menu:AppendSeparator();
    notebook_menu:AppendRadioItem(self.ID_NotebookAlignTop, wx._("Tab Top Alignment"));
    notebook_menu:AppendRadioItem(self.ID_NotebookAlignBottom, wx._("Tab Bottom Alignment"));
    notebook_menu:AppendSeparator();
    notebook_menu:AppendCheckItem(self.ID_NotebookAllowTabMove, wx._("Allow Tab Move"));
    notebook_menu:AppendCheckItem(self.ID_NotebookAllowTabExternalMove, wx._("Allow External Tab Move"));
    notebook_menu:AppendCheckItem(self.ID_NotebookAllowTabSplit, wx._("Allow Notebook Split"));
    notebook_menu:AppendCheckItem(self.ID_NotebookScrollButtons, wx._("Scroll Buttons Visible"));
    notebook_menu:AppendCheckItem(self.ID_NotebookWindowList, wx._("Window List Button Visible"));
    notebook_menu:AppendCheckItem(self.ID_NotebookTabFixedWidth, wx._("Fixed-width Tabs"));

    self.m_perspectives_menu = wx.wxMenu();
    self.m_perspectives_menu:Append(self.ID_CreatePerspective, wx._("Create Perspective"));
    self.m_perspectives_menu:Append(self.ID_CopyPerspectiveCode, wx._("Copy Perspective Data To Clipboard"));
    self.m_perspectives_menu:AppendSeparator();
    self.m_perspectives_menu:Append(self.ID_FirstPerspective+0, wx._("Default Startup"));
    self.m_perspectives_menu:Append(self.ID_FirstPerspective+1, wx._("All Panes"));

    local help_menu = wx.wxMenu();
    help_menu:Append(wx.wxID_ABOUT, wx._("About..."));

    mb:Append(file_menu, wx._("File"));
    mb:Append(view_menu, wx._("View"));
    mb:Append(self.m_perspectives_menu, wx._("Perspectives"));
    mb:Append(options_menu, wx._("Options"));
    mb:Append(notebook_menu, wx._("Notebook"));
    mb:Append(help_menu, wx._("Help"));

    this:SetMenuBar(mb);

    this:CreateStatusBar();
    this:GetStatusBar():SetStatusText(wx._("Ready"));


    --// min size for the frame itself isn't completely done.
    --// see the end up wxAuiManager::Update() for the test
    --// code. For now, just hard code a frame minimum size
    this:SetMinSize(wx.wxSize(400,300));

    --// create some toolbars
    local tb1 = wx.wxToolBar(this, wx.wxID_ANY, wx.wxDefaultPosition, wx.wxDefaultSize,
                                   wx.wxTB_FLAT + wx.wxTB_NODIVIDER);
    tb1:SetToolBitmapSize(wx.wxSize(48,48));
    tb1:AddTool(101, wx.wxT("Test"), wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_ERROR)));
    tb1:AddSeparator();
    tb1:AddTool(102, wx.wxT("Test"), wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_QUESTION)));
    tb1:AddTool(103, wx.wxT("Test"), wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_INFORMATION)));
    tb1:AddTool(103, wx.wxT("Test"), wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_WARNING)));
    tb1:AddTool(103, wx.wxT("Test"), wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_MISSING_IMAGE)));
    tb1:Realize();


    local tb2 = wx.wxToolBar(this, wx.wxID_ANY, wx.wxDefaultPosition, wx.wxDefaultSize,
                                   wx.wxTB_FLAT + wx.wxTB_NODIVIDER);
    tb2:SetToolBitmapSize(wx.wxSize(16,16));

    local tb2_bmp1 = wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_QUESTION), wx.wxT(wx.wxART_OTHER), wx.wxSize(16,16));
    tb2:AddTool(101, wx.wxT("Test"), tb2_bmp1);
    tb2:AddTool(101, wx.wxT("Test"), tb2_bmp1);
    tb2:AddTool(101, wx.wxT("Test"), tb2_bmp1);
    tb2:AddTool(101, wx.wxT("Test"), tb2_bmp1);
    tb2:AddSeparator();
    tb2:AddTool(101, wx.wxT("Test"), tb2_bmp1);
    tb2:AddTool(101, wx.wxT("Test"), tb2_bmp1);
    tb2:AddSeparator();
    tb2:AddTool(101, wx.wxT("Test"), tb2_bmp1);
    tb2:AddTool(101, wx.wxT("Test"), tb2_bmp1);
    tb2:AddTool(101, wx.wxT("Test"), tb2_bmp1);
    tb2:AddTool(101, wx.wxT("Test"), tb2_bmp1);
    tb2:Realize();


    local tb3 = wx.wxToolBar(this, wx.wxID_ANY, wx.wxDefaultPosition, wx.wxDefaultSize,
                                   wx.wxTB_FLAT + wx.wxTB_NODIVIDER);
    tb3:SetToolBitmapSize(wx.wxSize(16,16));
    local tb3_bmp1 = wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_FOLDER), wx.wxT(wx.wxART_OTHER), wx.wxSize(16,16));
    tb3:AddTool(101, wx.wxT("Test"), tb3_bmp1);
    tb3:AddTool(101, wx.wxT("Test"), tb3_bmp1);
    tb3:AddTool(101, wx.wxT("Test"), tb3_bmp1);
    tb3:AddTool(101, wx.wxT("Test"), tb3_bmp1);
    tb3:AddSeparator();
    tb3:AddTool(101, wx.wxT("Test"), tb3_bmp1);
    tb3:AddTool(101, wx.wxT("Test"), tb3_bmp1);
    tb3:Realize();


    local tb4 = wx.wxToolBar(this, wx.wxID_ANY, wx.wxDefaultPosition, wx.wxDefaultSize,
                                   wx.wxTB_FLAT + wx.wxTB_NODIVIDER + wx.wxTB_HORZ_TEXT);
    tb4:SetToolBitmapSize(wx.wxSize(16,16));
    local tb4_bmp1 = wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_NORMAL_FILE), wx.wxT(wx.wxART_OTHER), wx.wxSize(16,16));
    tb4:AddTool(101, wx.wxT("Item 1"), tb4_bmp1);
    tb4:AddTool(101, wx.wxT("Item 2"), tb4_bmp1);
    tb4:AddTool(101, wx.wxT("Item 3"), tb4_bmp1);
    tb4:AddTool(101, wx.wxT("Item 4"), tb4_bmp1);
    tb4:AddSeparator();
    tb4:AddTool(101, wx.wxT("Item 5"), tb4_bmp1);
    tb4:AddTool(101, wx.wxT("Item 6"), tb4_bmp1);
    tb4:AddTool(101, wx.wxT("Item 7"), tb4_bmp1);
    tb4:AddTool(101, wx.wxT("Item 8"), tb4_bmp1);
    tb4:Realize();

    --// create some toolbars
    local tb5 = wx.wxToolBar(this, wx.wxID_ANY, wx.wxDefaultPosition, wx.wxDefaultSize,
                                   wx.wxTB_FLAT + wx.wxTB_NODIVIDER + wx.wxTB_VERTICAL);
    tb5:SetToolBitmapSize(wx.wxSize(48,48));
    tb5:AddTool(101, wx.wxT("Test"), wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_ERROR)));
    tb5:AddSeparator();
    tb5:AddTool(102, wx.wxT("Test"), wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_QUESTION)));
    tb5:AddTool(103, wx.wxT("Test"), wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_INFORMATION)));
    tb5:AddTool(103, wx.wxT("Test"), wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_WARNING)));
    tb5:AddTool(103, wx.wxT("Test"), wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_MISSING_IMAGE)));
    tb5:Realize();

    --// add a bunch of panes
    self.m_mgr:AddPane(self:CreateSizeReportCtrl(), wx.wxAuiPaneInfo():
                  Name(wx.wxT("test1")):Caption(wx.wxT("Pane Caption")):
                  Top());

    self.m_mgr:AddPane(self:CreateSizeReportCtrl(), wx.wxAuiPaneInfo():
                  Name(wx.wxT("test2")):Caption(wx.wxT("Client Size Reporter")):
                  Bottom():Position(1):
                  CloseButton(true):MaximizeButton(true));

    self.m_mgr:AddPane(self:CreateSizeReportCtrl(), wx.wxAuiPaneInfo():
                  Name(wx.wxT("test3")):Caption(wx.wxT("Client Size Reporter")):
                  Bottom():
                  CloseButton(true):MaximizeButton(true));

    self.m_mgr:AddPane(self:CreateSizeReportCtrl(), wx.wxAuiPaneInfo():
                  Name(wx.wxT("test4")):Caption(wx.wxT("Pane Caption")):
                  Left());

    self.m_mgr:AddPane(self:CreateSizeReportCtrl(), wx.wxAuiPaneInfo():
                  Name(wx.wxT("test5")):Caption(wx.wxT("No Close Button")):
                  Right():CloseButton(false));

    self.m_mgr:AddPane(self:CreateSizeReportCtrl(), wx.wxAuiPaneInfo():
                  Name(wx.wxT("test6")):Caption(wx.wxT("Client Size Reporter")):
                  Right():Row(1):
                  CloseButton(true):MaximizeButton(true));

    self.m_mgr:AddPane(self:CreateSizeReportCtrl(), wx.wxAuiPaneInfo():
                  Name(wx.wxT("test7")):Caption(wx.wxT("Client Size Reporter")):
                  Left():Layer(1):
                  CloseButton(true):MaximizeButton(true));

    self.m_mgr:AddPane(self:CreateTreeCtrl(), wx.wxAuiPaneInfo():
                  Name(wx.wxT("test8")):Caption(wx.wxT("Tree Pane")):
                  Left():Layer(1):Position(1):
                  CloseButton(true):MaximizeButton(true));

    self.m_mgr:AddPane(self:CreateSizeReportCtrl(), wx.wxAuiPaneInfo():
                  Name(wx.wxT("test9")):Caption(wx.wxT("Min Size 200x100")):
                  BestSize(wx.wxSize(200,100)):MinSize(wx.wxSize(200,100)):
                  Bottom():Layer(1):
                  CloseButton(true):MaximizeButton(true));

    local wnd10 = self:CreateTextCtrl(wx.wxT("This pane will prompt the user before hiding."));
    self.m_mgr:AddPane(wnd10, wx.wxAuiPaneInfo():
                  Name(wx.wxT("test10")):Caption(wx.wxT("Text Pane with Hide Prompt")):
                  Bottom():Layer(1):Position(1));

    self.m_mgr:AddPane(self:CreateSizeReportCtrl(), wx.wxAuiPaneInfo():
                  Name(wx.wxT("test11")):Caption(wx.wxT("Fixed Pane")):
                  Bottom():Layer(1):Position(2):Fixed());


    self.m_mgr:AddPane(SettingsPanel:create(self,self).this, wx.wxAuiPaneInfo():
                  Name(wx.wxT("settings")):Caption(wx.wxT("Dock Manager Settings")):
                  Dockable(false):Float():Hide());

    --// create some center panes
--[[
    self.m_mgr:AddPane(self:CreateGrid(), wx.wxAuiPaneInfo():Name(wx.wxT("grid_content")):
                  CenterPane():Hide());
--]]
    self.m_mgr:AddPane(self:CreateTreeCtrl(), wx.wxAuiPaneInfo():Name(wx.wxT("tree_content")):
                  CenterPane():Hide());

    self.m_mgr:AddPane(self:CreateSizeReportCtrl(), wx.wxAuiPaneInfo():Name(wx.wxT("sizereport_content")):
                  CenterPane():Hide());

    self.m_mgr:AddPane(self:CreateTextCtrl(), wx.wxAuiPaneInfo():Name(wx.wxT("text_content")):
                  CenterPane():Hide():Hide());
    --self.m_mgr:AddPane(self:CreateHTMLCtrl(), wx.wxAuiPaneInfo():Name(wx.wxT("html_content")):
                  --CenterPane():Hide());
    self.m_mgr:AddPane(self:CreateNotebook(), wx.wxAuiPaneInfo():Name(wx.wxT("notebook_content")):
                  CenterPane():PaneBorder(false));

    --// add the toolbars to the manager
    self.m_mgr:AddPane(tb1, wx.wxAuiPaneInfo():
                  Name(wx.wxT("tb1")):Caption(wx.wxT("Big Toolbar")):
                  ToolbarPane():Top():
                  LeftDockable(false):RightDockable(false));

    self.m_mgr:AddPane(tb2, wx.wxAuiPaneInfo():
                  Name(wx.wxT("tb2")):Caption(wx.wxT("Toolbar 2")):
                  ToolbarPane():Top():Row(1):
                  LeftDockable(false):RightDockable(false));

    self.m_mgr:AddPane(tb3, wx.wxAuiPaneInfo():
                  Name(wx.wxT("tb3")):Caption(wx.wxT("Toolbar 3")):
                  ToolbarPane():Top():Row(1):Position(1):
                  LeftDockable(false):RightDockable(false));

    self.m_mgr:AddPane(tb4, wx.wxAuiPaneInfo():
                  Name(wx.wxT("tb4")):Caption(wx.wxT("Sample Bookmark Toolbar")):
                  ToolbarPane():Top():Row(2):
                  LeftDockable(false):RightDockable(false))

    self.m_mgr:AddPane(tb5, wx.wxAuiPaneInfo():
                  Name(wx.wxT("tb5")):Caption(wx.wxT("Sample Vertical Toolbar")):
                  ToolbarPane():Left():
                  GripperTop():
                  TopDockable(false):BottomDockable(false));

    self.m_mgr:AddPane(wx.wxButton(this, wx.wxID_ANY, wx._("Test Button")),
                  wx.wxAuiPaneInfo():Name(wx.wxT("tb6")):
                  ToolbarPane():Top():Row(2):Position(1):
                  LeftDockable(false):RightDockable(false):Hide());

    --// make some default perspectives
    --local perspective_all = self.m_mgr:SavePerspective();

    --local i, count;
    --local all_panes = self.m_mgr:GetAllPanes();
    --count = all_panes:GetCount()
    --for i = 0, count-1 do
        --if ( all_panes:Item(i):IsToolbar() == false) then
            --all_panes:Item(i):Hide();
        --end
    --end
    self.m_mgr:GetPane(wx.wxT("tb1")):Hide();
    self.m_mgr:GetPane(wx.wxT("tb6")):Hide();
    self.m_mgr:GetPane(wx.wxT("test8")):Show():Left():Layer(0):Row(0):Position(0);
    self.m_mgr:GetPane(wx.wxT("test10")):Show():Bottom():Layer(0):Row(0):Position(0);
    self.m_mgr:GetPane(wx.wxT("notebook_content")):Show();
    --local perspective_default = self.m_mgr:SavePerspective();

    --self.m_perspectives = wx.wxArrayString()
    --self.m_perspectives:Add(perspective_default);
    --self.m_perspectives:Add(perspective_all);

    --// "commit" all changes made to wxAuiManager
    self.m_mgr:Update();

    this:Connect(wx.wxEVT_DESTROY,
                 function(event)
                    --if (event:GetEventObject():DynamicCast("wxObject") == this:DynamicCast("wxObject")) then
                        -- You must ALWAYS UnInit() the wxAuiManager when closing
                        -- since it pushes event handlers into the frame.
                        self.m_mgr:UnInit()
                    --end 
                 end)
--    this:Connect(wx.wxEVT_ERASE_BACKGROUND, function(event) self:OnEraseBackground(event) end)
  --  this:Connect(wx.wxEVT_SIZE, function(event) self:OnSize(event) end)
    this:Connect(self.ID_CreateTree, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnCreateTree(event) end)
    this:Connect(self.ID_CreateGrid, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnCreateGrid(event) end)
    this:Connect(self.ID_CreateText, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnCreateText(event) end)
    this:Connect(self.ID_CreateHTML, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnCreateHTML(event) end)
    this:Connect(self.ID_CreateSizeReport, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnCreateSizeReport(event) end)
    this:Connect(self.ID_CreateNotebook, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnCreateNotebook(event) end)
    this:Connect(self.ID_CreatePerspective, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnCreatePerspective(event) end)
    this:Connect(self.ID_CopyPerspectiveCode, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnCopyPerspectiveCode(event) end)
    this:Connect(self.ID_AllowFloating, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnManagerFlag(event) end)
    this:Connect(self.ID_TransparentHint, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnManagerFlag(event) end)
    this:Connect(self.ID_VenetianBlindsHint, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnManagerFlag(event) end)
    this:Connect(self.ID_RectangleHint, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnManagerFlag(event) end)
    this:Connect(self.ID_NoHint, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnManagerFlag(event) end)
    this:Connect(self.ID_HintFade, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnManagerFlag(event) end)
    this:Connect(self.ID_NoVenetianFade, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnManagerFlag(event) end)
    this:Connect(self.ID_TransparentDrag, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnManagerFlag(event) end)
    this:Connect(self.ID_AllowActivePane, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnManagerFlag(event) end)
    this:Connect(self.ID_NotebookTabFixedWidth, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnNotebookFlag(event) end)
    this:Connect(self.ID_NotebookNoCloseButton, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnNotebookFlag(event) end)
    this:Connect(self.ID_NotebookCloseButton, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnNotebookFlag(event) end)
    this:Connect(self.ID_NotebookCloseButtonAll, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnNotebookFlag(event) end)
    this:Connect(self.ID_NotebookCloseButtonActive, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnNotebookFlag(event) end)
    this:Connect(self.ID_NotebookAllowTabMove, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnNotebookFlag(event) end)
    this:Connect(self.ID_NotebookAllowTabExternalMove, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnNotebookFlag(event) end)
    this:Connect(self.ID_NotebookAllowTabSplit, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnNotebookFlag(event) end)
    this:Connect(self.ID_NotebookScrollButtons, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnNotebookFlag(event) end)
    this:Connect(self.ID_NotebookWindowList, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnNotebookFlag(event) end)
    this:Connect(self.ID_NotebookArtGloss, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnNotebookFlag(event) end)
    this:Connect(self.ID_NotebookArtSimple, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnNotebookFlag(event) end)
    this:Connect(self.ID_NotebookAlignTop,  wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnTabAlignment(event) end)
    this:Connect(self.ID_NotebookAlignBottom,  wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnTabAlignment(event) end)
    this:Connect(self.ID_NoGradient, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnGradient(event) end)
    this:Connect(self.ID_VerticalGradient, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnGradient(event) end)
    this:Connect(self.ID_HorizontalGradient, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnGradient(event) end)
    this:Connect(self.ID_Settings, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnSettings(event) end)
    this:Connect(self.ID_GridContent, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnChangeContentPane(event) end)
    this:Connect(self.ID_TreeContent, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnChangeContentPane(event) end)
    this:Connect(self.ID_TextContent, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnChangeContentPane(event) end)
    this:Connect(self.ID_SizeReportContent, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnChangeContentPane(event) end)
    this:Connect(self.ID_HTMLContent, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnChangeContentPane(event) end)
    this:Connect(self.ID_NotebookContent, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnChangeContentPane(event) end)
    this:Connect(wx.wxID_EXIT, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnExit(event) end)
    this:Connect(wx.wxID_ABOUT, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnAbout(event) end)
    this:Connect(self.ID_NotebookTabFixedWidth, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_NotebookNoCloseButton, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_NotebookCloseButton, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_NotebookCloseButtonAll, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_NotebookCloseButtonActive, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_NotebookAllowTabMove, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_NotebookAllowTabExternalMove, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_NotebookAllowTabSplit, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_NotebookScrollButtons, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_NotebookWindowList, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_AllowFloating, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_TransparentHint, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_VenetianBlindsHint, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_RectangleHint, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_NoHint, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_HintFade, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_NoVenetianFade, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_TransparentDrag, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_NoGradient, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_VerticalGradient, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    this:Connect(self.ID_HorizontalGradient, wx.wxEVT_UPDATE_UI, function(event) self:OnUpdateUI(event) end)
    --hd.FIXME this:Connect(self.ID_FirstPerspective, self.ID_FirstPerspective+1000, wx.wxEVT_COMMAND_MENU_SELECTED_RANGE, function(event) self:OnRestorePerspective(event) end)
    this:Connect(self.ID_FirstPerspective+0, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnRestorePerspective(event) end)
    this:Connect(self.ID_FirstPerspective+1, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnRestorePerspective(event) end)
    this:Connect(self.ID_FirstPerspective+2, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnRestorePerspective(event) end)
    this:Connect(self.ID_FirstPerspective+3, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnRestorePerspective(event) end)
    this:Connect(self.ID_FirstPerspective+4, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnRestorePerspective(event) end)
    this:Connect(self.ID_FirstPerspective+5, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnRestorePerspective(event) end)
    this:Connect(self.ID_FirstPerspective+6, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnRestorePerspective(event) end)
    this:Connect(self.ID_FirstPerspective+7, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnRestorePerspective(event) end)
    this:Connect(self.ID_FirstPerspective+8, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnRestorePerspective(event) end)
    this:Connect(self.ID_FirstPerspective+9, wx.wxEVT_COMMAND_MENU_SELECTED, function(event) self:OnRestorePerspective(event) end)
    this:Connect(wx.wxEVT_AUI_PANE_CLOSE, function(event) self:OnPaneClose(event) end)
    this:Connect(wx.wxID_ANY, wx.wxEVT_COMMAND_AUINOTEBOOK_ALLOW_DND, function(event) self:OnAllowNotebookDnD(event) end)
    this:Connect(wx.wxID_ANY, wx.wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSE, function(event) self:OnNotebookPageClose(event) end)
      this:Connect(wx.wxID_EXIT, wx.wxEVT_COMMAND_MENU_SELECTED,
                  function (event) this:Close(true) end )
    return self
end


function MyFrame:dtor()
    self.m_mgr:UnInit();
end

function MyFrame:GetDockArt()
    return self.m_mgr:GetArtProvider();
end

function MyFrame:DoUpdate()
    self.m_mgr:Update();
end

function MyFrame:OnEraseBackground(event)
    event:Skip();
end

function MyFrame:OnSize(event)
    event:Skip();
end

function MyFrame:OnSettings(event)
    --// show the settings pane, and float it
    local floating_pane = self.m_mgr:GetPane(wx.wxT("settings")):Float():Show();

    if (floating_pane.floating_pos == wx.wxDefaultPosition) then
        floating_pane:FloatingPosition(self:GetStartPosition());
    end

    self.m_mgr:Update();
end

function MyFrame:OnGradient(event)
    local gradient = 0;

    local id = event:GetId()

    if      id == self.ID_NoGradient         then gradient = wx.wxAUI_GRADIENT_NONE;
    elseif  id == self.ID_VerticalGradient   then gradient = wx.wxAUI_GRADIENT_VERTICAL;
    elseif  id == self.ID_HorizontalGradient then gradient = wx.wxAUI_GRADIENT_HORIZONTAL;
    end

    self.m_mgr:GetArtProvider():SetMetric(wx.wxAUI_DOCKART_GRADIENT_TYPE, gradient);
    self.m_mgr:Update();
end

function MyFrame:OnManagerFlag(event)
    local flag = 0;
    local id = event:GetId()

--#if !defined(__WXMSW__) && !defined(__WXMAC__) && !defined(__WXGTK__)
if false then
    if (id == self.ID_TransparentDrag or
        id == self.ID_TransparentHint or
        id == self.ID_HintFade) then
        wx.wxMessageBox(wx.wxT("This option is presently only available on wxGTK, wxMSW and wxMac"));
        return;
    end
end
--#endif

    if (id == self.ID_TransparentHint or
        id == self.ID_VenetianBlindsHint or
        id == self.ID_RectangleHint or
        id == self.ID_NoHint) then
        local flags = self.m_mgr:GetFlags();

        --[[hd.FIXME
        --flags &= ~wxAUI_MGR_TRANSPARENT_HINT;
        --flags &= ~wxAUI_MGR_VENETIAN_BLINDS_HINT;
        --flags &= ~wxAUI_MGR_RECTANGLE_HINT;
        --]]
        flags = bit.band(flags, bit.bnot(wx.wxAUI_MGR_TRANSPARENT_HINT));
        flags = bit.band(flags, bit.bnot(wx.wxAUI_MGR_VENETIAN_BLINDS_HINT));
        flags = bit.band(flags, bit.bnot(wx.wxAUI_MGR_RECTANGLE_HINT));

        self.m_mgr:SetFlags(flags);
    end

    if      id == self.ID_AllowFloating      then flag = wx.wxAUI_MGR_ALLOW_FLOATING;
    elseif  id == self.ID_TransparentDrag    then flag = wx.wxAUI_MGR_TRANSPARENT_DRAG;
    elseif  id == self.ID_HintFade           then flag = wx.wxAUI_MGR_HINT_FADE;
    elseif  id == self.ID_NoVenetianFade     then flag = wx.wxAUI_MGR_NO_VENETIAN_BLINDS_FADE;
    elseif  id == self.ID_AllowActivePane    then flag = wx.wxAUI_MGR_ALLOW_ACTIVE_PANE;
    elseif  id == self.ID_TransparentHint    then flag = wx.wxAUI_MGR_TRANSPARENT_HINT;
    elseif  id == self.ID_VenetianBlindsHint then flag = wx.wxAUI_MGR_VENETIAN_BLINDS_HINT;
    elseif  id == self.ID_RectangleHint      then flag = wx.wxAUI_MGR_RECTANGLE_HINT;
    end

    if (flag) then
        --[[hd.FIXME
        m_mgr.SetFlags(m_mgr.GetFlags() ^ flag);
        --]]
        self.m_mgr:SetFlags(bit.bxor(self.m_mgr:GetFlags(), flag));
    end

    self.m_mgr:Update();
end


function MyFrame:OnNotebookFlag(event)
	if event == nil then
		wx.wxMessageBox(wx.wxT('This is the "About" dialog of the Minimal wxLuaBind sample.\n'..
                            " built with "..wx.wxVERSION_STRING),
                            wx.wxT("About wxLuaBind"),
                            wx.wxOK + wx.wxICON_INFORMATION,
                            self)
		return
	end
    local id = event:GetId();

    if (id == self.ID_NotebookNoCloseButton or
        id == self.ID_NotebookCloseButton or
        id == self.ID_NotebookCloseButtonAll or
        id == self.ID_NotebookCloseButtonActive) then
        --[[hd.FIXME
        m_notebook_style &= ~(wxAUI_NB_CLOSE_BUTTON |
                              wxAUI_NB_CLOSE_ON_ACTIVE_TAB |
                              wxAUI_NB_CLOSE_ON_ALL_TABS);
        --]]
        self.m_notebook_style = bit.band(self.m_notebook_style, bit.bnot(wx.wxAUI_NB_CLOSE_BUTTON +
                              wx.wxAUI_NB_CLOSE_ON_ACTIVE_TAB +
                              wx.wxAUI_NB_CLOSE_ON_ALL_TABS));
    end

    --[[hd.FIXME
            case ID_NotebookNoCloseButton: break;
            case ID_NotebookCloseButton: m_notebook_style |= wxAUI_NB_CLOSE_BUTTON; break;
            case ID_NotebookCloseButtonAll: m_notebook_style |= wxAUI_NB_CLOSE_ON_ALL_TABS; break;
            case ID_NotebookCloseButtonActive: m_notebook_style |= wxAUI_NB_CLOSE_ON_ACTIVE_TAB; break;
    --]]
    if     id == self.ID_NotebookNoCloseButton     then
    elseif id == self.ID_NotebookCloseButton       then self.m_notebook_style = bit.bor(self.m_notebook_style, wx.wxAUI_NB_CLOSE_BUTTON);
    elseif id == self.ID_NotebookCloseButtonAll    then self.m_notebook_style = bit.bor(self.m_notebook_style, wx.wxAUI_NB_CLOSE_ON_ALL_TABS);
    elseif id == self.ID_NotebookCloseButtonActive then self.m_notebook_style = bit.bor(self.m_notebook_style, wx.wxAUI_NB_CLOSE_ON_ACTIVE_TAB);
    end

    --[[hd.FIXME
    if (id == ID_NotebookAllowTabMove)
    {
        m_notebook_style ^= wxAUI_NB_TAB_MOVE;
    }
    if (id == ID_NotebookAllowTabExternalMove)
    {
        m_notebook_style ^= wxAUI_NB_TAB_EXTERNAL_MOVE;
    }
     else if (id == ID_NotebookAllowTabSplit)
    {
        m_notebook_style ^= wxAUI_NB_TAB_SPLIT;
    }
     else if (id == ID_NotebookWindowList)
    {
        m_notebook_style ^= wxAUI_NB_WINDOWLIST_BUTTON;
    }
     else if (id == ID_NotebookScrollButtons)
    {
        m_notebook_style ^= wxAUI_NB_SCROLL_BUTTONS;
    }
     else if (id == ID_NotebookTabFixedWidth)
    {
        m_notebook_style ^= wxAUI_NB_TAB_FIXED_WIDTH;
    }
    --]]
    if (id == self.ID_NotebookAllowTabMove) then
        self.m_notebook_style = bit.bxor(self.m_notebook_style, wx.wxAUI_NB_TAB_MOVE);
    end
    if (id == self.ID_NotebookAllowTabExternalMove) then
        self.m_notebook_style = bit.bxor(self.m_notebook_style, wx.wxAUI_NB_TAB_EXTERNAL_MOVE);
    elseif (id == self.ID_NotebookAllowTabSplit) then
        self.m_notebook_style = bit.bxor(self.m_notebook_style, wx.wxAUI_NB_TAB_SPLIT);
     elseif (id == self.ID_NotebookWindowList) then
        self.m_notebook_style = bit.bxor(self.m_notebook_style, wx.wxAUI_NB_WINDOWLIST_BUTTON);
     elseif (id == self.ID_NotebookScrollButtons) then
        self.m_notebook_style = bit.bxor(self.m_notebook_style, wx.wxAUI_NB_SCROLL_BUTTONS);
     elseif (id == self.ID_NotebookTabFixedWidth) then
        self.m_notebook_style = bit.bxor(self.m_notebook_style, wx.wxAUI_NB_TAB_FIXED_WIDTH);
    end

    local i, count;
    local all_panes = self.m_mgr:GetAllPanes();
    count = all_panes:GetCount()
    for i = 0, count-1 do
        local pane = all_panes:Item(i);
        if (pane.window:IsKindOf(wx.wxClassInfo.FindClass("wxAuiNotebook"))) then
            local nb = pane.window:DynamicCast("wxAuiNotebook");

            if (id == self.ID_NotebookArtGloss) then
                nb:SetArtProvider(wx.wxAuiDefaultTabArt());
                self.m_notebook_theme = 0;
             elseif (id == self.ID_NotebookArtSimple) then
                nb:SetArtProvider(wx.wxAuiSimpleTabArt());
                self.m_notebook_theme = 1;
            end

            nb:SetWindowStyleFlag(self.m_notebook_style);
            nb:Refresh();
        end
    end

end


function MyFrame:OnUpdateUI(event)
    local flags = self.m_mgr:GetFlags();
    local id = event:GetId()

	do return end
	
    if id == self.ID_NoGradient then
        --event.Check(m_mgr.GetArtProvider()->GetMetric(wxAUI_DOCKART_GRADIENT_TYPE) == wxAUI_GRADIENT_NONE);
        event:Check(self.m_mgr:GetArtProvider():GetMetric(wx.wxAUI_DOCKART_GRADIENT_TYPE) == wx.wxAUI_GRADIENT_NONE);
    elseif id == self.ID_VerticalGradient then
        --event.Check(m_mgr.GetArtProvider()->GetMetric(wxAUI_DOCKART_GRADIENT_TYPE) == wxAUI_GRADIENT_VERTICAL);
        event:Check(self.m_mgr:GetArtProvider():GetMetric(wx.wxAUI_DOCKART_GRADIENT_TYPE) == wx.wxAUI_GRADIENT_VERTICAL);
    elseif id == self.ID_HorizontalGradient then
        --event.Check(m_mgr.GetArtProvider()->GetMetric(wxAUI_DOCKART_GRADIENT_TYPE) == wxAUI_GRADIENT_HORIZONTAL);
        event:Check(self.m_mgr:GetArtProvider():GetMetric(wx.wxAUI_DOCKART_GRADIENT_TYPE) == wx.wxAUI_GRADIENT_HORIZONTAL);
    elseif id == self.ID_AllowFloating then
        --event.Check((flags & wxAUI_MGR_ALLOW_FLOATING) != 0);
        event:Check(bit.band(flags, wx.wxAUI_MGR_ALLOW_FLOATING) ~= 0);
    elseif id == self.ID_TransparentDrag then
        --event.Check((flags & wxAUI_MGR_TRANSPARENT_DRAG) != 0);
        event:Check(bit.band(flags, wx.wxAUI_MGR_TRANSPARENT_DRAG) ~= 0);
    elseif id == self.ID_TransparentHint then
        --event.Check((flags & wxAUI_MGR_TRANSPARENT_HINT) != 0);
        event:Check(bit.band(flags, wx.wxAUI_MGR_TRANSPARENT_HINT) ~= 0);
    elseif id == self.ID_VenetianBlindsHint then
        --event.Check((flags & wxAUI_MGR_VENETIAN_BLINDS_HINT) != 0);
        event:Check(bit.band(flags, wx.wxAUI_MGR_VENETIAN_BLINDS_HINT) ~= 0);
    elseif id == self.ID_RectangleHint then
        --event.Check((flags & wxAUI_MGR_RECTANGLE_HINT) != 0);
        event:Check(bit.band(flags, wx.wxAUI_MGR_RECTANGLE_HINT) ~= 0);
    elseif id == self.ID_NoHint then
        --event.Check(((wxAUI_MGR_TRANSPARENT_HINT |
        --              wxAUI_MGR_VENETIAN_BLINDS_HINT |
        --              wxAUI_MGR_RECTANGLE_HINT) & flags) == 0);
        event:Check(bit.band((wx.wxAUI_MGR_TRANSPARENT_HINT +
                          wx.wxAUI_MGR_VENETIAN_BLINDS_HINT +
                          wx.wxAUI_MGR_RECTANGLE_HINT), flags) == 0);
    elseif id == self.ID_HintFade then
        --event.Check((flags & wxAUI_MGR_HINT_FADE) != 0);
        event:Check(bit.band(flags, wx.wxAUI_MGR_HINT_FADE) ~= 0);
    elseif id == self.ID_NoVenetianFade then
        --event.Check((flags & wxAUI_MGR_NO_VENETIAN_BLINDS_FADE) != 0);
        event:Check(bit.band(flags, wx.wxAUI_MGR_NO_VENETIAN_BLINDS_FADE) ~= 0);

    elseif id == self.ID_NotebookNoCloseButton then
        --event.Check((m_notebook_style & (wxAUI_NB_CLOSE_BUTTON|wxAUI_NB_CLOSE_ON_ALL_TABS|wxAUI_NB_CLOSE_ON_ACTIVE_TAB)) != 0);
        event:Check(bit.band(self.m_notebook_style, (wx.wxAUI_NB_CLOSE_BUTTON + wx.wxAUI_NB_CLOSE_ON_ALL_TABS + wx.wxAUI_NB_CLOSE_ON_ACTIVE_TAB)) ~= 0);
    elseif id == self.ID_NotebookCloseButton then
        --event.Check((m_notebook_style & wxAUI_NB_CLOSE_BUTTON) != 0);
        event:Check(bit.band(self.m_notebook_style, wx.wxAUI_NB_CLOSE_BUTTON) ~= 0);
    elseif id == self.ID_NotebookCloseButtonAll then
        --event.Check((m_notebook_style & wxAUI_NB_CLOSE_ON_ALL_TABS) != 0);
        event:Check(bit.band(self.m_notebook_style, wx.wxAUI_NB_CLOSE_ON_ALL_TABS) ~= 0);
    elseif id == self.ID_NotebookCloseButtonActive then
        --event.Check((m_notebook_style & wxAUI_NB_CLOSE_ON_ACTIVE_TAB) != 0);
        event:Check(bit.band(self.m_notebook_style, wx.wxAUI_NB_CLOSE_ON_ACTIVE_TAB) ~= 0);
    elseif id == self.ID_NotebookAllowTabSplit then
        --event.Check((m_notebook_style & wxAUI_NB_TAB_SPLIT) != 0);
        event:Check(bit.band(self.m_notebook_style, wx.wxAUI_NB_TAB_SPLIT) ~= 0);
    elseif id == self.ID_NotebookAllowTabMove then
        --event.Check((m_notebook_style & wxAUI_NB_TAB_MOVE) != 0);
        event:Check(bit.band(self.m_notebook_style, wx.wxAUI_NB_TAB_MOVE) ~= 0);
    elseif id == self.ID_NotebookAllowTabExternalMove then
        --event.Check((m_notebook_style & wxAUI_NB_TAB_EXTERNAL_MOVE) != 0);
        event:Check(bit.band(self.m_notebook_style, wx.wxAUI_NB_TAB_EXTERNAL_MOVE) ~= 0);
    elseif id == self.ID_NotebookScrollButtons then
        --event.Check((m_notebook_style & wxAUI_NB_SCROLL_BUTTONS) != 0);
        event:Check(bit.band(self.m_notebook_style, wx.wxAUI_NB_SCROLL_BUTTONS) ~= 0);
    elseif id == self.ID_NotebookWindowList then
        --event.Check((m_notebook_style & wxAUI_NB_WINDOWLIST_BUTTON) != 0);
        event:Check(bit.band(self.m_notebook_style, wx.wxAUI_NB_WINDOWLIST_BUTTON) ~= 0);
    elseif id == self.ID_NotebookTabFixedWidth then
        --event.Check((m_notebook_style & wxAUI_NB_TAB_FIXED_WIDTH) != 0);
        event:Check(bit.band(self.m_notebook_style, wx.wxAUI_NB_TAB_FIXED_WIDTH) ~= 0);
    elseif id == self.ID_NotebookArtGloss then
        --event.Check(m_notebook_style == 0);
        event:Check(self.m_notebook_style == 0);
    elseif id == self.ID_NotebookArtSimple then
        --event.Check(m_notebook_style == 1);
        event:Check(self.m_notebook_style == 1);
    end
end

function MyFrame:OnPaneClose(evt)
    local this = self.this
    ----[[hd.FIXME
    if (evt:GetPane().name == wx.wxT("test10")) then
        local res = wx.wxMessageBox(wx.wxT("Are you sure you want to close/hide this pane?"),
                               wx.wxT("wxAUI"),
                               wx.wxYES_NO,
                               this);
        if (res ~= wx.wxYES) then
            evt:Veto();
        end
    end
    --]]
end

function MyFrame:OnCreatePerspective(event)
    local this = self.this
    local dlg = wx.wxTextEntryDialog(this, wx.wxT("Enter a name for the new perspective:"),
                          wx.wxT("wxAUI Test"));

    dlg:SetValue(string.format(wx.wxT("Perspective %u"), (self.m_perspectives:GetCount() + 1)));
    if (dlg:ShowModal() ~= wx.wxID_OK) then
        return;
    end

    if (self.m_perspectives:GetCount() == 0) then
        self.m_perspectives_menu:AppendSeparator();
    end

    self.m_perspectives_menu:Append(self.ID_FirstPerspective + self.m_perspectives:GetCount(), dlg:GetValue());
    self.m_perspectives:Add(self.m_mgr:SavePerspective());
end

function MyFrame:OnCopyPerspectiveCode(evt)
    local s = self.m_mgr:SavePerspective();

--[[
#if wxUSE_CLIPBOARD
    if (wx.wxTheClipboard:Open()) then
        wx.wxTheClipboard:SetData(wx.wxTextDataObject(s));
        wx.wxTheClipboard:Close();
    end
--#endif
--]]
    local clipBoard = wx.wxClipboard.Get()
    if clipBoard and clipBoard:Open() then
        clipBoard:SetData(wx.wxTextDataObject(s))
        clipBoard:Close()
    end

end

function MyFrame:OnRestorePerspective(evt)
    self.m_mgr:LoadPerspective(self.m_perspectives:Item(evt:GetId() - self.ID_FirstPerspective));
end

function MyFrame:OnNotebookPageClose(evt)
    local this = self.this
    local ctrl = evt:GetEventObject():DynamicCast("wxAuiNotebook");
    if (ctrl:GetPage(evt:GetSelection()):IsKindOf(wx.wxClassInfo.FindClass("wxHtmlWindow"))) then
        local res = wx.wxMessageBox(wx.wxT("Are you sure you want to close/hide this notebook page?"),
                       wx.wxT("wxAUI"),
                       wx.wxYES_NO,
                       this);
        if (res ~= wx.wxYES) then
            evt:Veto();
        end
    end
end

function MyFrame:OnAllowNotebookDnD(evt)
    --// for the purpose of this test application, explicitly
    --// allow all noteboko drag and drop events
    evt:Allow();
end

local x=0
function MyFrame:GetStartPosition()
    x = x+20;
    local pt = self.this:ClientToScreen(wx.wxPoint(0,0));
    return wx.wxPoint(pt.x + x, pt.y + x);
end

function MyFrame:OnCreateTree(event)
	if event == nil then
		wx.wxMessageBox(wx.wxT('This is the "About" dialog of the Minimal wxLuaBind sample.\n'..
                            " built with "..wx.wxVERSION_STRING),
                            wx.wxT("About wxLuaBind"),
                            wx.wxOK + wx.wxICON_INFORMATION,
                            self)
        return
	end
    self.m_mgr:AddPane(self:CreateTreeCtrl(), wx.wxAuiPaneInfo():
                  Caption(wx.wxT("Tree Control")):
                  Float():FloatingPosition(self:GetStartPosition()):
                  FloatingSize(wx.wxSize(150,300)));
    self.m_mgr:Update();
end

function MyFrame:OnCreateGrid(event)
--[[
    self.m_mgr:AddPane(self:CreateGrid(), wx.wxAuiPaneInfo():
                  Caption(wx.wxT("Grid")):
                  Float():FloatingPosition(self:GetStartPosition()):
                  FloatingSize(wx.wxSize(300,200)));
    self.m_mgr:Update();
    --]]
end

function MyFrame:OnCreateHTML(event)
--[[
    self.m_mgr:AddPane(self:CreateHTMLCtrl(), wx.wxAuiPaneInfo():
                  Caption(wx.wxT("HTML Control")):
                  Float():FloatingPosition(self:GetStartPosition()):
                  FloatingSize(wx.wxSize(300,200)));
    self.m_mgr:Update();
    -]]
end

function MyFrame:OnCreateNotebook(event)
    self.m_mgr:AddPane(self:CreateNotebook(), wx.wxAuiPaneInfo():
                  Caption(wx.wxT("Notebook")):
                  Float():FloatingPosition(self:GetStartPosition()):
                  --//FloatingSize(300,200):
                  CloseButton(true):MaximizeButton(true));
    self.m_mgr:Update();
end

function MyFrame:OnCreateText(event)
    self.m_mgr:AddPane(self:CreateTextCtrl(), wx.wxAuiPaneInfo():
                  Caption(wx.wxT("Text Control")):
                  Float():FloatingPosition(self:GetStartPosition()));
    self.m_mgr:Update();
end

function MyFrame:OnCreateSizeReport(event)
    self.m_mgr:AddPane(self:CreateSizeReportCtrl(), wx.wxAuiPaneInfo():
                  Caption(wx.wxT("Client Size Reporter")):
                  Float():FloatingPosition(self:GetStartPosition()):
                  CloseButton(true):MaximizeButton(true));
    self.m_mgr:Update();
end

function MyFrame:OnChangeContentPane(event)
    self.m_mgr:GetPane(wx.wxT("grid_content")):Show(event:GetId() == self.ID_GridContent);
    self.m_mgr:GetPane(wx.wxT("text_content")):Show(event:GetId() == self.ID_TextContent);
    self.m_mgr:GetPane(wx.wxT("tree_content")):Show(event:GetId() == self.ID_TreeContent);
    self.m_mgr:GetPane(wx.wxT("sizereport_content")):Show(event:GetId() == self.ID_SizeReportContent);
    self.m_mgr:GetPane(wx.wxT("html_content")):Show(event:GetId() == self.ID_HTMLContent);
    self.m_mgr:GetPane(wx.wxT("notebook_content")):Show(event:GetId() == self.ID_NotebookContent);
    self.m_mgr:Update();
end

function MyFrame:OnTabAlignment(evt)
    local i, count;
    local all_panes = self.m_mgr:GetAllPanes();
    count = all_panes:GetCount()
    for i = 0, count-1 do
        local pane = all_panes:Item(i);
        if (pane.window:IsKindOf(wx.wxClassInfo.FindClass("wxAuiNotebook"))) then
            local nb = pane.window:DynamicCast("wxAuiNotebook");

            if (evt:GetId() == self.ID_NotebookAlignTop) then
                --nb->SetWindowStyleFlag(nb->GetWindowStyleFlag()^wxAUI_NB_BOTTOM|wxAUI_NB_TOP);
                nb:SetWindowStyleFlag(bit.bxor(nb:GetWindowStyleFlag(), wx.wxAUI_NB_BOTTOM+wx.wxAUI_NB_TOP));
            elseif (evt:GetId() == self.ID_NotebookAlignBottom) then
                --nb->SetWindowStyleFlag(nb->GetWindowStyleFlag()^wxAUI_NB_TOP|wxAUI_NB_BOTTOM);
               nb:SetWindowStyleFlag(bit.bxor(nb:GetWindowStyleFlag(), wx.wxAUI_NB_TOP+wx.wxAUI_NB_BOTTOM));
            end
            nb:Refresh();
        end
    end
end

function MyFrame:OnExit(event)
    local this = self.this
    self:dtor() --hd.
    this:Close(true);
end

function MyFrame:OnAbout(event)
    local this = self.this
    wx.wxMessageBox(wx._("wxAUI Demo\nAn advanced window management library for wxWidgets\n(c) Copyright 2005-2006, Kirix Corporation"), wx._("About wxAUI Demo"), wx.wxOK, this);
end

local n = 0;
function MyFrame:CreateTextCtrl(ctrl_text)
    local this = self.this

    local text="";
    if (ctrl_text and ctrl_text ~= "") then
        text = ctrl_text;
    else
        text = string.format("This is text box %d", n+1); n=n+1
    end

    return wx.wxTextCtrl(this,wx.wxID_ANY, wx.wxT(text),
                          wx.wxPoint(0,0), wx.wxSize(150,90),
                          wx.wxNO_BORDER + wx.wxTE_MULTILINE);
end


function MyFrame:CreateGrid()
    local this = self.this
    return nil
    --[[
    local grid = wx.wxGrid(this, wx.wxID_ANY,
                              wx.wxPoint(0,0),
                              wx.wxSize(150,250),
                              wx.wxNO_BORDER + wx.wxWANTS_CHARS);
    grid:CreateGrid(50, 20);
    return grid;
    --]]
end

function MyFrame:CreateTreeCtrl()
    local this = self.this
    local tree = wx.wxTreeCtrl(this, wx.wxID_ANY,
                                      wx.wxPoint(0,0), wx.wxSize(160,250),
                                      wx.wxTR_DEFAULT_STYLE + wx.wxNO_BORDER);
--[[
    local imglist = wx.wxImageList(16, 16, true, 2);
    imglist:Add(wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_FOLDER), wx.wxT(wx.wxART_OTHER), wx.wxSize(16,16)));
    imglist:Add(wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_NORMAL_FILE), wx.wxT(wx.wxART_OTHER), wx.wxSize(16,16)));
    tree:AssignImageList(imglist);
--]]
    local root = tree:AddRoot(wx.wxT("wxAUI Project"), 0);
    local items = {} --local items = wx.wxArrayTreeItemIds();

    items[#items+1] = tree:AppendItem(root, wx.wxT("Item 1"), 0); --items:Add(tree:AppendItem(root, wx.wxT("Item 1"), 0));
    items[#items+1] = tree:AppendItem(root, wx.wxT("Item 2"), 0); --items:Add(tree:AppendItem(root, wx.wxT("Item 2"), 0));
    items[#items+1] = tree:AppendItem(root, wx.wxT("Item 3"), 0); --items:Add(tree:AppendItem(root, wx.wxT("Item 3"), 0));
    items[#items+1] = tree:AppendItem(root, wx.wxT("Item 4"), 0); --items:Add(tree:AppendItem(root, wx.wxT("Item 4"), 0));
    items[#items+1] = tree:AppendItem(root, wx.wxT("Item 5"), 0); --items:Add(tree:AppendItem(root, wx.wxT("Item 5"), 0));

    local i, count;
    count = #items --items:Count()
    for i = 1, count do --for i = 0, count-1 do
        local id = items[i]; --local id = items:Item(i);
        tree:AppendItem(id, wx.wxT("Subitem 1"), 1);
        tree:AppendItem(id, wx.wxT("Subitem 2"), 1);
        tree:AppendItem(id, wx.wxT("Subitem 3"), 1);
        tree:AppendItem(id, wx.wxT("Subitem 4"), 1);
        tree:AppendItem(id, wx.wxT("Subitem 5"), 1);
    end

    tree:Expand(root);

    return tree;
end

function MyFrame:CreateSizeReportCtrl(width, height)
    local this = self.this
    width = width or 0
    height = height or 0
    --local ctrl = wxSizeReportCtrl:create(this, wx.wxID_ANY,
    --                               wx.wxDefaultPosition,
    --                               wx.wxSize(width, height), self.m_mgr);
    --return ctrl.this;
    local ctrl = wxSizeReportCtrl(this, wx.wxID_ANY,
                                   wx.wxDefaultPosition,
                                   wx.wxSize(width, height), self.m_mgr);
    return ctrl;
end

function MyFrame:CreateHTMLCtrl(parent)
    local this = self.this
    if (not parent) then
        parent = this;
    end
	return nil
	--[[
    local ctrl = wx.wxHtmlWindow(parent, wx.wxID_ANY,
                                   wx.wxDefaultPosition,
                                   wx.wxSize(400,300));
    ctrl:SetPage(self:GetIntroText());
    return ctrl;
    --]]
end

function MyFrame:CreateNotebook()
    local this = self.this
   --// create the notebook off-window to avoid flicker
   --local client_size = this:GetClientSize();
   local wh = this:GetClientSize()
   local w = wh:GetWidth()
   local h = wh:GetHeight()

   local ctrl = wx.wxAuiNotebook(this, wx.wxID_ANY,
                                    wx.wxPoint(w, h), --wx.wxPoint(client_size.x, client_size.y),
                                    wx.wxSize(430,200),
                                    self.m_notebook_style);

   local page_bmp = wx.wxArtProvider.GetBitmap(wx.wxT(wx.wxART_NORMAL_FILE), wx.wxT(wx.wxART_OTHER), wx.wxSize(16,16));

   --ctrl:AddPage(self:CreateHTMLCtrl(ctrl), wx.wxT("Welcome to wxAUI") , false, page_bmp);

   local panel = wx.wxPanel( ctrl, wx.wxID_ANY );
   local flex = wx.wxFlexGridSizer( 2,0 );
   flex:AddGrowableRow( 0 );
   flex:AddGrowableCol( 1 );
   flex:Add( 5,5 );   flex:Add( 5,5 );
   flex:Add( wx.wxStaticText( panel, -1, wx.wxT("wxTextCtrl:") ), 0, wx.wxALL+wx.wxALIGN_CENTRE, 5 );
   flex:Add( wx.wxTextCtrl( panel, -1, wx.wxT(""), wx.wxDefaultPosition, wx.wxSize(100,-1)),
                1, wx.wxALL+wx.wxALIGN_CENTRE, 5 );
   flex:Add( wx.wxStaticText( panel, -1, wx.wxT("wxSpinCtrl:") ), 0, wx.wxALL+wx.wxALIGN_CENTRE, 5 );
   flex:Add( wx.wxSpinCtrl( panel, -1, wx.wxT("5"), wx.wxDefaultPosition, wx.wxSize(100,-1),
                wx.wxSP_ARROW_KEYS, 5, 50, 5 ), 0, wx.wxALL+wx.wxALIGN_CENTRE, 5 );
   flex:Add( 5,5 );   flex:Add( 5,5 );
   panel:SetSizer( flex );
   ctrl:AddPage( panel, wx.wxT("wxPanel"), false, page_bmp );


   ctrl:AddPage( wx.wxTextCtrl( ctrl, wx.wxID_ANY, wx.wxT("Some text"),
                wx.wxDefaultPosition, wx.wxDefaultSize, wx.wxTE_MULTILINE+wx.wxNO_BORDER) , wx.wxT("wxTextCtrl 1"), false, page_bmp );

   ctrl:AddPage( wx.wxTextCtrl( ctrl, wx.wxID_ANY, wx.wxT("Some more text"),
                wx.wxDefaultPosition, wx.wxDefaultSize, wx.wxTE_MULTILINE+wx.wxNO_BORDER) , wx.wxT("wxTextCtrl 2") );

   ctrl:AddPage( wx.wxTextCtrl( ctrl, wx.wxID_ANY, wx.wxT("Some more text"),
                wx.wxDefaultPosition, wx.wxDefaultSize, wx.wxTE_MULTILINE+wx.wxNO_BORDER) , wx.wxT("wxTextCtrl 3") );

   ctrl:AddPage( wx.wxTextCtrl( ctrl, wx.wxID_ANY, wx.wxT("Some more text"),
                wx.wxDefaultPosition, wx.wxDefaultSize, wx.wxTE_MULTILINE+wx.wxNO_BORDER) , wx.wxT("wxTextCtrl 4") );

   ctrl:AddPage( wx.wxTextCtrl( ctrl, wx.wxID_ANY, wx.wxT("Some more text"),
                wx.wxDefaultPosition, wx.wxDefaultSize, wx.wxTE_MULTILINE+wx.wxNO_BORDER) , wx.wxT("wxTextCtrl 5") );

   ctrl:AddPage( wx.wxTextCtrl( ctrl, wx.wxID_ANY, wx.wxT("Some more text"),
                wx.wxDefaultPosition, wx.wxDefaultSize, wx.wxTE_MULTILINE+wx.wxNO_BORDER) , wx.wxT("wxTextCtrl 6") );

   ctrl:AddPage( wx.wxTextCtrl( ctrl, wx.wxID_ANY, wx.wxT("Some more text"),
                wx.wxDefaultPosition, wx.wxDefaultSize, wx.wxTE_MULTILINE+wx.wxNO_BORDER) , wx.wxT("wxTextCtrl 7 (longer title)") );

   ctrl:AddPage( wx.wxTextCtrl( ctrl, wx.wxID_ANY, wx.wxT("Some more text"),
                wx.wxDefaultPosition, wx.wxDefaultSize, wx.wxTE_MULTILINE+wx.wxNO_BORDER) , wx.wxT("wxTextCtrl 8") );

   return ctrl;
end


function MyFrame:GetIntroText()
    local text = [[
        <html><body>
        <h3>Welcome to wxAUI</h3>
        <br/><b>Overview</b><br/>
        <p>wxAUI is an Advanced User Interface library for the wxWidgets toolkit
        that allows developers to create high-quality, cross-platform user
        interfaces quickly and easily.</p>
        <p><b>Features</b></p>
        <p>With wxAUI, developers can create application frameworks with:</p>
        <ul>
        <li>Native, dockable floating frames</li>
        <li>Perspective saving and loading</li>
        <li>Native toolbars incorporating real-time, &quot;spring-loaded&quot; dragging</li>
        <li>Customizable floating/docking behavior</li>
        <li>Completely customizable look-and-feel</li>
        <li>Optional transparent window effects (while dragging or docking)</li>
        <li>Splittable notebook control</li>
        </ul>
        <p><b>What's new in 0.9.3?</b></p>
        <p>wxAUI 0.9.3, which is now bundled with wxWidgets, adds the following features:
        <ul>
        <li>New wxAuiNotebook class, a dynamic splittable notebook control</li>
        <li>New wxAuiMDI* classes, a tab-based MDI and drop-in replacement for classic MDI</li>
        <li>Maximize/Restore buttons implemented</li>
        <li>Better hinting with wxGTK</li>
        <li>Class rename.  'wxAui' is now the standard class prefix for all wxAUI classes</li>
        <li>Lots of bug fixes</li>
        </ul>
        <p><b>What's new in 0.9.2?</b></p>
        <p>The following features/fixes have been added since the last version of wxAUI:</p>
        <ul>
        <li>Support for wxMac</li>
        <li>Updates for wxWidgets 2.6.3</li>
        <li>Fix to pass more unused events through</li>
        <li>Fix to allow floating windows to receive idle events</li>
        <li>Fix for minimizing/maximizing problem with transparent hint pane</li>
        <li>Fix to not paint empty hint rectangles</li>
        <li>Fix for 64-bit compilation</li>
        </ul>
        <p><b>What changed in 0.9.1?</b></p>
        <p>The following features/fixes were added in wxAUI 0.9.1:</p>
        <ul>
        <li>Support for MDI frames</li>
        <li>Gradient captions option</li>
        <li>Active/Inactive panes option</li>
        <li>Fix for screen artifacts/paint problems</li>
        <li>Fix for hiding/showing floated window problem</li>
        <li>Fix for floating pane sizing problem</li>
        <li>Fix for drop position problem when dragging around center pane margins</li>
        <li>LF-only text file formatting for source code</li>
        </ul>
        <p>See README.txt for more information.</p>
        </body></html>
    ]]

    return text;
end



function main()
    local myframe = MyFrame:create()
    local frame = myframe.this
    frame:Show();
    return true;
end

main()
