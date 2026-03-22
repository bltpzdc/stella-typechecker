cmake_minimum_required(VERSION 3.20)
project(StellaTypeChecker)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(ANTLR_BUILD_CPP_TESTS OFF)

file(GLOB PARSER_SOURCES "src/*.cpp")

add_subdirectory(external/antlr4/runtime/Cpp)

add_executable(stella_typechecker ${PARSER_SOURCES})

target_include_directories(stella_typechecker PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/external/antlr4/runtime/Cpp/runtime/src
)

target_link_libraries(stella_typechecker
    antlr4_shared
)
