add_definitions(
    -DQT_TABLET_SUPPORT
    -DQT_NO_DEBUG
    -DQT_THREAD_SUPPORT
    -D_REENTRANT
    -DKBUILD_NO_NLS
    -DQT3_SUPPORT
    )

include_directories(
    .
    ${PROJECT_SOURCE_DIR}/sdk/share/kconfig-frontends-3.12/parser
    ${PROJECT_SOURCE_DIR}/sdk/share/regex2.7
    ${PROJECT_SOURCE_DIR}/sdk/share/qt4.8.5-lite/include
    ${PROJECT_SOURCE_DIR}/sdk/share/qt4.8.5-lite/include/Qt
    ${PROJECT_SOURCE_DIR}/sdk/share/qt4.8.5-lite/include/QtGui
    ${PROJECT_SOURCE_DIR}/sdk/share/qt4.8.5-lite/include/Qt3Support
    )

add_executable(${CMAKE_PROJECT_NAME}
    qconf.cc
    qconf.h
    )

TARGET_LINK_LIBRARIES(${CMAKE_PROJECT_NAME}
    kconfig_parser
    regex
    # ${PROJECT_SOURCE_DIR}/sdk/share/regex2.7/regex.lib
    ${PROJECT_SOURCE_DIR}/sdk/share/qt4.8.5-lite/lib/Qt3Support.lib
    ${PROJECT_SOURCE_DIR}/sdk/share/qt4.8.5-lite/lib/QtGui.lib
    ${PROJECT_SOURCE_DIR}/sdk/share/qt4.8.5-lite/lib/QtCore.lib
    ${PROJECT_SOURCE_DIR}/sdk/share/qt4.8.5-lite/lib/QtNetwork.lib
    )

# configure_file(${PROJECT_SOURCE_DIR}/sdk/share/regex2.7/regex2.dll ${CMAKE_CURRENT_BINARY_DIR}/regex2.dll COPYONLY)

# build
include(${PROJECT_SOURCE_DIR}/sdk/build.cmake)


