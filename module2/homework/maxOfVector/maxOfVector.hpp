#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // Would fail for empty vec - but the behaviour is unspecified in task
    auto currentMax = *vec.begin();
    for(const auto& el : vec){
        if (el > currentMax){
            currentMax = el;
        }
    }

    return currentMax;
}
