cmake_minimum_required(VERSION 3.20.0)

################################
set(EXECUTABLE_TARGET "${PROJECT_NAME}_crc8_table")
add_executable(${EXECUTABLE_TARGET})

target_compile_options(${EXECUTABLE_TARGET} PRIVATE -Wall -Wextra -Wpedantic -Werror)

target_sources(
    ${EXECUTABLE_TARGET}
    PRIVATE # All private source and header files listed here
        table_gen_crc8.c
)

target_link_libraries(
    ${EXECUTABLE_TARGET}
    PRIVATE # All external libraries needed for this project.
        ${PROJECT_NAME}
)

add_test(
    NAME
        ${EXECUTABLE_TARGET}
    COMMAND
        ${EXECUTABLE_TARGET}
)

################################
set(EXECUTABLE_TARGET "${PROJECT_NAME}_crc16_table")
add_executable(${EXECUTABLE_TARGET})

target_compile_options(${EXECUTABLE_TARGET} PRIVATE -Wall -Wextra -Wpedantic -Werror)

target_sources(
    ${EXECUTABLE_TARGET}
    PRIVATE # All private source and header files listed here
        table_gen_crc16.c
)

target_link_libraries(
    ${EXECUTABLE_TARGET}
    PRIVATE # All external libraries needed for this project.
        ${PROJECT_NAME}
)

add_test(
    NAME
        ${EXECUTABLE_TARGET}
    COMMAND
        ${EXECUTABLE_TARGET}
)

################################
set(EXECUTABLE_TARGET "${PROJECT_NAME}_crc32_table")
add_executable(${EXECUTABLE_TARGET})

target_compile_options(${EXECUTABLE_TARGET} PRIVATE -Wall -Wextra -Wpedantic -Werror)

target_sources(
    ${EXECUTABLE_TARGET}
    PRIVATE # All private source and header files listed here
        table_gen_crc32.c
)

target_link_libraries(
    ${EXECUTABLE_TARGET}
    PRIVATE # All external libraries needed for this project.
        ${PROJECT_NAME}
)

add_test(
    NAME
        ${EXECUTABLE_TARGET}
    COMMAND
        ${EXECUTABLE_TARGET}
)


################################
set(EXECUTABLE_TARGET "${PROJECT_NAME}_crc8")
add_executable(${EXECUTABLE_TARGET})

target_compile_options(${EXECUTABLE_TARGET} PRIVATE -Wall -Wextra -Wpedantic -Werror)

target_sources(
    ${EXECUTABLE_TARGET}
    PRIVATE # All private source and header files listed here
        test_crc8.c
)

target_link_libraries(
    ${EXECUTABLE_TARGET}
    PRIVATE # All external libraries needed for this project.
        ${PROJECT_NAME}
)

add_test(
    NAME
        ${EXECUTABLE_TARGET}
    COMMAND
        ${EXECUTABLE_TARGET}
)

################################
set(EXECUTABLE_TARGET "${PROJECT_NAME}_crc16")
add_executable(${EXECUTABLE_TARGET})

target_compile_options(${EXECUTABLE_TARGET} PRIVATE -Wall -Wextra -Wpedantic -Werror)

target_sources(
    ${EXECUTABLE_TARGET}
    PRIVATE # All private source and header files listed here
        test_crc16.c
)

target_link_libraries(
    ${EXECUTABLE_TARGET}
    PRIVATE # All external libraries needed for this project.
        ${PROJECT_NAME}
)

add_test(
    NAME
        ${EXECUTABLE_TARGET}
    COMMAND
        ${EXECUTABLE_TARGET}
)

################################
set(EXECUTABLE_TARGET "${PROJECT_NAME}_crc32")
add_executable(${EXECUTABLE_TARGET})

target_compile_options(${EXECUTABLE_TARGET} PRIVATE -Wall -Wextra -Wpedantic -Werror)

target_sources(
    ${EXECUTABLE_TARGET}
    PRIVATE # All private source and header files listed here
        test_crc32.c
)

target_link_libraries(
    ${EXECUTABLE_TARGET}
    PRIVATE # All external libraries needed for this project.
        ${PROJECT_NAME}
)

add_test(
    NAME
        ${EXECUTABLE_TARGET}
    COMMAND
        ${EXECUTABLE_TARGET}
)
