cmake_minimum_required(VERSION 2.6)
project(guesstherandomnumber)

add_executable(guesstherandomnumber main.cpp)

install(TARGETS guesstherandomnumber RUNTIME DESTINATION bin)
