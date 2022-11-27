cmake_minimum_required(VERSION 3.10)
project(networking_examples)

set(CMAKE_CXX_COMPILER D:/System/msys2/mingw64/bin/clang++) # Add your compiler path
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
  networking_examples
  ./src/index.cpp
)

# https://stackoverflow.com/questions/74590672/how-to-include-asio-boost-in-cmake-project/74590713#74590713
target_include_directories(networking_examples PRIVATE "./asio/include")
