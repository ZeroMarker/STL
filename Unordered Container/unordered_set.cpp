//
// Created by ttft3 on 2023/7/6.
//

#include <unordered_set>
#include <string>
#include <iostream>
#include "unordered_set.h"


int unordered_set() {
    std::unordered_set<std::string> unorderedSet = {"red", "blue", "yellow"};
    unorderedSet.insert("green");
    for(auto it: unorderedSet)
        std::cout << it << '\t';
    std::cout << '\n';

    return 0;
}