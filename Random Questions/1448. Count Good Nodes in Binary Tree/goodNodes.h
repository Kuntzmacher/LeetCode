#ifndef GOODNODES_H
#define GOODNODES_H

#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

int goodNodes(struct TreeNode *root);
int helper(struct TreeNode *root, int count, int max);

#endif
