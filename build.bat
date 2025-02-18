@echo off
gcc program.c -o program.exe
if %errorlevel% neq 0 (
    echo Compilation failed. Please fix the errors.
) else (
    echo Compilation successful. Running program...
    program.exe
)
