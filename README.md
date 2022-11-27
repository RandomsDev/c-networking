<h1 align='center'> c++ networking </h1>

### Get started

<h3 align='center'>Setup c++ compiler</h3>

 <a href='https://www.msys2.org/'>Download MSYS2 </a>
 > Open MSYS2 and run this <a href = 'https://packages.msys2.org/package/mingw-w64-x86_64-clang'>command</a>
 ```command
  > pacman -S mingw-w64-x86_64-clang
 ```

#  
<!-- https://sourceforge.net/projects/asio/ -->

> <a href='https://cmake.org/download/'>Download Cmake</a>
> Version:`boost_asio 1.24.0 stable`
<a align='center' href='https://sourceforge.net/projects/asio/'>Download Asio</a>

```CMAKE

cmake_minimum_required(VERSION 3.10)
project(opengl_startup)

set(CMAKE_CXX_COMPILER D:/System/msys2/mingw64/bin/clang++) # add your compiler path
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
  opengl_startup
  ./src/index.cpp
)

target_include_directories(networking_examples PRIVATE "./asio/include")

```



### Run Program

```command
	> git clone https://github.com/RandomsDev/c-networking
	> cd c-networking
	> g++ makeit.cpp -o makeit
	> ./makeit
```

#

<!-- g++ makeit.cpp -o makeit -->
