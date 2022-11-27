<h3 align='center'> c++ networking </h3>


<br>

# Get started

<h3 align='center'>Setup c++ compiler</h3>

 <a href='https://www.msys2.org/'>Download MSYS2 </a>
 > Open MSYS2 and run this <a href = 'https://packages.msys2.org/package/mingw-w64-x86_64-clang'>command</a>
 ```command
  > pacman -S mingw-w64-x86_64-clang
 ```

#  
<a align='center' href='https://think-async.com/Asio/Download.html'>Download Asios</a>

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

```

#
