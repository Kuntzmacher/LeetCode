#include "minimumRightShifts.h"

#include <gtest/gtest.h>

using namespace std;

TEST(TESTS, TEST1) {
  vector<int> nums = {3, 4, 5, 1, 2};
  Solution sol;
  ASSERT_EQ(2, sol.minimumRightShifts(nums));
}

TEST(TESTS, TEST2) {
  vector<int> nums = {1, 3, 5};
  Solution sol;
  ASSERT_EQ(0, sol.minimumRightShifts(nums));
}

TEST(TESTS, TEST3) {
  vector<int> nums = {2, 1, 4};
  Solution sol;
  ASSERT_EQ(-1, sol.minimumRightShifts(nums));
}

TEST(TESTS, TEST4) {
  vector<int> nums = {29, 30, 88, 28, 62};
  Solution sol;
  ASSERT_EQ(-1, sol.minimumRightShifts(nums));
}

TEST(TESTS, TEST5) {
  vector<int> nums = {31, 72, 79, 25};
  Solution sol;
  ASSERT_EQ(1, sol.minimumRightShifts(nums));
}

TEST(TESTS, TEST6) {
  vector<int> nums = {1,2,5,3};
  Solution sol;
  ASSERT_EQ(-1, sol.minimumRightShifts(nums));
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
