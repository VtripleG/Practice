cmake_minimum_required(VERSION 3.5)

project(14_59 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(14_59 main.cpp)

add_custom_target(Sources SOURCES

  file1.txt
  file2.txt

)

install(TARGETS 14_59
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
