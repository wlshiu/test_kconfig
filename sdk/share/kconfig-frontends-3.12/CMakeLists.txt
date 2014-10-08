
if (CMAKE_BUILD_TYPE STREQUAL Debug)
    add_definitions(
        -DDEBUG
        )
endif()

include_directories(
    .
    ${SMEDIA_INC_DIRS}
    ${PROJECT_SOURCE_DIR}/sdk/include/
    ${PROJECT_SOURCE_DIR}/sdk/share/regex2.7
    )

add_library(kconfig_parser STATIC
    # parser/confdata.c
    # parser/expr.c
    # parser/expr.h
    # parser/lkc.h
    # parser/lkc_proto.h
    # parser/menu.c
    # parser/symbol.c
    # parser/list.h
    parser/yconf.c
    )


