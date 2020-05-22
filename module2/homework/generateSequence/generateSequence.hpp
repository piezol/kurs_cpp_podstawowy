#pragma once
#include <vector>
#include<iostream>
std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec;
    if (count <= 0){
        return vec;
    }
    vec.reserve(count);
    int currentnum = 0;
    while(count--){
        vec.push_back(currentnum += step);
    }
    return vec;
}
