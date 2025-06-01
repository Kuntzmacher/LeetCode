#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// the maximal size of the string
#define MAX_SIZE 1000

void *merge(int *nums, int *lnums, int lnumsSize, int *rnums, int rnumsSize) {
  int l = 0;
  int r = 0;
  int i = 0;

  while ((l < lnumsSize) && (r < rnumsSize)) {
    if (lnums[l] < rnums[r]) {
      nums[i++] = lnums[l++];
    } else {
      nums[i++] = rnums[r++];
    }
  }

  while (l < lnumsSize) {
    nums[i++] = lnums[l++];
  }

  while (r < rnumsSize) {
    nums[i++] = rnums[r++];
  }

  return 0;
}

int *mergeSort(int *nums, int numsSize) {

  if (numsSize <= 1) {
    return nums;
  }

  int mid = numsSize / 2;

  int *left = (int *)malloc(mid * sizeof(int));
  int *right = (int *)malloc((numsSize - mid) * sizeof(int));

  for (int i = 0; i < mid; i++) {
    left[i] = nums[i];
  }
  for (int i = mid; i < numsSize; i++) {
    right[i - mid] = nums[i];
  }

  mergeSort(left, mid);
  mergeSort(right, numsSize - mid);

  merge(nums, left, mid, right, numsSize - mid);

  free(left);
  free(right);

  return nums;
}

int *sortArray(int *nums, int numsSize, int *returnSize) {
  int *answer = (int *)malloc(numsSize * sizeof(int));
  if (answer == NULL) {
    return NULL;
  }
  for (int i = 0; i < numsSize; i++) {
    answer[i] = nums[i];
  }
  mergeSort(answer, numsSize);
  *returnSize = numsSize;
  return answer;
}

/* void *sort(int *answer, int *lnums, int lnumsSize, int *rnums, int rnumsSize)
{ int temp = 0;

  if (lnumsSize > 2) {
    sort(answer, lnums, lnumsSize / 2, &lnums[lnumsSize / 2],
         lnumsSize - lnumsSize / 2);
  }

  if (rnumsSize > 2) {
    sort(answer, rnums, rnumsSize / 2, &rnums[rnumsSize / 2],
         rnumsSize - rnumsSize / 2);
  }

  // for (int i = 0; i < lnumsSize; i++) {
  //   printf("l:%d\n", lnums[i]);
  // }
  // for (int i = 0; i < rnumsSize; i++) {
  //   printf("r:%d\n", rnums[i]);
  // }

  if (lnumsSize == 2) {
    if (lnums[0] > lnums[1]) {
      temp = lnums[0];
      lnums[0] = lnums[1];
      lnums[1] = temp;
    }
  }

  if (rnumsSize == 2) {
    if (rnums[0] > rnums[1]) {
      temp = rnums[0];
      rnums[0] = rnums[1];
      rnums[1] = temp;
    }
  }

  merge(answer, lnums, lnumsSize, rnums, rnumsSize);

  return 0;
} */

/* int *sortArray(int *nums, int numsSize, int *returnSize) {

  int *answer = (int *)malloc(numsSize * sizeof(answer[0]));
  if (answer == NULL) {
    return NULL;
  }

  sort(answer, nums, numsSize / 2, &nums[numsSize / 2],
       numsSize - numsSize / 2);

  return answer;
} */

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

  // for (int index = 0; index < count; index++) {
  //   printf("%d\n", nums[index]);
  // }

  int *answer = sortArray(nums, count, &count);

  for (int index = 0; index < count; index++) {
    printf("%d\n", answer[index]);
  }

  free(answer);

  free(nums);
  free(string);
  free(tempNumString);
}
