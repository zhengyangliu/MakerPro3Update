# ͨ������İ汾������ϸ��°����ص�ַ����ѹ�����Ǿɵ��ļ�
# ArthurZheng 2019/05/24

$GitAddr = "https://github.com/zhengyangliu/MakerPro3Update"

# �������ص�ַ
$PackName = "MakerPro3Update_V" + $args + ".zip"
$Version = "V" + $args

# copy from jniver
# Downloading files from the internet with progress) 
function downloadFile($url, $targetFile) { 
    "Downloading $url" 
    $uri = New-Object "System.Uri" "$url" 
    $request = [System.Net.HttpWebRequest]::Create($uri) 
    $request.set_Timeout(15000) #15 second timeout 
    $response = $request.GetResponse() 
    $totalLength = [System.Math]::Floor($response.get_ContentLength() / 1024) 
    $responseStream = $response.GetResponseStream() 
    $targetStream = New-Object -TypeName System.IO.FileStream -ArgumentList $targetFile, Create 
    $buffer = new-object byte[] 10KB 
    $count = $responseStream.Read($buffer, 0, $buffer.length) 
    $downloadedBytes = $count 
    while ($count -gt 0) { 
        [System.Console]::CursorLeft = 0 
        [System.Console]::Write("Downloaded {0}K of {1}K", [System.Math]::Floor($downloadedBytes / 1024), $totalLength) 
        $targetStream.Write($buffer, 0, $count) 
        $count = $responseStream.Read($buffer, 0, $buffer.length) 
        $downloadedBytes = $downloadedBytes + $count 
    } 
    "`nFinished Download" 
    $targetStream.Flush()
    $targetStream.Close() 
    $targetStream.Dispose() 
    $responseStream.Dispose() 
}

# ����TLS���Ӳ��ӷ��������ظ��°�
Write-Host "���ڴӷ��������ظ����ļ�..." -Foreground "Green"
[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12
downloadFile "$GitAddr/releases/download/$Version/$PackName" "./Update.zip"

# ��ѹzip
Write-Host "��ѹ�ļ�" -Foreground "Green"
Expand-Archive -Path "./Update.zip" -DestinationPath "./Temp" -Force

# ɾ�����ļ����������
Write-Host "����ɾ�����ļ�..." -Foreground "Green"
$ScrachLib = ".\ext\libraries"
Get-ChildItem $ScrachLib -ErrorAction SilentlyContinue | Remove-Item -Recurse -Force

$ArduinoLib = ".\Arduino\portable\sketchbook\libraries"
Get-ChildItem $ArduinoLib -ErrorAction SilentlyContinue | Remove-Item -Recurse -Force

# ɾ��Appdata�µĻ���
Write-Host "�����������..." -Foreground "Green"
Remove-Item "C:\Users\$env:UserName\AppData\Roaming\com.ScienceStormRobot.Scratch3.4.11" -Recurse -Force -ErrorAction SilentlyContinue

# ���Ƹ��°��е��ļ���������
Write-Host "���ڸ����ļ�..." -Foreground "Green"
Copy-Item "./Temp/*" "./" -Force -Recurse

# ɾ�����غͽ�ѹ���ļ�
Write-Host "����ɾ��ɾ������İ�װ��..." -Foreground "Green"
Remove-Item "./Update.zip", "./Temp" -Force -Recurse

Exit