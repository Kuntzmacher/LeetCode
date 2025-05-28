// this works :)

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// the maximal size of the string
#define MAX_SIZE 1000

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }
int numRescueBoats(int *people, int peopleSize, int limit) {

  int count = 0;

  qsort(people, peopleSize, sizeof(int), compare);

  int i = 0;
  int j = peopleSize - 1;
  while (i <= j) {
    if (people[i] + people[j] <= limit) {
      i++;
    }
    j--;
    count++;
  }

  return count;
}

int main() {

  int count = 0;

  int limit = 0;
  scanf("%d", &limit);

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

  int answer = numRescueBoats(nums, count, limit);

  printf("%d", answer);

  free(nums);
  free(string);
  free(tempNumString);
}
