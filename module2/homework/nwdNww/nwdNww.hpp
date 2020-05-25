#pragma once
#include <math.h>
#include <algorithm>
int NWD(int lhs, int rhs) {
    if(lhs==0 || rhs==0){
        return std::max(lhs, rhs);
    }
    lhs = abs(lhs);
    rhs = abs(rhs);
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
    lhs = abs(lhs);
    rhs = abs(rhs);
    int result;
    result = lhs/NWD(lhs, rhs) * rhs;
    return result;
}
