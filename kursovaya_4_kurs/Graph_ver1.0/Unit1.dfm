object Form1: TForm1
  Left = 194
  Top = 133
  Width = 618
  Height = 365
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 24
    Top = 24
    Width = 75
    Height = 25
    Caption = #1086#1073#1079#1086#1088
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 24
    Top = 80
    Width = 75
    Height = 25
    Caption = #1087#1086#1089#1090#1088#1086#1080#1090#1100' '#1075#1088
    TabOrder = 1
    OnClick = Button2Click
  end
  object Chart1: TChart
    Left = 144
    Top = 24
    Width = 400
    Height = 250
    BackWall.Brush.Color = clWhite
    BackWall.Brush.Style = bsClear
    LeftWall.Brush.Color = clWhite
    Title.Text.Strings = (
      'Graph')
    BottomAxis.Automatic = False
    BottomAxis.AutomaticMaximum = False
    BottomAxis.AutomaticMinimum = False
    BottomAxis.Maximum = 9
    BottomAxis.Minimum = -9
    BottomAxis.PositionPercent = 50
    LeftAxis.Automatic = False
    LeftAxis.AutomaticMaximum = False
    LeftAxis.AutomaticMinimum = False
    LeftAxis.Maximum = 9
    LeftAxis.Minimum = -9
    LeftAxis.PositionPercent = 50
    View3D = False
    TabOrder = 2
  end
  object ColorBox1: TColorBox
    Left = 24
    Top = 120
    Width = 105
    Height = 22
    ItemHeight = 16
    TabOrder = 3
  end
  object OpenDialog1: TOpenDialog
    Left = 104
    Top = 24
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 88
    Top = 160
  end
end
