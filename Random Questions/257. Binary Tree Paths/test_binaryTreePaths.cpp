#include "binaryTreePaths.h"

#include <gtest/gtest.h>

using namespace std;

TEST(TESTS, TEST1) {
  TreeNode *five = new TreeNode(5);
  TreeNode *two = new TreeNode(2, nullptr, five);
  TreeNode *three = new TreeNode(3);
  TreeNode *root = new TreeNode(1, two, three);

  vector<string> answer;

  Solution sol;
  answer = sol.binaryTreePaths(root);

  ASSERT_EQ(answer[0], "1->2->5");
  ASSERT_EQ(answer[1], "1->3");

  delete five;
  delete two;
  delete three;
  delete root;
}

TEST(TESTS, TEST2) {
  TreeNode *root = new TreeNode(1);

  vector<string> answer;

  Solution sol;
  answer = sol.binaryTreePaths(root);

  ASSERT_EQ(answer[0], "1");

  delete root;
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
