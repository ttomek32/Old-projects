object Form1: TForm1
  Left = 468
  Top = 136
  Cursor = crNo
  BiDiMode = bdLeftToRight
  BorderStyle = bsToolWindow
  Caption = 'Break Wall | Thomas Martin'
  ClientHeight = 481
  ClientWidth = 449
  Color = clBackground
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  ParentBiDiMode = False
  OnCreate = FormCreate
  OnKeyDown = FormKeyDown
  PixelsPerInch = 96
  TextHeight = 13
  object pad: TShape
    Left = 184
    Top = 424
    Width = 81
    Height = 9
  end
  object ball: TShape
    Left = 216
    Top = 408
    Width = 17
    Height = 17
    Pen.Style = psClear
    Shape = stCircle
  end
  object Label1: TLabel
    Left = 8
    Top = 448
    Width = 60
    Height = 24
    Caption = 'Score:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clYellow
    Font.Height = -27
    Font.Name = 'Terminal'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 72
    Top = 442
    Width = 12
    Height = 32
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clYellow
    Font.Height = -33
    Font.Name = 'Terminal'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 364
    Top = 442
    Width = 12
    Height = 32
    Alignment = taRightJustify
    BiDiMode = bdRightToLeft
    Caption = '3'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clYellow
    Font.Height = -33
    Font.Name = 'Terminal'
    Font.Style = []
    ParentBiDiMode = False
    ParentFont = False
  end
  object Label4: TLabel
    Left = 384
    Top = 450
    Width = 60
    Height = 24
    Caption = ':Balls'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clYellow
    Font.Height = -27
    Font.Name = 'Terminal'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 160
    Top = 442
    Width = 132
    Height = 32
    Caption = '-> Pause <-'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clYellow
    Font.Height = -33
    Font.Name = 'Terminal'
    Font.Style = []
    ParentFont = False
  end
  object Shape1: TShape
    Left = 0
    Top = 0
    Width = 57
    Height = 25
  end
  object Shape2: TShape
    Left = 56
    Top = 0
    Width = 57
    Height = 25
  end
  object Shape3: TShape
    Left = 112
    Top = 0
    Width = 57
    Height = 25
  end
  object Shape4: TShape
    Left = 168
    Top = 0
    Width = 57
    Height = 25
  end
  object Shape5: TShape
    Left = 224
    Top = 0
    Width = 57
    Height = 25
  end
  object Shape6: TShape
    Left = 280
    Top = 0
    Width = 57
    Height = 25
  end
  object Shape7: TShape
    Left = 336
    Top = 0
    Width = 57
    Height = 25
  end
  object Shape8: TShape
    Left = 392
    Top = 0
    Width = 57
    Height = 25
  end
  object Shape9: TShape
    Left = 0
    Top = 24
    Width = 57
    Height = 25
  end
  object Shape10: TShape
    Left = 56
    Top = 24
    Width = 57
    Height = 25
  end
  object Shape11: TShape
    Left = 112
    Top = 24
    Width = 57
    Height = 25
  end
  object Shape12: TShape
    Left = 168
    Top = 24
    Width = 57
    Height = 25
  end
  object Shape13: TShape
    Left = 224
    Top = 24
    Width = 57
    Height = 25
  end
  object Shape14: TShape
    Left = 280
    Top = 24
    Width = 57
    Height = 25
  end
  object Shape15: TShape
    Left = 336
    Top = 24
    Width = 57
    Height = 25
  end
  object Shape16: TShape
    Left = 392
    Top = 24
    Width = 57
    Height = 25
  end
  object Shape17: TShape
    Left = 0
    Top = 48
    Width = 57
    Height = 25
  end
  object Shape18: TShape
    Left = 56
    Top = 48
    Width = 57
    Height = 25
  end
  object Shape19: TShape
    Left = 112
    Top = 48
    Width = 57
    Height = 25
  end
  object Shape20: TShape
    Left = 168
    Top = 48
    Width = 57
    Height = 25
  end
  object Shape21: TShape
    Left = 224
    Top = 48
    Width = 57
    Height = 25
  end
  object Shape22: TShape
    Left = 280
    Top = 48
    Width = 57
    Height = 25
  end
  object Shape23: TShape
    Left = 336
    Top = 48
    Width = 57
    Height = 25
  end
  object Shape24: TShape
    Left = 392
    Top = 48
    Width = 57
    Height = 25
  end
  object XPManifest1: TXPManifest
    Left = 408
    Top = 416
  end
  object Timer1: TTimer
    Interval = 70
    OnTimer = Timer1Timer
    Left = 344
    Top = 416
  end
  object MainMenu1: TMainMenu
    Left = 376
    Top = 416
    object Pliki1: TMenuItem
      Caption = '&File'
      object Wyniki1: TMenuItem
        Caption = '&Score'
        Enabled = False
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = '&Quit'
        Default = True
        ShortCut = 16465
        OnClick = Zakocz1Click
      end
    end
    object Gra1: TMenuItem
      Caption = '&Game'
      object NowaGra1: TMenuItem
        Caption = '&New Game'
        OnClick = NowaGra1Click
      end
      object Pauza1: TMenuItem
        Caption = '&Pause'
        ShortCut = 16464
        OnClick = Pauza1Click
      end
      object Resume1: TMenuItem
        Caption = '&Resume'
        ShortCut = 16466
        OnClick = Resume1Click
      end
      object N3: TMenuItem
        Caption = '-'
      end
      object Restart1: TMenuItem
        Caption = '&Restart'
        Default = True
        OnClick = Restart1Click
      end
    end
    object Pomoc1: TMenuItem
      Caption = '&Help'
      object Instrukcja1: TMenuItem
        Caption = '&Instrukcja'
        OnClick = Instrukcja1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object OAutorze1: TMenuItem
        Caption = '&O Autorze...'
        OnClick = OAutorze1Click
      end
    end
  end
end
