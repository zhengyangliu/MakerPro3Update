# 获取Github服务器上Changlog文件中的最新版本号与本地对比
# 如落后于远程版本则返回 远程版本号 如: 0.1
# 若相等则返回 0
# ArthurZheng 2019/05/24

$RemoteVersionAddr = "https://github.com/zhengyangliu/MakerPro3Update/blob/master/Data/Changlog.md"

# 设置TLS连接以访问https网页
[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12

# 解析服务器端版本号
try { 
    $RemoteChanglog = Invoke-WebRequest $RemoteVersionAddr 
}
catch {
    return 0
}
$RemoteVersion = ((($RemoteChanglog.tostring() -split "[`r`n]" | select-string "<p>Lastest Version:") -split "V")[2] -split "<")[0]

# 获取本地服版本号
$LocalChanglog = Get-Content "./Changlog.md"
$LocalVersion = (($LocalChanglog -split "[`r`n]" | select-string "- Lastest Version:") -split "V")[2]

# 调试语句
# Write-Warning ("本地版本: V" + $LocalVersion)
# Write-Warning ("服务器端版本: V" + $RemoteVersion)

if ($RemoteVersion -gt $LocalVersion) {
    # 服务器版本大于本地版本需要升级
    return $RemoteVersion
}
else {
    # 已经是最新版本无需更新
    return 0
}