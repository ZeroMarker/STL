//
// Created by ttft3 on 2023/7/5.
//

#include <map>
#include <iostream>
#include "map.h"

int map() {
    std::map<char, int> map1;
    map1.insert(std::pair('a', 100));
    auto it = map1.find('a');
    for(auto itr: map1)
        std::cout << itr.first << "=>" << itr.second << '\n';

    return 0;
}