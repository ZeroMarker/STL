cmake_minimum_required(VERSION 3.25)
project(stl)

set(CMAKE_CXX_STANDARD 23)

add_executable(
        stl
        main.cpp
        "Sequence/vector.cpp" "Sequence/vector.h"
        "Sequence/deque.cpp" "Sequence/deque.h"
        "Sequence/list.cpp" "Sequence/list.h"
        "Sequence/array.cpp" "Sequence/array.h"
        "Associative/set.cpp" "Associative/set.h"
        "Associative/multiset.cpp" "Associative/multiset.h"
        "Associative/map.cpp" "Associative/map.h"
        "Unordered/unordered_set.cpp" "Unordered/unordered_set.h"
        "Sequence/sequence.cpp" "Sequence/sequence.h"
        "Associative/associative.cpp" "Associative/associative.h"
)
