#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define MAX_SIZE 10000

int compare( const void *a, const void *b ) {
	return ( *( int * ) a - *( int * )b );
}

int arrayPairSum(int* nums, int numsSize) {

	int temp = 0;

	// bubble sort
	/* for ( int i = 0; i < numsSize - 1; i++ ) {

		for ( int j = 0; j < numsSize - i - 1; j++ ) {

			if ( nums[j] > nums[j+1] ) {

				temp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = temp;

			}

		}

	} */

	qsort(nums, numsSize, sizeof(int), compare);

	int sum = 0;

	for ( int i = 0; i < numsSize - 1; i += 2 ) {

		sum += nums[i];

	}

	return sum;

};

int main() {

	int i = 0;

	// init the array of the numbers
	int* nums = ( int* ) malloc ( MAX_SIZE * sizeof( nums[0] ) );
	if ( nums == NULL ) { return -1; }

	// init the full string ( input from the user )
	char* string = ( char* ) malloc ( MAX_SIZE * sizeof( string[0] ) );
	if ( string == NULL ) { return -1; }
	scanf("%s", string);

	// init a temp string to input the parts of the full string
	char* tempNumString = ( char* ) malloc ( MAX_SIZE * sizeof( tempNumString[0] ) );
	if ( tempNumString == NULL ) { return -1; }
	tempNumString = strtok( string, "," );

	// loop over the string
	while ( tempNumString != NULL ) {

		nums[i++] = atoi( tempNumString ); // convert the temp string to a number and append to the array
		tempNumString = strtok( NULL, "," );

	}

	// for ( int index = 0; index < i; index++) {
	// 	printf("%d\n", nums[index]);
	// }

	int ans = arrayPairSum(nums, i);
	printf("%d", ans);

	free(nums);
	free(string);
	free(tempNumString);

}
