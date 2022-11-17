cmake_minimum_required(VERSION 3.23)
project(TP5 C)

set(CMAKE_C_STANDARD 99)

add_executable(TP5 exo1.c librairieTP5.c librairieTP5.h)
add_executable(TP5 exo2.c librairieTP5.c librairieTP5.h exo2.c)

