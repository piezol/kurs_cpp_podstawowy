#include <iostream>
#include <string>

// Write your function here
void printString(const std::string str, const int times) {
  for(int i = 0; i < times; i++){
    std::cout << str;
  }
}

int main() {
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}
