#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0) return 0;
    int fib_n_1 = 0, fib_n = 1;
    int temporary_sum;
    while(--sequence > 0 ){
        temporary_sum = fib_n_1 + fib_n;
        fib_n_1 = fib_n;
        fib_n = temporary_sum;
    }
    return fib_n;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
