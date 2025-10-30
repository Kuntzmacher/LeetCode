#include "sumOddLengthSubarrys.h"

#include <gtest/gtest.h>

using namespace std;

TEST(TESTS, TEST1) {
  vector<int> arr = {1,4,2,5,3};
  int sum = 58;
  Solution sol;
  ASSERT_EQ(sum, sol.sumOddLengthSubarrays(arr));
}

TEST(TESTS, TEST2) {
  vector<int> arr = {1, 2};
  int sum = 3;
  Solution sol;
  ASSERT_EQ(sum, sol.sumOddLengthSubarrays(arr));
}

TEST(TESTS, TEST3) {
  vector<int> arr = {10, 11, 12};
  int sum = 66;
  Solution sol;
  ASSERT_EQ(sum, sol.sumOddLengthSubarrays(arr));
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
