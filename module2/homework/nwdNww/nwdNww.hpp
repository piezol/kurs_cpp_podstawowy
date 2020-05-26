#pragma once
#include <cmath>
#include <algorithm>
int NWD(int lhs, int rhs) {
    if(lhs == 0 || rhs == 0){
        return std::max(lhs, rhs);
    }
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);
    int temp;
    while(rhs != 0){
        temp = rhs;
        rhs = lhs % rhs;
        lhs = temp;
    }

    return lhs;
}

int NWW(int lhs, int rhs) {
    if(lhs == 0 || rhs == 0){
        return 0;
    }
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);
   return  lhs/NWD(lhs, rhs) * rhs;
}
