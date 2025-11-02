#include "isSymmetric.h"

#include <gtest/gtest.h>

TEST(tests, test1) {

  TreeNode *l3 = new TreeNode(3);
  TreeNode *l4 = new TreeNode(4);
  TreeNode *l2 = new TreeNode(2, l3, l4);

  TreeNode *r3 = new TreeNode(3);
  TreeNode *r4 = new TreeNode(4);
  TreeNode *r2 = new TreeNode(2, r4, r3);

  TreeNode *root = new TreeNode(1, l2, r2);

  Solution sol;

  ASSERT_EQ(true, sol.isSymmetric(root));

  delete l3;
  delete l4;
  delete l2;
  delete r3;
  delete r4;
  delete r2;
  delete root;
}

TEST(tests, test2) {

  TreeNode *l3 = new TreeNode(3);
  TreeNode *l2 = new TreeNode(2, nullptr, l3);

  TreeNode *r3 = new TreeNode(3);
  TreeNode *r2 = new TreeNode(2, nullptr, r3);

  TreeNode *root = new TreeNode(1, l2, r2);

  Solution sol;

  ASSERT_EQ(false, sol.isSymmetric(root));

  delete l3;
  delete l2;
  delete r3;
  delete r2;
  delete root;
}

TEST(tests, test3) {

  TreeNode *leaf = new TreeNode(0);

  TreeNode *root = new TreeNode(1, leaf, nullptr);

  Solution sol;

  ASSERT_EQ(false, sol.isSymmetric(root));

  delete leaf;
  delete root;
}

TEST(tests, test4) {

  TreeNode *l4 = new TreeNode(4);
  TreeNode *l5 = new TreeNode(5);
  TreeNode *l3 = new TreeNode(3, l4, l5);

  TreeNode *r4 = new TreeNode(4);
  TreeNode *r3 = new TreeNode(3, nullptr, r4);

  TreeNode *root = new TreeNode(1, l3, r3);

  Solution sol;

  ASSERT_EQ(false, sol.isSymmetric(root));

  delete l4;
  delete l5;
  delete l3;
  delete r4;
  delete r3;
  delete root;
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
