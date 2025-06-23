#include "convertBST.h"

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int count(int val, struct TreeNode *root) {

  if (root->left) {
    val = count(val, root->left);
  }
  if (root->right) {
    val = count(val, root->right);
  }
  val++;

  return val;
}

int list(int index, int *arr, struct TreeNode *root) {

  if (root->left) {
    index = list(index, arr, root->left);
  }
  if (root->right) {
    index = list(index, arr, root->right);
  }

  arr[index++] = root->val;

  return index;
}

void sum(int leaves, int *arr, struct TreeNode *root) {

  if (root->left) {
    sum(leaves, arr, root->left);
  }
  if (root->right) {
    sum(leaves, arr, root->right);
  }

  int temp = 0;
  for (int i = 0; i < leaves; i++) {
    if (arr[i] > root->val) {
      temp += arr[i];
    }
  }
  root->val += temp;
}

struct TreeNode *convertBST(struct TreeNode *root) {

  if (root == NULL) {
    return root;
  }

  int leaves = count(0, root);

  int *arr = (int *)malloc(leaves * sizeof(arr[0]));
  if (arr == NULL) {
    return NULL;
  }

  list(0, arr, root);

  qsort(arr, leaves, sizeof(int), compare);

  sum(leaves, arr, root);

  free(arr);

  return root;
}

//   ──────────────────────────────────────────────────────────────────────

struct TreeNode *createNode(int val) {
  struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  node->val = val;
  node->left = NULL;
  node->right = NULL;
  return node;
}
