extern "C" {
#include "goodNodes.h"
}

#include <gtest/gtest.h>

TEST(TESTS, TEST1) {

  struct TreeNode *leaf3l = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  leaf3l->val = 3;
  leaf3l->left = NULL;
  leaf3l->right = NULL;

  struct TreeNode *leaf1l = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  leaf1l->val = 1;
  leaf1l->left = leaf3l;
  leaf1l->right = NULL;

  struct TreeNode *leaf1r = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  leaf1r->val = 1;
  leaf1r->left = NULL;
  leaf1r->right = NULL;

  struct TreeNode *leaf5 = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  leaf5->val = 5;
  leaf5->left = NULL;
  leaf5->right = NULL;

  struct TreeNode *leaf4 = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  leaf4->val = 4;
  leaf4->left = leaf1r;
  leaf4->right = leaf5;

  struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  root->val = 3;
  root->left = leaf1l;
  root->right = leaf4;

  ASSERT_EQ(goodNodes(root), 4);

  free(leaf3l);
  free(leaf1l);
  free(leaf1r);
  free(leaf5);
  free(leaf4);
  free(root);
}

TEST(TESTS, TEST2) {

  struct TreeNode *leaf4 = (struct TreeNode *)malloc(sizeof(TreeNode));
  leaf4->val = 4;
  leaf4->left = NULL;
  leaf4->right = NULL;

  struct TreeNode *leaf2 = (struct TreeNode *)malloc(sizeof(TreeNode));
  leaf2->val = 2;
  leaf2->left = NULL;
  leaf2->right = NULL;

  struct TreeNode *leaf3 = (struct TreeNode *)malloc(sizeof(TreeNode));
  leaf3->val = 3;
  leaf3->left = leaf4;
  leaf3->right = leaf2;

  struct TreeNode *root = (struct TreeNode *)malloc(sizeof(TreeNode));
  root->val = 3;
  root->left = leaf3;
  root->right = NULL;

  ASSERT_EQ(goodNodes(root), 3);

  free(leaf4);
  free(leaf2);
  free(leaf3);
  free(root);
}

TEST(TESTS, TEST3) {

  struct TreeNode *root = (struct TreeNode *)malloc(sizeof(TreeNode));
  root->val = 1;
  root->right = NULL;
  root->left = NULL;

  ASSERT_EQ(goodNodes(root), 1);

  free(root);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
