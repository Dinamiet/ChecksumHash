cmake_minimum_required(VERSION 3.20.0)

# Let's nicely support folders in IDEs
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(
    ChecksumHash
)

if (NOT TARGET ${PROJECT_NAME}) # Only configure if not already configured

option(CRC_USE_LOOKUP "Enable the use of lookup tables" ON)

add_library(
    ${PROJECT_NAME}
    STATIC
)

target_compile_options(
    ${PROJECT_NAME}
    PRIVATE
        "-Wall" # Enable all common warnings
        "-Wextra" # Enable more warnings
        "-Wpedantic" # Warn about non-standard code
        "-Werror" # Warnings are treated as errors
        "-Wshadow" # Warn about shadow variables
        "-Wdouble-promotion" # Warn when promoting floats to double
        "-Wformat=2" # printf and scanf warnings
        "-Wformat-security" # printf and scanf warnings
        "-Wformat-truncation" # printf and scanf warnings
        "-Wundef" # Warn when evaluating not defined flags
        "-fno-common" # Warn about multiple global variables with same name
        "-Wconversion" # Warn about implicit conversions
        "-Wpadded" # Warn about padded structures
        "-flto" # Link time optimization
        "-fno-fat-lto-objects" # Link time optimization
        "-ffunction-sections" # Link time optimization help
        "-fdata-sections" # Link time optimization help
)

target_link_options(
    ${PROJECT_NAME}
    PRIVATE
        "-Wl,--gc-sections" # Remove unwanted sections
        "-flto" # Link time optimization
        "-fno-fat-lto-objects" # Link time optimization
)

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
        include/fnv.h
    PRIVATE # All private source and header files listed here
        src/crc_common.h
        src/crc8.c
        src/crc16.c
        src/crc32.c
        src/sdbm.c
        src/fnv.c
)

if (CRC_USE_LOOKUP)
    target_compile_definitions(${PROJECT_NAME} PRIVATE USE_LOOKUP)
endif()

endif()
