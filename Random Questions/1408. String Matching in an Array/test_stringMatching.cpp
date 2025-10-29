#include "stringMatching.h"

#include <gtest/gtest.h>

using namespace std;

TEST(TESTS, TEST1) {
  vector<string> words = {"mass", "as", "hero", "superhero"};
  vector<string> output = {"as", "hero"};
  Solution sol;
  ASSERT_EQ(output, sol.stringMatching(words));
}

TEST(TESTS, TEST2) {
  vector<string> words = {"leetcode", "et", "code"};
  vector<string> output = {"et", "code"};
  Solution sol;
  ASSERT_EQ(output, sol.stringMatching(words));
}

TEST(TESTS, TEST3) {
  vector<string> words = {"blue", "green", "bu"};
  vector<string> output = {};
  Solution sol;
  ASSERT_EQ(output, sol.stringMatching(words));
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
