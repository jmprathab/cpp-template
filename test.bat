
@echo off
SETLOCAL
ECHO Executing program
CALL "%~dp0myapplication\build\install\main\debug\myapplication.bat" %*
EXIT /B %ERRORLEVEL%
ENDLOCAL
