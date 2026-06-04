@echo on
if not exist "%LIBRARY_BIN%" mkdir "%LIBRARY_BIN%"
%CC% %CFLAGS% /DTARGET_SUBDIR="\"%target_platform%\"" "%RECIPE_DIR%\probe.c" /Fe:"%LIBRARY_BIN%\artifact-channel-probe.exe"
if errorlevel 1 exit 1
