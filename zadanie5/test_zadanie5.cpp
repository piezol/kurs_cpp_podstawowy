#include <vector>

#include "gtest/gtest.h"
#include "zadanie5.cc"

class Zadanie5 :public ::testing::TestWithParam<std::tuple<int, int>> {
};

TEST_P(Zadanie5, ShouldCalculateFibonacci) {
  int sequence = std::get<0>(GetParam());
  int expected_result = std::get<1>(GetParam());
  EXPECT_EQ(Fibonacci(sequence), expected_result);
}

INSTANTIATE_TEST_CASE_P(
  Zadanie5Test,
  Zadanie5,
  ::testing::Values(
    std::make_tuple(10, 55),
    std::make_tuple(0, 0),
    std::make_tuple(1, 1),
    std::make_tuple(2, 1),
    std::make_tuple(3, 2),
    std::make_tuple(4, 3),
    std::make_tuple(5, 5),
    std::make_tuple(6, 8),
    std::make_tuple(13, 233),
    std::make_tuple(17, 1597),
    std::make_tuple(20, 6765)
  )
);
