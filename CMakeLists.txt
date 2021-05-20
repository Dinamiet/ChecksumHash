cmake_minimum_required(VERSION 3.20.0)

project(
    ChecksumHash
)

option(CRC_USE_LOOKUP "Enable the use of lookup tables" ON)

if (NOT TARGET ${PROJECT_NAME})

if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)

    # Let's nicely support folders in IDEs
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)

    include(CTest)

    add_subdirectory(app)

endif()

add_library(
    ${PROJECT_NAME}
    STATIC
)

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -Werror)

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
        include
)

target_sources(
    ${PROJECT_NAME}
    PUBLIC  # All public source and header files listed here
        include/crc8.h
        include/crc16.h
        include/crc32.h
        include/sdbm.h
    PRIVATE # All private source and header files listed here
        src/crc_common.h
        src/crc8.c
        src/crc16.c
        src/crc32.c
        src/sdbm.c
)

if (CRC_USE_LOOKUP)
    target_compile_definitions(${PROJECT_NAME} PRIVATE USE_LOOKUP)
endif()

endif()
