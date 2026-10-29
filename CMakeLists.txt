cmake_minimum_required(VERSION 3.20)

project(ChronoVault VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(ChronoVault STATIC
    src/timeline.cpp
)

target_include_directories(ChronoVault
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(basic_example
    examples/basic_example.cpp
)

target_link_libraries(basic_example
    PRIVATE
        ChronoVault
)
