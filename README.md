# Platform Files

Files needed to compile source projects on different platforms.

<br>

## Directory Structure

Each directory in this repository contains all of the files for compiling on
a given platform. The directory structure is as follows:
```
├── include
│   ├── bsrl.h
│   ├── PLAT.h
│   └── PLAT_P.h
├── devenv.sh
├── php.sh
└── platenv.sh
```
_Note: Other files may be added in the future_

Here is what each file does:
* __bsrl.h__ - Cross-platform assembly implementation of bit scan reverse function
* __PLAT.h__ - Platform-specific integer typedef's
* __PLAT_P.h__ - Other platform-dependent methods
* __devenv.sh__ - Sets the platform environment variables required to run cmake.
* __php.sh__ - Sets additional environment variables required for compiling PHP extension modules
* __platenv.sh__ - Configure ATDB environment variables

_Note: `devenv.sh` is `devenv.bat` on Windows platforms_

<br>

## Platforms Supported

Here is the list of currently supported platforms:
* __linux_64__ - 64-bit Linux
* __win_32__ - 32-bit Windows
