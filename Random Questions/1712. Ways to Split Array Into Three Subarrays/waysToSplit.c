// works

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// the maximal size of the string
#define MAX_SIZE 1000

int waysToSplit(int *nums, int numsSize) {

  long *prefix = (long *)malloc((numsSize + 1) * sizeof(long));
  prefix[0] = 0;

  for (int i = 0; i < numsSize; i++) {
    prefix[i + 1] = prefix[i] + nums[i];
  }

  int count = 0;

  for (int i = 1, j = 1, k = 1; i < numsSize - 1; i++) {

    if (j < i + 1) {
      j = i + 1;
    }
    if (k < j) {
      k = j;
    }

    while ((j < numsSize) && (prefix[j] - prefix[i] < prefix[i])) {
      j++;
    }

    while ((k < numsSize) &&
           (prefix[numsSize] - prefix[k] >= prefix[k] - prefix[i])) {
      k++;
    }

    if (j < k) {
      count = (count + k - j) % 1000000007;
    }
  }

  free(prefix);

  return count;
}

/* int waysToSplit(int *nums, int numsSize) {

  int count = 0;

  int isum = 0;
  int jsum = 0;
  int ksum = 0;

  for (int i = 0; i < numsSize; i++) {
    isum += nums[i];
    jsum = 0;
    for (int j = i + 1; j < numsSize; j++) {
      jsum += nums[j];
      ksum = 0;
      for (int k = j + 1; k < numsSize; k++) {
        ksum += nums[k];
      }
      if ((isum <= jsum) && (jsum <= ksum)) {
        count++;
      }
    }
  }

  return count;
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

  // for ( int index = 0; index < count; index++) {
  // 	printf("%d\n", nums[index]);
  // }

  int answer = waysToSplit(nums, count);

  printf("%d", answer);

  free(nums);
  free(string);
  free(tempNumString);
}
