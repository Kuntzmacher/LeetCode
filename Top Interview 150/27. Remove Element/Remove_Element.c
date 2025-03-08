#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {

	int count = 0;
	int size = 0;
	int sol = 0;

	char nums_str [MAX_SIZE*10] = { '\0' };
	fgets( nums_str, MAX_SIZE*10, stdin );
	// printf("%s\n", nums_str);

	char val;
	scanf( "%c", &val );
	// printf("%c\n", val);

	for ( int i=0; i<strlen(nums_str); i++ ) {
		if ( nums_str[i] == val ){
			nums_str[i] = '_';
			count++;
		}
		size = i;
	}

	sol = size - count;

	// printf("%d", sol);

	return sol;
}
