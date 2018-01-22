cmake_minimum_required(VERSION 2.8)

project(CMAKE_TEMPLATE_MATCH)

find_package(OpenCV REQUIRED)

file(GLOB SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
message(STATUS  "OpenCV: Headers: ${OPENCV_HEADERS}")
message(STATUS "Opencv Libs: ${OPENCV_LIBS}")
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${OPENCV_INCLUDE_DIR})

add_executable(matchTemplate ${SOURCE})
target_link_libraries(matchTemplate ${OpenCV_LIBS})