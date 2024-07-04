cmake_minimum_required(VERSION 3.12)
project(Project)

set(CMAKE_CXX_STANDARD 11)

add_executable(Project main.cpp theTime.h theTime.cpp theTime.h song.h song.cpp album.h album.cpp jukebox.h menu.h menuItem.h menuItem.cpp menu.cpp jukebox.cpp)