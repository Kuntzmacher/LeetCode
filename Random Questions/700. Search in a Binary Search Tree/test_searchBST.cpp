#include "searchBST.h"

#include <gtest/gtest.h>

TEST(TESTS, TEST1) {
  TreeNode *node1 = new TreeNode(1);
  TreeNode *node3 = new TreeNode(3);
  TreeNode *node2 = new TreeNode(2, node1, node3);
  TreeNode *node7 = new TreeNode(7);
  TreeNode *root = new TreeNode(4, node2, node7);

  Solution sol;

  ASSERT_EQ(sol.searchBST(root, 2), node2);
  // ASSERT_TRUE(true);

  delete node1;
  delete node3;
  delete node2;
  delete node7;
  delete root;
}

TEST(TESTS, TEST2) {
  TreeNode *node1 = new TreeNode(1);
  TreeNode *node3 = new TreeNode(3);
  TreeNode *node2 = new TreeNode(2, node1, node3);
  TreeNode *node7 = new TreeNode(7);
  TreeNode *root = new TreeNode(4, node2, node7);

  Solution sol;

  ASSERT_EQ(sol.searchBST(root, 5), nullptr);
  // ASSERT_TRUE(true);

  delete node1;
  delete node3;
  delete node2;
  delete node7;
  delete root;
}

TEST(TESTS, TEST3) {
  TreeNode *node84 = new TreeNode(84);
  TreeNode *node63 = new TreeNode(63, nullptr, node84);
  TreeNode *node22 = new TreeNode(22, nullptr, node63);
  TreeNode *node2 = new TreeNode(2);
  TreeNode *root = new TreeNode(18, node2, node22);

  Solution sol;

  ASSERT_EQ(sol.searchBST(root, 63), node63);
  // ASSERT_TRUE(true);

  delete node84;
  delete node63;
  delete node22;
  delete node2;
  delete root;
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
