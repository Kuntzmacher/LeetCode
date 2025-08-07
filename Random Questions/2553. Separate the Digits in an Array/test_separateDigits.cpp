#include "separateDigits.h"

#include <gtest/gtest.h>

using namespace std;

TEST(TESTS, TEST1) {
  Solution sol;
  vector<int> nums = {13, 25, 83, 77};
  vector<int> answer = {1, 3, 2, 5, 8, 3, 7, 7};
  ASSERT_EQ(sol.separateDigits(nums), answer);
}

TEST(TESTS, TEST2) {
  Solution sol;
  vector<int> nums = {7, 1, 3, 9};
  vector<int> answer = {7, 1, 3, 9};
  ASSERT_EQ(sol.separateDigits(nums), answer);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
