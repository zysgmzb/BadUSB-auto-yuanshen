$userHome = $env:USERPROFILE

$savePath = Join-Path -Path $userHome -ChildPath "Desktop\ys.exe"

$downloadUrl = "https://autopatchcn.yuanshen.com/client_app/download/launcher/20230807114430_X7BtQNf6rHBFm17c/mihoyo/yuanshen_setup_20230731183341.exe"

$webClient = New-Object System.Net.WebClient
$webClient.DownloadFile($downloadUrl, $savePath)

if (Test-Path $savePath) {
    Start-Process -FilePath $savePath
} else {
    exit
}