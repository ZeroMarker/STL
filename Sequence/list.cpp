//
// Created by ttft3 on 2023/7/5.
//

#include "list.h"
#include <algorithm>
#include <list>
#include <iostream>
int list() {
    std::list<int> list1 = {5, 7, 3, 6};
    list1.push_front(2);
    list1.push_back(4);

    auto itr = std::find(list1.begin(), list1.end(), 3);
    list1.insert(itr, 9);
    itr++;
    list1.erase(itr);

    // mylist1.splice(itr, mylist2, itr_a, itr_b);

    return 0;
}