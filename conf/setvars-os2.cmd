@echo off
set ROOT=l:\src\osfree\trunk\

set WATCOM=f:\dev\watcom
set svn=\data\dev\svn-win32-1.6.6\bin
set tools=%root%\bin\tools
set FPPATH=f:\dev\fpc\2.0.4\bin\i386-win32
set imgdir=\data\vm\img
set mkisofs=\data\dev\cdrtools\mkisofs.exe

set PATH=%WATCOM%\binnt;%TOOLS%;%FPPATH%;%svn%;%regina%;\data\dev\qemu;\data\dev\cdrtools;\data\dev\Bochs-2.3.5;\data\dev\bin;\usr\local\wbin;%PATH%;
set INCLUDE=%WATCOM%\h;%WATCOM%\h\os21x;%WATCOM%\h\dos
set LIB=%WATCOM%\lib386\nt
set PATH=%WATCOM%\binnt;%PATH%
set WD_PATH=%WATCOM%\binnt
set LANG=%WATCOM%
