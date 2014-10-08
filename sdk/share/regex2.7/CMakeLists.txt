
if (CMAKE_BUILD_TYPE STREQUAL Debug)
    add_definitions(
        -DDEBUG
        )
endif()

add_definitions(
    -DREGEX_STATIC
    )
        
include_directories(
    .
    ${SMEDIA_INC_DIRS}
    ${PROJECT_SOURCE_DIR}/sdk/include/
    )

add_library(regex STATIC
    config.h
    regex.h
    regex_internal.h
    regex.c
    localcharset.c
    )


