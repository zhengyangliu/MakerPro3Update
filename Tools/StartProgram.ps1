# 通过调用 CheckVersion.ps1 检测软件版本，如果版本落后于服务器则自动升级
# 若网络连接不同或版本相同则 直接启动MakerPro3
# ArthurZheng 2019/05/24

Write-Host "正在加载程序请稍候..." -Foreground "Green"

# 静默运行版本检测脚本
$NewVersion = PowerShell.exe -file 'CheckVersion.ps1'

# CheckVersion返回非0，需要升级
if ($NewVersion -eq "Offline") { 
    Write-Host "-------------------------------------------------------------------------" -Foreground "Yellow"
    Write-Host "| 无法访问服务器" -Foreground "Red"
    Write-Host "| 1秒后程序将自动启动" -Foreground "Yellow"
    Write-Host "-------------------------------------------------------------------------" -Foreground "Yellow"
    Start-Sleep 1
    Start-Process -FilePath "./MakerPro.exe"
}
elseif ($NewVersion -eq "Latest") { 
    Write-Host "-------------------------------------------------------------------------" -Foreground "Green"
    Write-Host "| 已经是最新版本，无需更新" -Foreground "Green"
    Write-Host "| 1秒后程序将自动启动" -Foreground "Green"
    Write-Host "-------------------------------------------------------------------------" -Foreground "Green"
    Start-Sleep 1
    Start-Process -FilePath "./MakerPro.exe"
}
else { 
    Write-Host "-------------------------------------------------------------------------" -Foreground "Yellow"
    Write-Host "| 服务器有新版本" -Foreground "Yellow"
    Write-Host "| 自动更新程序已启动请勿随意点击鼠标键盘和关闭程序" -Foreground "Yellow"
    Write-Host "| 更新结束后MakerPro3将自动启动" -Foreground "Yellow"
    Write-Host "-------------------------------------------------------------------------" -Foreground "Yellow"

    PowerShell.exe -file "Upgrade.ps1" $NewVersion

    Write-Host "-------------------------------------------------------------------------" -Foreground "Yellow"
    Write-Host "| 更新完成" -Foreground "Yellow"
    Write-Host "| 2秒后程序将自动启动" -Foreground "Yellow"
    Write-Host "-------------------------------------------------------------------------" -Foreground "Yellow"

    Start-Sleep 2 
    Start-Process -FilePath "./MakerPro.exe"
}