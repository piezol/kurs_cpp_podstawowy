#include <iostream>

// Full recurent
int Fibonacci3(int sequence) {
  if (sequence == 0 || sequence == 1)
    return sequence;

  return Fibonacci3(sequence - 1) + Fibonacci3(sequence - 2);
}

int FibonacciHelper(int sequence, int first, int second) {
  if (sequence == 0)
    return second;
  return FibonacciHelper(--sequence, second, first + second);
}

// A little harder
int Fibonacci2(int sequence) {
  if (sequence == 0 || sequence == 1)
    return sequence;

  int first = 0;
  int second = 1;
  return FibonacciHelper(--sequence, first, second);
}

// The easy one
int Fibonacci(int sequence) {
  if (sequence == 0 || sequence == 1)
    return sequence;

  int first = 0;
  int second = 1;
  for (size_t i = 1 ; i < sequence ; ++i) {
    int tmp = second;
    second = first + second;
    first = tmp;
  }

  return second;
}

// int main() {
//   std::cout << Fibonacci(10) << "\n";
//   std::cout << Fibonacci2(10) << "\n";
//   std::cout << Fibonacci3(10) << "\n";

//   return 0;
// }
