

set(CFG_BUILD_KCONFIG-FRONTENDS-3.12 TRUE)
set(CFG_BUILD_REGEX2.7 TRUE)
########################################
# File System
add_definitions(
    -DCFG_PRIVATE_DRIVE="${CFG_PRIVATE_DRIVE}"
    -DCFG_PUBLIC_DRIVE="${CFG_PUBLIC_DRIVE}"
    )

# SDK
execute_process(COMMAND cmd /c date /T OUTPUT_VARIABLE date)
string(REGEX REPLACE ".*(....)/(..)/(..)" "\\1\\2\\3" date ${date})
string(REGEX REPLACE ".*(....)-(..)-(..)" "\\1\\2\\3" date ${date})
string(STRIP ${date} date)
set(CFG_VERSION_TWEAK "${date}")
#message("CFG_VERSION_TWEAK=${CFG_VERSION_TWEAK}")


set(CMAKE_BUILD_TYPE "Debug")

add_definitions(
    -DCFG_VERSION_MAJOR=${CFG_VERSION_MAJOR}
    -DCFG_VERSION_MINOR=${CFG_VERSION_MINOR}
    -DCFG_VERSION_PATCH=${CFG_VERSION_PATCH}
    -DCFG_VERSION_TWEAK=${CFG_VERSION_TWEAK}
    -DCFG_VERSION_MAJOR_STR="${CFG_VERSION_MAJOR}"
    -DCFG_VERSION_MINOR_STR="${CFG_VERSION_MINOR}"
    -DCFG_VERSION_PATCH_STR="${CFG_VERSION_PATCH}"
    -DCFG_VERSION_TWEAK_STR="${CFG_VERSION_TWEAK}"
    -DCFG_SYSTEM_NAME="${CFG_SYSTEM_NAME}"
    -DCFG_PROJECT_NAME="${CMAKE_PROJECT_NAME}"
    )


# Global include paths
include_directories(
    ${PROJECT_SOURCE_DIR}/$ENV{CFG_PLATFORM}/include
    ${PROJECT_SOURCE_DIR}/sdk/include
    )

link_directories(
    ${PROJECT_SOURCE_DIR}/build/$ENV{CFG_PLATFORM}/lib
    )

# data
file(MAKE_DIRECTORY 
    ${CMAKE_BINARY_DIR}/data/private/backup/${CFG_PUBLIC_DRIVE}
    ${CMAKE_BINARY_DIR}/data/public/tmp
    )