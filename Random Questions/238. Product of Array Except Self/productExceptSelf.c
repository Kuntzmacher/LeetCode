#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// the maximal size of the string
#define MAX_SIZE 1000

int *productExceptSelf(int *nums, int numsSize, int *returnSize) {

  int *answer = (int *)malloc(numsSize * sizeof(answer[0]));
  if (answer == NULL) {
    return NULL;
  }

  int *left = (int *)malloc(numsSize * sizeof(left[0]));
  if (left == NULL) {
    return NULL;
  }

  int *right = (int *)malloc(numsSize * sizeof(right[0]));
  if (right == NULL) {
    return NULL;
  }

  left[0] = nums[0];
  for (int i = 1; i < numsSize; i++) {
    left[i] = left[i - 1] * nums[i];
  }

  right[numsSize - 1] = nums[numsSize - 1];
  for (int i = numsSize - 2; i >= 0; i--) {
    right[i] = right[i + 1] * nums[i];
  }

  answer[0] = right[1];
  answer[numsSize - 1] = left[numsSize - 2];
  for (int i = 1; i <= numsSize - 2; i++) {
    answer[i] = left[i - 1] * right[i + 1];
  }

  free(left);
  free(right);

  *returnSize = numsSize;
  return answer;
}

int main() {

  int count = 0;

  // init the array of the numbers
  int *nums = (int *)malloc(MAX_SIZE * sizeof(nums[0]));
  if (nums == NULL) {
    return -1;
  }

  // init the full string ( input from the user )
  char *string = (char *)malloc(MAX_SIZE * sizeof(string[0]));
  if (string == NULL) {
    return -1;
  }
  scanf("%s", string);

  // init a temp string to input the parts of the full string
  char *tempNumString = (char *)malloc(MAX_SIZE * sizeof(tempNumString[0]));
  if (tempNumString == NULL) {
    return -1;
  }
  tempNumString = strtok(string, ",");

  // loop over the string
  while (tempNumString != NULL) {

    nums[count++] = atoi(tempNumString); // convert the temp string to a number
                                         // and append to the array
    tempNumString = strtok(NULL, ",");
  }

  // for ( int index = 0; index < count; index++) {
  //   printf("%d\n", nums[index]);
  // }

  int *returnSize = 0;

  int *answer = productExceptSelf(nums, count, returnSize);

  for (int index = 0; index < count; index++) {
    printf("%d,", answer[index]);
  }

  free(nums);
  free(string);
  free(tempNumString);
  free(answer);
}
