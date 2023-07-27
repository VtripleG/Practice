cmake_minimum_required(VERSION 3.5)

project(Practice LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(2_43)
add_subdirectory(3_35)
add_subdirectory(4_19)
add_subdirectory(4_36)
add_subdirectory(4_69)
add_subdirectory(4_103)
add_subdirectory(4_115)
add_subdirectory(4_141)
add_subdirectory(5_26)
add_subdirectory(5_38)
add_subdirectory(5_65)
add_subdirectory(6_21)
add_subdirectory(7_128)
add_subdirectory(8_59)
add_subdirectory(10_56)
add_subdirectory(11_248)



add_custom_target(ProjectRelatedFiles SOURCES
 .astylerc)
