//
// Created by ttft3 on 2023/7/5.
//

#include <set>
#include <iostream>
#include "set.h"

int set() {
    std::set<int> set1 = {3, 6, 8};
    set1.insert(3);
    set1.insert(7);
    std::cout << "Set" << '\n';
    for(auto itr: set1) {
        std::cout << itr << '\n';
    }
    auto it = set1.find(7);
    std::pair<std::set<int>::iterator, bool> ret;
    ret = set1.insert(6);
    if(!ret.second)
        it = ret.first;  // it now points to element 6
    set1.insert(it, 8);
    set1.erase(it);

    return 0;
}