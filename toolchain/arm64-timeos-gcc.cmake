include(${CMAKE_CURRENT_LIST_DIR}/common.cmake)
set(CMAKE_C_COMPILER aarch64-linux-gnu-gcc CACHE FILEPATH "TimeOS arm64 compiler")
set(CMAKE_ASM_COMPILER aarch64-linux-gnu-gcc CACHE FILEPATH "TimeOS arm64 assembler driver")
set(TIMEOS_ARCH arm64 CACHE STRING "TimeOS architecture")
