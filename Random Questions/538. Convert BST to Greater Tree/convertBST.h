#ifndef convertBST_H
#define convertBST_H

#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

struct TreeNode *createNode(int val);
int count(int val, struct TreeNode *root);
int list(int index, int *arr, struct TreeNode *root);
int compare(const void *a, const void *b);
void sum(int leaves, int *arr, struct TreeNode *root);
struct TreeNode *convertBST(struct TreeNode *root);

#endif
