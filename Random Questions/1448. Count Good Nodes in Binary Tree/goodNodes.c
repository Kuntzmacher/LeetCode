// works

#include "goodNodes.h"

int goodNodes(struct TreeNode *root) {
  int count = 0;
  int max = root->val;

  count = helper(root, count, max);

  return count;
}

int helper(struct TreeNode *root, int count, int max) {

  if (root->val >= max) {
    count++;
    max = root->val;
  }

  if (root->left != NULL) {
    count = helper(root->left, count, max);
  }
  if (root->right != NULL) {
    count = helper(root->right, count, max);
  }

  return count;
}
