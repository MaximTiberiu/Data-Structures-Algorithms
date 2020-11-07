cmake_minimum_required(VERSION 3.17)
project(Data_Structures_Algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(Data_Structures_Algorithms main.cpp "Data Structures/src/linkedList.cpp" "Data Structures/include/linkedList.h" "Data Structures/src/Stack.cpp"
        "Data Structures/include/Stack.h" "Data Structures/src/Queue.cpp" "Data Structures/include/Queue.h" "Data Structures/src/PriorityQueue.cpp" "Data Structures/include/PriorityQueue.h")