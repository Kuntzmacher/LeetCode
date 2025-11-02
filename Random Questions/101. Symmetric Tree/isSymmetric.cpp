#include "isSymmetric.h"

bool Solution::isSymmetric(TreeNode *root) {

  if (!root->left && !root->right) {
    return true;
  }
  if (!root->left || !root->right) {
    return false;
  }

  TreeNode *leftNode = root->left;
  TreeNode *rightNode = root->right;

  return helper(leftNode, rightNode);
}

bool Solution::helper(TreeNode *left, TreeNode *right) {

  if (!left && !right) {
    return true;
  }
  if (!left || !right) {
    return false;
  }

  if (left->val != right->val) {
    return false;
  }

  return (helper(left->left, right->right) && helper(left->right, right->left));
}
