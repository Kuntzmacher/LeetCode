# include <stdio.h>
# include <string.h>

# define MAX_SIZE 30000

int removeDuplicates(int* nums, int numsSize){

	int j = 0;


	nums[j++] = nums[0];

	if ( numsSize == 1 ) {
		return j;
	}

	for ( int i = 1; i < numsSize ; i++ ) {


		while ( nums[i] == nums[j-1] ) {
			i++;
		}

		if ( ( i == numsSize ) && ( nums[i] == nums[i-1] ) ) printf("hello");

		nums[j++] = nums[i];

	}

	printf("%d", j);

	return j;

}

int main(){

	int numsSize = 30000;

	char nums_str[MAX_SIZE*10] = { '\0' };
	fgets( nums_str, numsSize, stdin );

	int nums[MAX_SIZE];
	int j = 0;

	for ( int i=0; i<strlen(nums_str); i++ ) {
		if ( nums_str[i] != ',' ) {
			nums[j++] = nums_str[i] - '0';
		}
	}

	removeDuplicates(nums, j);

}
