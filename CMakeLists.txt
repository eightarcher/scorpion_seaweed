cmake_minimum_required(VERSION 3.7)
project(scorpion_seaweed)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(scorpion_seaweed ${SOURCE_FILES})
add_executable(day2operators day2operators.cpp)
add_executable(staircase staircase.cpp)
add_executable(min-max min-max.cpp)
add_executable(birthdayCakeCandles birthdayCakeCandles.cpp)
add_executable(timeConversion timeConversion.cpp)
add_executable(meanMedianMode meanMedianMode.cpp)
add_executable(meanMedianMode2 meanMedianMode2.cpp)