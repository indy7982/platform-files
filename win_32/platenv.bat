:: Set ATDB environment variables
@ECHO OFF
SET BatchFile=%~f0
SET BatchFileDir=%~dp0
SET CurDir=%CD%


:: Set ATDB_ROOT, ATDB_HANDLE and update PATH (if not already set)
IF NOT DEFINED ATDB_ROOT SET ATDB_ROOT=%BatchFileDir%
SET ATDB_BIN=%ATDB_ROOT%\bin
IF NOT DEFINED ATDB_HANDLE set ATDB_HANDLE=TESTDB


:: Set path if not already set
PATH | FIND /I "%ATDB_BIN%" > NUL
IF ERRORLEVEL 1 SET PATH=%PATH%;%ATDB_BIN%


:: Clear temporary variables
SET BatchFile=
SET BatchFileDir=
SET CurDir=
