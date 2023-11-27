::Windows 32-Bit Configurations
@echo off

:: Set up the Ancelus environment
call platenv.bat

set PLATROOT=%CD%
set PLATINC=%PLATROOT%/include
set SYSLIBD=C:/Windows/System32
set PLATLIBS=ws2_32;psapi;
