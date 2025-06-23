extern "C" {
#include "convertBST.h"
}

#include <gtest/gtest.h>

TEST(TESTS, TEST1) {

  // before

  struct TreeNode *leaf3 = createNode(3);

  struct TreeNode *leaf2 = createNode(2);
  leaf2->right = leaf3;

  struct TreeNode *leaf0 = createNode(0);

  struct TreeNode *leaf1 = createNode(1);
  leaf1->right = leaf2;
  leaf1->left = leaf0;

  struct TreeNode *leaf8 = createNode(8);

  struct TreeNode *leaf7 = createNode(7);
  leaf7->right = leaf8;

  struct TreeNode *leaf5 = createNode(5);

  struct TreeNode *leaf6 = createNode(6);
  leaf6->right = leaf7;
  leaf6->left = leaf5;

  struct TreeNode *root = createNode(4);
  root->right = leaf6;
  root->left = leaf1;

  // test

  root = convertBST(root);
  ASSERT_EQ(33, leaf3->val);
  ASSERT_EQ(35, leaf2->val);
  ASSERT_EQ(36, leaf0->val);
  ASSERT_EQ(36, leaf1->val);
  ASSERT_EQ(8, leaf8->val);
  ASSERT_EQ(15, leaf7->val);
  ASSERT_EQ(26, leaf5->val);
  ASSERT_EQ(21, leaf6->val);
  ASSERT_EQ(30, root->val);

  free(leaf3);
  free(leaf2);
  free(leaf0);
  free(leaf1);
  free(leaf8);
  free(leaf7);
  free(leaf5);
  free(leaf6);
  free(root);
}

TEST(TESTS, TEST2) {

  struct TreeNode *leaf1 = createNode(1);

  struct TreeNode *root = createNode(0);
  root->right = leaf1;

  // test

  root = convertBST(root);
  ASSERT_EQ(1, leaf1->val);
  ASSERT_EQ(1, root->val);

  free(leaf1);
  free(root);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
