cmake_minimum_required(VERSION 3.5)

project(15_31 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(15_31 main.cpp)

add_custom_target(Sources_15_31 SOURCES

  file1.txt
  file2.txt

)

install(TARGETS 15_31
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
