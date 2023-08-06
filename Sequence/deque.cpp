//
// Created by ttft3 on 2023/7/5.
//

#include "deque.h"
#include <deque>
#include <iostream>

int deque() {
    std::deque<int> deq = {1, 4, 3};
    deq.push_back(7);
    deq.push_front(8);
    for(int it: deq)
        std::cout << it << '\t';
    std::cout << '\n';
    return 0;
}