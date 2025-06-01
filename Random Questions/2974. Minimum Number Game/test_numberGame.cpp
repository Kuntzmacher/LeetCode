#include "numberGame.h"

#include <gtest/gtest.h>
using namespace std;

TEST(TESTS, TEST1) {
  vector<int> nums = {5, 4, 2, 3};
  vector<int> answer = {3, 2, 5, 4};
  Solution sol;
  ASSERT_EQ(sol.numberGame(nums), answer);
}

TEST(TESTS, TEST2) {
  vector<int> nums = {2, 5};
  vector<int> answer = {5, 2};
  Solution sol;
  ASSERT_EQ(sol.numberGame(nums), answer);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
