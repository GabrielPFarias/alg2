# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.31)

# Set the project name
project(Main)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

# Add an executable
add_executable(Main
    Atleta.cpp
    Competicao.cpp
    Corredor.cpp
    Data.cpp
    InformacoesAtleta.cpp
    Nadador.cpp
    main.cpp)
