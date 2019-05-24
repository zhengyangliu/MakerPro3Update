' 探测系统版本和构架为Win7，Win8安装最新的PowerShell5
' 如果是xp或Win10则直接安装驱动程序
' 最后创建桌面快捷方式
' ArthurZheng 2019/05/24

Sub CreateProgramShortCut(isPowershell)
    Dim WSHShell 
    Dim Shortcut 
    Dim DesktopPath
    Dim CurrentPath

    CurrentPath = CreateObject("Scripting.FileSystemObject").GetAbsolutePathName(".") 

    Set WSHShell = CreateObject("WScript.Shell") 

    If not WSHShell Is Nothing Then 
        DesktopPath = WSHShell.SpecialFolders("Desktop") 
        Set Shortcut = WSHShell.CreateShortCut(DesktopPath & "\启动MakerPro3" & ".lnk") 
        if (isPowershell = true) Then
            Shortcut.TargetPath = "powershell.exe"
            Shortcut.Arguments = """& {set-executionpolicy Remotesigned -Scope Process; .'" & CurrentPath & "\StartProgram.ps1' }""" 
        Else
            Shortcut.TargetPath = CurrentPath & "\MakerPro.exe" 
        End If
        Shortcut.Description = "启动MakerPro3"
        Shortcut.WorkingDirectory = CurrentPath
        Shortcut.WindowStyle = 1 
        Shortcut.IconLocation = CurrentPath & "\MakerPro.ico"
        Shortcut.Save
        Set Shortcut = Nothing 
    end if
End Sub

Function ReadWindowsVersion()
    Set objWMIService = GetObject("winmgmts:" & "{impersonationLevel=impersonate}!\\" & "." & "\root\cimv2")
    Set colOperatingSystems = objWMIService.ExecQuery("Select * from Win32_OperatingSystem")

    For Each objOperatingSystem in colOperatingSystems
        ReadWindowsVersion = objOperatingSystem.Version
    Next
End Function

Function ReadWindowsArch()
    Set WshShell = CreateObject("WScript.Shell")
    ReadWindowsArch = WshShell.RegRead("HKLM\SYSTEM\CurrentControlSet\Control\Session Manager\Environment\PROCESSOR_ARCHITECTURE")
End Function


Set Obj = CreateObject("Wscript.Shell")

Dim Version, Arch

Version = ReadWindowsVersion()
Arch = ReadWindowsArch()

If InStr(Version, "6.1.") and (Arch="x86") Then
    ' Win7 x86
    Set Obj = CreateObject("Wscript.Shell")
    CreateProgramShortCut(true)
    Obj.Run ".\drivers\Driver_for_Windows.exe",,true
    Obj.Run ".\powershell\NDP451-KB2858728-x86-x64-AllOS-ENU.exe",,true
    Obj.Run ".\powershell\Win7-x86\Win7-KB3191566-x86.msu",,true

ElseIf InStr(Version, "6.1.") and (Arch="AMD64") Then
    ' Win7 x64
    Set Obj = CreateObject("Wscript.Shell")
    CreateProgramShortCut(true)
    Obj.Run ".\drivers\Driver_for_Windows.exe",,true
    Obj.Run ".\powershell\NDP451-KB2858728-x86-x64-AllOS-ENU.exe",,true
    Obj.Run ".\powershell\Win7-x64\Win7AndW2K8R2-KB3191566-x64.msu",,true

ElseIf (InStr(Version, "6.2.") or InStr(Version, "6.3.")) and (Arch="x86") Then
    ' Win8 x86
    Set Obj = CreateObject("Wscript.Shell")
    CreateProgramShortCut(true)
    Obj.Run ".\drivers\Driver_for_Windows.exe",,true
    Obj.Run ".\powershell\Win8.1-x86\Win8.1-KB3191564-x86.msu",,true

ElseIf (InStr(Version, "6.2.") or InStr(Version, "6.3.")) Then
    ' Win8 x64
    Set Obj = CreateObject("Wscript.Shell")
    CreateProgramShortCut(true)
    Obj.Run ".\drivers\Driver_for_Windows.exe",,true
    Obj.Run ".\powershell\Win8.1-x64\Win8.1AndW2K12R2-KB3191564-x64.msu",,true

ElseIf InStr(Version, "10.0.") Then
    ' Win10
    CreateProgramShortCut(true)

Else
    Dim Res
    Res = MsgBox("该系统版本不支持自动更新功能，推荐升级到Windows10系统!" & vbCrLf &"点击确定以继续安装", 48, "警告")
    Obj.Run ".\drivers\Driver_for_Windows.exe",,true
    CreateProgramShortCut(false)
End If