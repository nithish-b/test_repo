#include "../src/calculator.h" // Our code to test
#include "gtest/gtest.h"       // Google Test header

// Define a test fixture (optional, but good for shared setup)
// For this simple example, we'll use a basic test case.

// TEST_F(TestFixtureName, TestName)
// TEST(TestSuiteName, TestName)

TEST(CalculatorTest, AddFunction) {
  // Expect two expressions to be equal.
  // ASSERT_EQ fails immediately and stops the current test.
  // EXPECT_EQ logs a non-fatal failure and continues the test.
  ASSERT_EQ(5, add(2, 3));
  ASSERT_EQ(0, add(-1, 1));
  EXPECT_EQ(10, add(5, 5));
}

TEST(CalculatorTest, SubtractFunction) {
  ASSERT_EQ(1, subtract(3, 2));
  ASSERT_EQ(-2, subtract(2, 4));
  EXPECT_EQ(0, subtract(5, 5));
}

// The main function that runs all tests
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}