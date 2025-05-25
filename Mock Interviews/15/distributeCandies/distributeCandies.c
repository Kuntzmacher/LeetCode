// ╭────────────╮
// │ working ツ │
// ╰────────────╯

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// the maximal size of the string
#define MAX_SIZE 1000

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }
int distributeCandies(int *candyType, int candyTypeSize) {
  qsort(candyType, candyTypeSize, sizeof(int), compare);

  int types = 1;

  for (int i = 1; i < candyTypeSize; i++) {
    if (candyType[i] != candyType[i - 1]) {
      types++;
    }
  }

  if (types > candyTypeSize / 2) {
    return candyTypeSize / 2;
  } else {
    return types;
  }
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
  // 	printf("%d\n", nums[index]);
  // }

  int answer = distributeCandies(nums, count);

  printf("%d", answer);

  free(nums);
  free(string);
  free(tempNumString);
}
