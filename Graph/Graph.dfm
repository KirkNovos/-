object Form1: TForm1
  Left = 198
  Top = 211
  Width = 651
  Height = 563
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
    Left = 472
    Top = 56
    Width = 75
    Height = 25
    Caption = #1086#1073#1079#1086#1088
    TabOrder = 0
    OnClick = Button1Click
  end
  object ScrollBar1: TScrollBar
    Left = 16
    Top = 280
    Width = 417
    Height = 17
    PageSize = 0
    TabOrder = 1
  end
  object ColorBox1: TColorBox
    Left = 472
    Top = 104
    Width = 129
    Height = 22
    ItemHeight = 16
    TabOrder = 2
  end
  object LabeledEdit1: TLabeledEdit
    Left = 472
    Top = 160
    Width = 121
    Height = 21
    EditLabel.Width = 62
    EditLabel.Height = 13
    EditLabel.Caption = 'LabeledEdit1'
    LabelPosition = lpAbove
    LabelSpacing = 3
    TabOrder = 3
  end
  object Button2: TButton
    Left = 472
    Top = 208
    Width = 97
    Height = 25
    Caption = #1087#1086#1083#1091#1095#1080#1090#1100' '#1075#1088#1072#1092#1080#1082
    TabOrder = 4
    OnClick = Button2Click
  end
  object Chart1: TChart
    Left = 24
    Top = 32
    Width = 400
    Height = 250
    BackWall.Brush.Color = clWhite
    BackWall.Brush.Style = bsClear
    Title.Text.Strings = (
      'Graphik')
    BottomAxis.StartPosition = 50
    BottomAxis.PositionPercent = 50
    LeftAxis.EndPosition = 50
    LeftAxis.PositionPercent = 50
    View3D = False
    TabOrder = 5
    object Series1: TLineSeries
      Marks.ArrowLength = 8
      Marks.Visible = False
      SeriesColor = clRed
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.DateTime = False
      XValues.Name = 'X'
      XValues.Multiplier = 1
      XValues.Order = loAscending
      YValues.DateTime = False
      YValues.Name = 'Y'
      YValues.Multiplier = 1
      YValues.Order = loNone
    end
  end
  object OpenDialog1: TOpenDialog
    Left = 568
    Top = 56
  end
end
