

#############################

# default
if ($ENV{CFG_PLATFORM} STREQUAL win32)
    target_link_libraries(${CMAKE_PROJECT_NAME}
        ptw32
        posix_win32
        vfw32
        ${PROJECT_SOURCE_DIR}/$ENV{CFG_PLATFORM}/lib/FTCSPI.lib
        ${PROJECT_SOURCE_DIR}/$ENV{CFG_PLATFORM}/lib/Packet.lib
        imm32.lib
        KSGuid.Lib
        version.lib
        winmm.lib
        ws2_32.lib
        )

    configure_file(${PROJECT_SOURCE_DIR}/tool/bin/FTCSPI.dll ${CMAKE_CURRENT_BINARY_DIR}/FTCSPI.dll COPYONLY)
    
    if (DEFINED CFG_PRIVATE_DRIVE)
        execute_process(COMMAND subst ${CFG_PRIVATE_DRIVE}: /D ERROR_QUIET)
        execute_process(COMMAND subst ${CFG_PRIVATE_DRIVE}: ${CMAKE_BINARY_DIR}/data/private)
    endif()

    if (DEFINED CFG_PUBLIC_DRIVE)
        execute_process(COMMAND subst ${CFG_PUBLIC_DRIVE}: /D ERROR_QUIET)
        execute_process(COMMAND subst ${CFG_PUBLIC_DRIVE}: ${CMAKE_BINARY_DIR}/data/public)
    endif()    
endif()
