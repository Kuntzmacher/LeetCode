// ╭────────────────╮
// │ not working... │
// ╰────────────────╯

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// the maximal size of the string
#define MAX_SIZE 50000

int *majorityElement(int *nums, int numsSize, int *returnSize) {

  int *answer = (int *)malloc(MAX_SIZE * sizeof(answer[0]));
  if (answer == NULL) {
    return NULL;
  }
  int numOccur[10] = {0};

  int minTimes = numsSize / 3;

  for (int i = 0; i < numsSize; i++) {
    switch (nums[i]) {
    case 0:
      numOccur[0]++;
      break;
    case 1:
      numOccur[1]++;
      break;
    case 2:
      numOccur[2]++;
      break;
    case 3:
      numOccur[3]++;
      break;
    case 4:
      numOccur[4]++;
      break;
    case 5:
      numOccur[5]++;
      break;
    case 6:
      numOccur[6]++;
      break;
    case 7:
      numOccur[7]++;
      break;
    case 8:
      numOccur[8]++;
      break;
    case 9:
      numOccur[9]++;
      break;
    }
  }

  int j = 0;
  for (int i = 0; i < 10; i++) {
    if (numOccur[i] > minTimes) {
      answer[j++] = i;
      returnSize++;
    }
  }

  return answer;
}

int main() {

  int count = 0;
  int returnSize = 0;

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

  int *answer = majorityElement(nums, count, &returnSize);

  printf("%d", *answer);

  free(nums);
  free(string);
  free(tempNumString);
  free(answer);
}
