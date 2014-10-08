include_directories(
    .
    ${PROJECT_SOURCE_DIR}/sdk/share/kconfig-frontends-3.12/parser
    ${PROJECT_SOURCE_DIR}/sdk/share/regex2.7
    )

add_executable(${CMAKE_PROJECT_NAME}
    conf.c
    )

TARGET_LINK_LIBRARIES(${CMAKE_PROJECT_NAME}
    kconfig_parser
    ${PROJECT_SOURCE_DIR}/sdk/share/regex2.7/regex.lib
    )

configure_file(${PROJECT_SOURCE_DIR}/sdk/share/regex2.7/regex2.dll ${CMAKE_CURRENT_BINARY_DIR}/regex2.dll COPYONLY)

# build
include(${PROJECT_SOURCE_DIR}/sdk/build.cmake)


