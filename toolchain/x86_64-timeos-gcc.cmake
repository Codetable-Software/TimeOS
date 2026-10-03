include(${CMAKE_CURRENT_LIST_DIR}/common.cmake)
set(CMAKE_C_COMPILER x86_64-elf-gcc CACHE FILEPATH "TimeOS x86_64 compiler")
set(CMAKE_ASM_COMPILER x86_64-elf-gcc CACHE FILEPATH "TimeOS x86_64 assembler driver")
set(TIMEOS_ARCH x86_64 CACHE STRING "TimeOS architecture")
