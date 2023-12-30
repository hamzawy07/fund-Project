cmake_minimum_required(VERSION 3.25)
project(task)

set(CMAKE_CXX_STANDARD 17)

add_executable(task main.cpp client.cpp client.h nameOfBuilding.cpp nameOfBuilding.h addClient.cpp addClient.h website.cpp website.h creat_account.cpp creat_account.h)
