cmake_minimum_required(VERSION 3.27)
project(CS214_A1)

set(CMAKE_CXX_STANDARD 17)

add_executable(CS214_A1
        "Linked List/SingleList.cpp"
        "Linked List/DoubleList.cpp"
        "Linked List/CircularList.cpp"
        "Linked List/Node.cpp"
        main.cpp
        Queue/Queue.cpp)
