#include "uniqueMorseRepresentations.h"

#include <gtest/gtest.h>

using namespace std;

TEST(TESTS, TEST1) {
  Solution sol;
  vector<string> words = {"gin", "zen", "gig", "msg"};
  ASSERT_EQ(sol.uniqueMorseRepresentations(words), 2);
}

TEST(TESTS, TEST2) {
  Solution sol;
  vector<string> words = {"a"};
  ASSERT_EQ(sol.uniqueMorseRepresentations(words), 1);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
