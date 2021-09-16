[Shortcut]
FontFace=#FontFace#
FontColor=#PassiveColor#
FontEffectColor=#FontEffectColor#
FontSize=#FontSize#
StringStyle=#StringStyle#
StringEffect=#StringEffect#
StringCase=#StringCase#
SolidColor=0,0,0,1
x=0
Text=#CURRENTSECTION#
AntiAlias=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor "#ActiveColor#"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter "#CURRENTSECTION#"][!Redraw]

[Left]
StringAlign=Left

[Center]
StringAlign=Center
X=75

[Right]
StringAlign=Right
X=#Anchor#

[Horizontal]
StringAlign=Left
X=#Spacing#R
Y=r
