//
// Created by ttft3 on 2023/7/5.
//
#include <vector>
#include <iostream>
#include "vector.h"

int vector() {
    std::vector<int> vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(8);

    std::cout << vec[2] << '\n';
    std::cout << vec.at(2) << '\n'; // range check
    for(int it: vec)
        std::cout << it << "\t";
    std::cout << '\n';
    int* p = &vec[0];
    p[2] = 6;
    std::cout << vec[2] << '\n';



    return 0;
}