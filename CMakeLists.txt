project($ENV{CFG_PROJECT})
cmake_minimum_required(VERSION 2.6)
cmake_policy(SET CMP0002 OLD)

include(build/${CMAKE_PROJECT_NAME}/config.cmake)

include(sdk/def.cmake)
include($ENV{CFG_PLATFORM}/def.cmake)

add_subdirectory(sdk)
add_subdirectory($ENV{CFG_PLATFORM})
add_subdirectory(project)


