cmake_minimum_required(VERSION 3.1)

project(nerd)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/SDL/lib/libSDL2.dll.a)