//
// Created by ttft3 on 2023/8/16.
//

#include "unordered_map.h"
#include <iostream>
#include <unordered_map>
#include <string>
int unordered_map() {
    std::unordered_map<char, std::string> days = {{'S' , "Sunday"}, {'M' , "Monday"}};
    std::cout << days['S'] << std::endl;    // no range check
    std::cout << days.at('S') << std::endl; // has range check

    days['W'] = "Wednesday";

    return 0;
}