#include "binaryTreePaths.h"

using namespace std;

vector<string> Solution::binaryTreePaths(TreeNode *root) {

  vector<string> answer;

  if (!root)
    return answer;

  string path = to_string(root->val);

  helper(root, path, answer);

  return answer;
}

void Solution::helper(TreeNode *root, string path, vector<string> &answer) {

  if (!root->left && !root->right) {
    answer.push_back(path);
    return;
  }

  if (root->left) {
    helper(root->left, path + "->" + to_string(root->left->val), answer);
  }

  if (root->right) {
    helper(root->right, path + "->" + to_string(root->right->val), answer);
  }
}
