param(
    [Parameter(Mandatory = $true)][string]$CodePath,
    [Parameter(Mandatory = $true)][string]$ExePath,
    [Parameter(Mandatory = $true)][string]$InputPath,
    [Parameter(Mandatory = $true)][string]$OutputPath
)

function Fail([string]$msg) {
    Write-Host $msg -ForegroundColor Red
    exit 1
}

# Validate paths
if (-not (Test-Path $CodePath)) { Fail "Code file not found: $CodePath" }
if (-not (Test-Path $InputPath)) { Fail "Input file not found: $InputPath" }

$CodePath   = (Resolve-Path $CodePath).Path
$InputPath  = (Resolve-Path $InputPath).Path
$ExePath    = [System.IO.Path]::GetFullPath($ExePath)
$OutputPath = [System.IO.Path]::GetFullPath($OutputPath)

$exeDir = [System.IO.Path]::GetDirectoryName($ExePath)
if ($exeDir -and -not (Test-Path $exeDir)) { New-Item -Path $exeDir -ItemType Directory -Force | Out-Null }

# Ensure g++ exists
$gpp = Get-Command g++ -ErrorAction SilentlyContinue
if (-not $gpp) { Fail "g++ compiler not found in PATH." }

# Check file type
$ext = [System.IO.Path]::GetExtension($CodePath).ToLowerInvariant()
if ($ext -notin @(".cpp", ".cc", ".cxx", ".c")) { Fail "Unsupported source extension '$ext'" }

# Check if we need to compile
$needCompile = -not (Test-Path $ExePath) -or ((Get-Item $CodePath).LastWriteTime -gt (Get-Item $ExePath).LastWriteTime)

if ($needCompile) {
    $compileStart = Get-Date
    & $gpp.Source "-std=c++17" "-O2" "-Wall" "-o" $ExePath $CodePath 2>&1
    if ($LASTEXITCODE -ne 0) { Fail "Compilation failed." }
    $compileTime = (Get-Date) - $compileStart
    Write-Host ("Compilation done in {0:N3} sec" -f $compileTime.TotalSeconds) -ForegroundColor Green
}

# Run executable with 5s limit
$execStart = Get-Date
$proc = Start-Process -FilePath "cmd.exe" -ArgumentList "/c `"$ExePath < $InputPath > $OutputPath`"" -NoNewWindow -PassThru

if (-not ($proc.WaitForExit(5000))) {
    Get-CimInstance Win32_Process -Filter "ParentProcessId=$($proc.Id)" | ForEach-Object { Stop-Process -Id $_.ProcessId -Force }
    Stop-Process -Id $proc.Id -Force
    Fail "Execution time exceeded 5 seconds. Process terminated."
}

$execTime = (Get-Date) - $execStart
Write-Host ("Execution done in {0:N3} sec" -f $execTime.TotalSeconds) -ForegroundColor Green
