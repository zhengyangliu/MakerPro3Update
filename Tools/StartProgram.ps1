# ͨ������ CheckVersion.ps1 �������汾������汾����ڷ��������Զ�����
# ���������Ӳ�ͬ��汾��ͬ�� ֱ������MakerPro3
# ArthurZheng 2019/05/24

Write-Host "���ڼ��س������Ժ�..." -Foreground "Green"

# ��Ĭ���а汾���ű�
$NewVersion = PowerShell.exe -file 'CheckVersion.ps1'

# CheckVersion���ط�0����Ҫ����
if ($NewVersion -eq "Offline") { 
    Write-Host "-------------------------------------------------------------------------" -Foreground "Yellow"
    Write-Host "| �޷����ʷ�����" -Foreground "Red"
    Write-Host "| 1�������Զ�����" -Foreground "Yellow"
    Write-Host "-------------------------------------------------------------------------" -Foreground "Yellow"
    Start-Sleep 1
    Start-Process -FilePath "./MakerPro.exe"
}
elseif ($NewVersion -eq "Latest") { 
    Write-Host "-------------------------------------------------------------------------" -Foreground "Green"
    Write-Host "| �Ѿ������°汾���������" -Foreground "Green"
    Write-Host "| 1�������Զ�����" -Foreground "Green"
    Write-Host "-------------------------------------------------------------------------" -Foreground "Green"
    Start-Sleep 1
    Start-Process -FilePath "./MakerPro.exe"
}
else { 
    Write-Host "-------------------------------------------------------------------------" -Foreground "Yellow"
    Write-Host "| ���������°汾" -Foreground "Yellow"
    Write-Host "| �Զ����³������������������������̺͹رճ���" -Foreground "Yellow"
    Write-Host "| ���½�����MakerPro3���Զ�����" -Foreground "Yellow"
    Write-Host "-------------------------------------------------------------------------" -Foreground "Yellow"

    PowerShell.exe -file "Upgrade.ps1" $NewVersion

    Write-Host "-------------------------------------------------------------------------" -Foreground "Yellow"
    Write-Host "| �������" -Foreground "Yellow"
    Write-Host "| 2�������Զ�����" -Foreground "Yellow"
    Write-Host "-------------------------------------------------------------------------" -Foreground "Yellow"

    Start-Sleep 2 
    Start-Process -FilePath "./MakerPro.exe"
}