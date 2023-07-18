cmake_minimum_required(VERSION 3.25)
project(stl)

set(CMAKE_CXX_STANDARD 23)

add_executable(stl main.cpp "Sequence Container/vector.cpp" "Sequence Container/vector.h" "Sequence Container/deque.cpp" "Sequence Container/deque.h" "Sequence Container/list.cpp" "Sequence Container/list.h" "Sequence Container/array.cpp" "Sequence Container/array.h" "Associative Container/set.cpp" "Associative Container/set.h" "Associative Container/multiset.cpp" "Associative Container/multiset.h" "Associative Container/map.cpp" "Associative Container/map.h" "Unordered Container/unordered_set.cpp" "Unordered Container/unordered_set.h" "Sequence Container/sequence.cpp" "Sequence Container/sequence.h" "Associative Container/associative.cpp" "Associative Container/associative.h")
