cmake_minimum_required(VERSION 3.28)
project(TransazioniFinanziarie)

set(CMAKE_CXX_STANDARD 14)

add_executable(TransazioniFinanziarie main.cpp
        User.cpp
        User.h
        Account.cpp
        Account.h)
