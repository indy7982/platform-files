::Windows 32-Bit Configurations
@echo off
set PHPINC=C:/PHP/php-5.3.5
set PHPLIBD=C:/PHP/ext
set PHPFLAGS=-DPHP_WIN32;-DZEND_WIN32;-DWIN32;-DZTS=1
set PHPLIBS=C:/PHP/dev/php5ts.lib

:: Default paths might be wrong
echo.
echo Please verify that the following paths are correct:
echo.
echo   -PHP source includes root    PHPINC   = %PHPINC%
echo   -PHP extension directory     PHPLIBD  = %PHPLIBD%
echo   -PHP static library          PHPLIBS  = %PHPLIBS%
echo.
echo If any of the following are incorrect, please fix them before continuing:
echo.
