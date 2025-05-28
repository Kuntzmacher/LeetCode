// working :)

#include "searchBST.h"

TreeNode *Solution::searchBST(TreeNode *root, int val) {
  /* if (root->val == val) {
    return root;
  } else if (root->left != nullptr) {
    return Solution::searchBST(root->left, val);
  } else if (root->right != nullptr) {
    return Solution::searchBST(root->right, val);
  } else {
    return nullptr;
  } */

  if (!root)
    return nullptr;

  if (root->val == val) {
    return root;
  } else if (root->val > val) {
    return Solution::searchBST(root->left, val);
  } else if (root->val < val) {
    return Solution::searchBST(root->right, val);
  } else {
    return nullptr;
  }
}
