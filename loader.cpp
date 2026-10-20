g++ .\loader.cpp -std=c++17 -O2 -static -static-libgcc -static-libstdc++ -o .\CS2Loader.exe

if ($LASTEXITCODE -eq 0) {
    Write-Host "Compilacao concluida."
    Get-Item .\CS2Loader.exe | Select-Object FullName, Length
    .\CS2Loader.exe
}