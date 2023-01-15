cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project (tworkshop LANGUAGES CXX)

SET(CMAKE_CXX_FLAGS "-Og -g -Wall -Wextra -Werror -std=c++20")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(tworkshop
    main.cpp
    containers/threadSafe/Queue.h)
