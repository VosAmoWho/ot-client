cmake_minimum_required(VERSION 3.13)
project(client)

set(CMAKE_CXX_STANDARD 14)

find_package(emp-tool REQUIRED)

message(${EMP-TOOL_LIBRARIES}make)

add_library(otapi SHARED IMPORTED)
set_property(TARGET otapi PROPERTY IMPORTED_LOCATION ../lib/libOTApi.dylib)


add_executable(client demo.cpp)
target_link_libraries(${PROJECT_NAME} otapi ${EMP-TOOL_LIBRARIES})