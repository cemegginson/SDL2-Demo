project(SDL-Test)

set(TARGET_NAME sdltest)

set(SRC_FILES main.cpp)

add_executable(${TARGET_NAME} ${SRC_FILES})

target_include_directories(${TARGET_NAME} PRIVATE
    ${SDL2_INCLUDE_DIR}
    ${OPENGL_INCLUDE_DIR}
    "${CMAKE_SOURCE_DIR}/Source")

target_link_libraries(${TARGET_NAME} ${SDL2_LIBRARY})
target_link_libraries(${TARGET_NAME} ${OPENGL_gl_LIBRARY})
# target_link_libraries(${TARGET_NAME} ${SDL2_IMAGE_LIBRARY})

# install(TARGETS ${TARGET_NAME} RUNTIME DESTINATION ${BIN_DIR})

# set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin/ CACHE PATH "Executable output path")
