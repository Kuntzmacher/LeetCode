#include "findMissingAndRepeatedValues.h"
using namespace std;

#include <gtest/gtest.h>

TEST(tests, test1) {
  vector<vector<int>> grid = {{1, 3}, {2, 2}};
  vector<int> answer = {2, 4};
  Solution sol;
  ASSERT_EQ(answer, sol.findMissingAndRepeatedValues(grid));
}

TEST(tests, test2) {
  vector<vector<int>> grid = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};
  vector<int> answer = {9, 5};
  Solution sol;
  ASSERT_EQ(answer, sol.findMissingAndRepeatedValues(grid));
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
