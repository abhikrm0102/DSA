cmake_minimum_required(VERSION 3.17)
project(CODES)

set(CMAKE_CXX_STANDARD 20)

add_executable(CODES cmake-build-debug/CODES.cbp)

add_executable(main main.cpp)
add_executable(FOR_01 FOR_01.cpp)
add_executable(FOR_02 FOR_02.cpp)
add_executable(Adv_FOR_01 Adv_FOR_01.cpp)
add_executable(Simple_Questions Simple_Questions.cpp)
add_executable(Reverse and armstrong Reverse and armstrong.cpp)

add_executable(Number_system_conversions Number_system_conversions.cpp)