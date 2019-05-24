Dim WSHShell 
Dim Shortcut 
Dim DesktopPath
Dim CurrentPath

CurrentPath = CreateObject("Scripting.FileSystemObject").GetAbsolutePathName(".") 

Set WSHShell = CreateObject("WScript.Shell") 

If not WSHShell Is Nothing Then 

    DesktopPath = WSHShell.SpecialFolders("Desktop") 
    Set Shortcut = WSHShell.CreateShortCut(DesktopPath & "\Æô¶¯MakerPro3" & ".lnk") 
    Shortcut.TargetPath = "powershell.exe"
    Shortcut.Description = "Æô¶¯MakerPro3"
    Shortcut.WorkingDirectory = CurrentPath
    Shortcut.WindowStyle = 1 
    Shortcut.Arguments = "-File StartProgram.ps1" 
    Shortcut.IconLocation = CurrentPath & "\MakerPro.ico"
    Shortcut.Save
    Set Shortcut = Nothing 

end if 