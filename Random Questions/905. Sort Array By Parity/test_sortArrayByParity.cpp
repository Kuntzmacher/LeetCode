#include "sortArrayByParity.cpp"

#include <gtest/gtest.h>

TEST(TESTS, TEST1) {
  Solution sol;
  vector<int> nums = {3, 1, 2, 4};
  vector<int> expected = {2, 4, 3, 1};
  vector<int> answer = sol.sortArrayByParity(nums);
  ASSERT_EQ(answer, expected);
}

TEST(TESTS, TEST2) {
  Solution sol;
  vector<int> nums = {0};
  vector<int> expected = {0};
  vector<int> answer = sol.sortArrayByParity(nums);
  ASSERT_EQ(answer, expected);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
