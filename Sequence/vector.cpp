//
// Created by ttft3 on 2023/7/5.
//
#include <vector>
#include <iostream>
#include <algorithm>
#include "vector.h"

int vector() {
    std::cout << "## vector" << '\n';
    std::vector<int> vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(8);

    auto itr1 = vec.begin();
    auto itr2 = vec.end();

    for(auto it = itr1; it != itr2; ++it) {
        std::cout << *it << '\n';
    }
    // sort
    std::sort(itr1, itr2);
    for(auto it = itr1; it != itr2; ++it) {
        std::cout << *it << '\n';
    }

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