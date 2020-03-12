#include <iostream>
#include <string>

std::string calculate(const std::string& command, int first, int second) {
  if (command == "dodaj") {
    return std::to_string(first + second);
  } else if (command == "odejmij") {
    return std::to_string(first - second);
  } else if (command == "pomnoz") {
    return std::to_string(first * second);
  } else if (command == "podziel") {
    if (second == 0)
      return "Dzielenie przez 0!";
    return std::to_string(first / second);
  }

  return "Niepoprawne dane!";
}

// int main() {
//   while (true) {
//     std::cout << "Podaj komende: \"dodaj\", \"odejmij\","
//         << " pomnoz\", podziel\" oraz 2 cyfry (wpisz quit lub q aby wyjsc)\n";
//     std::string command {};
//     std::cin >> command;
//     if (command == "quit" || command == "q")
//       break;
//     int first {};
//     int second {};
//     std::cin >> first >> second;
//     std::cout << calculate(command, first, second) << "\n";
//   }

//   return 0;
// }
