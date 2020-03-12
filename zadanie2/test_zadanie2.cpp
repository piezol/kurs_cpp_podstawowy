#include "gtest/gtest.h"
#include "zadanie2.cc"

TEST(zadanie2, ShouldAdd) {
  EXPECT_EQ(calculate("dodaj", 10, 20), "30");
  EXPECT_EQ(calculate("dodaj", 15, 5), "20");
  EXPECT_EQ(calculate("dodaj", 0, 0), "0");
  EXPECT_EQ(calculate("dodaj", 1, -20), "-19");
}

TEST(zadanie2, ShouldSubtract) {
  EXPECT_EQ(calculate("odejmij", 10, 20), "-10");
  EXPECT_EQ(calculate("odejmij", 15, 5), "10");
  EXPECT_EQ(calculate("odejmij", 0, 0), "0");
  EXPECT_EQ(calculate("odejmij", 1, -20), "21");
}

TEST(zadanie2, ShouldMultiply) {
  EXPECT_EQ(calculate("pomnoz", 10, 20), "200");
  EXPECT_EQ(calculate("pomnoz", 15, 5), "75");
  EXPECT_EQ(calculate("pomnoz", 0, 0), "0");
  EXPECT_EQ(calculate("pomnoz", 1, -20), "-20");
}

TEST(zadanie2, ShouldDivide) {
  EXPECT_EQ(calculate("podziel", 10, 20), "0");
  EXPECT_EQ(calculate("podziel", 15, 5), "3");
  EXPECT_EQ(calculate("podziel", 0, 0), "Dzielenie przez 0!");
  EXPECT_EQ(calculate("podziel", -20, 10), "-2");
}

TEST(zadanie2, ShouldReturnNiepoprawneDane) {
  EXPECT_EQ(calculate("quit", 10, 20), "Niepoprawne dane!");
  EXPECT_EQ(calculate("q", 15, 5), "Niepoprawne dane!");
  EXPECT_EQ(calculate("5", 0, 0), "Niepoprawne dane!");
  EXPECT_EQ(calculate("sth", -20, 10), "Niepoprawne dane!");
}
