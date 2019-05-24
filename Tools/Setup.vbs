' ̽��ϵͳ�汾�͹���ΪWin7��Win8��װ���µ�PowerShell5
' �����xp��Win10��ֱ�Ӱ�װ��������
' ��󴴽������ݷ�ʽ
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
        Set Shortcut = WSHShell.CreateShortCut(DesktopPath & "\����MakerPro3" & ".lnk") 
        if (isPowershell = true) Then
            Shortcut.TargetPath = "powershell.exe"
            Shortcut.Arguments = """& {set-executionpolicy Remotesigned -Scope Process; .'" & CurrentPath & "\StartProgram.ps1' }""" 
        Else
            Shortcut.TargetPath = CurrentPath & "\MakerPro.exe" 
        End If
        Shortcut.Description = "����MakerPro3"
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
    Res = MsgBox("��ϵͳ�汾��֧���Զ����¹��ܣ��Ƽ�������Windows10ϵͳ!" & vbCrLf &"���ȷ���Լ�����װ", 48, "����")
    Obj.Run ".\drivers\Driver_for_Windows.exe",,true
    CreateProgramShortCut(false)
End If