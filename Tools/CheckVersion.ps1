# ��ȡGithub��������Changlog�ļ��е����°汾���뱾�ضԱ�
# �������Զ�̰汾�򷵻� Զ�̰汾�� ��: 0.1
# ������򷵻� 0
# ArthurZheng 2019/05/24

$RemoteVersionAddr = "https://github.com/zhengyangliu/MakerPro3Update/blob/master/Data/Changlog.md"

# ����TLS�����Է���https��ҳ
[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12

# �����������˰汾��
try { 
    $RemoteChanglog = Invoke-WebRequest $RemoteVersionAddr 
}
catch {
    return 0
}
$RemoteVersion = ((($RemoteChanglog.tostring() -split "[`r`n]" | select-string "<p>Lastest Version:") -split "V")[2] -split "<")[0]

# ��ȡ���ط��汾��
$LocalChanglog = Get-Content "./Changlog.md"
$LocalVersion = (($LocalChanglog -split "[`r`n]" | select-string "- Lastest Version:") -split "V")[2]

# �������
# Write-Warning ("���ذ汾: V" + $LocalVersion)
# Write-Warning ("�������˰汾: V" + $RemoteVersion)

if ($RemoteVersion -gt $LocalVersion) {
    # �������汾���ڱ��ذ汾��Ҫ����
    return $RemoteVersion
}
else {
    # �Ѿ������°汾�������
    return 0
}