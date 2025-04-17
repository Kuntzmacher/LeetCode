#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 10000

int *shortestToChar(char *s, char c) {

	int returnSize = strlen(s);

	int *solution = ( int * )malloc( returnSize * sizeof(int) );
	if ( solution == NULL ) {
		exit(-1);
	}

	int j = 0;
	int k = 0;
	int dist = 0;

	for ( int i=0; i<returnSize-1; i++ ) {

		j = i;
		k = i;

		while(true) {

			if ( j > -1 ) {
				if ( s[j] == c ) {
					dist = abs( i - j );
					break;
				} else {
					j--;
				}
			}

			if ( k < returnSize ) {
				if ( s[k] == c ) {
					dist = abs( k - i );
					break;
				} else {
					k++;
				}
			}

		}

		solution[i] = dist;

	}

	/* for ( int i=0; i<returnSize-1; i++ ) {

		if ( s[i] == '\0' ) { break; }

		printf("%d, ", solution[i]);
	} */

	return solution;

}

int main() {

	char s[MAX] = "";
	char c = ' ';

	fgets( s, MAX, stdin );
	scanf("%c", &c);

	int *solution = shortestToChar(s, c);
	free(solution);

}
