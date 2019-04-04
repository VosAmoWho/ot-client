cmake_minimum_required(VERSION 3.13)
project(server)

set(CMAKE_CXX_STANDARD 14)

find_package(emp-tool REQUIRED)

add_library(otapi SHARED IMPORTED)
set_property(TARGET otapi PROPERTY IMPORTED_LOCATION ../lib/libOTApi.dylib)

add_executable(server demo.cpp)
target_link_libraries(${PROJECT_NAME} otapi ${EMP-TOOL_LIBRARIES})