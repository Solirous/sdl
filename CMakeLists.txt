cmake_minimum_required(VERSION 3.1)

project(nerd)

add_executable(${PROJECT_NAME} main.cpp)

target_link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/SDL/include/SDL2)
link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/SDL/lib)
target_link_libraries(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/SDL/lib/libSDL2.a)
target_link_libraries(${PROJECT_NAME} PUBLIC -L${CMAKE_SOURCE_DIR}/SDL/lib/)
