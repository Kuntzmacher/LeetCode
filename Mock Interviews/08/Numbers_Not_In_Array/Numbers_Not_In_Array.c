//                             ╭──────────────────╮
//                             │ does not work :( │
//                             ╰──────────────────╯
#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {

	int* result;
	if (NULL == (result = calloc(sizeof(int), numsSize))) return NULL;

	int* result2;
	if (NULL == (result2 = calloc(sizeof(int), numsSize))) return NULL;

	for (int i=0; i < numsSize; i++) {
		result[i] = false;
	}

	for (int i=0; i < numsSize; i++) {
		result[nums[i]] = true;
	}

	int j = 0;
	for (int i=0; i < numsSize; i++) {
		if ( result[i] == false ) {
			result2[j++] = result[i];
		}
	}

	return result2;

}

/* int main() {

	int numsSize = 0;
	scanf("%d", &numsSize);
	fprintf(stderr, "DEBUGPRINT[81]: Numbers_Not_In_Array.c:16: numsSize=%d\n", numsSize);

	char numsString[100000];
	scanf("%s", numsString);
	fprintf(stderr, "DEBUGPRINT[80]: Numbers_Not_In_Array.c:10: numsString=%s\n", numsString);

	int* nums[100000];

} */
