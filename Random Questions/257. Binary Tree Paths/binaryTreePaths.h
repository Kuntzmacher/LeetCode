#ifndef binaryTreePaths_H
#define binaryTreePaths_H

#include <string>
#include <vector>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  std::vector<std::string> binaryTreePaths(TreeNode *root);
  void helper(TreeNode *root, std::string path,
              std::vector<std::string> &answer);
};

#endif
