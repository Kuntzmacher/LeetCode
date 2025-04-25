//                             ╭──────────────────╮
//                             │ does not work :( │
//                             ╰──────────────────╯
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char** divideString(char* s, int k, char fill, int* returnSize) {

	int MAX_SIZE = 100;

	int i = 0;

	int len = strlen(s);

	char** answer;
	if ( NULL == ( answer = ( char** ) malloc ( MAX_SIZE * sizeof( answer[0] ) ) ) ) return NULL;

	while ( i * k < len ) {

		if ( NULL == ( answer[i] = ( char* ) malloc ( ( k + 1 ) * sizeof( answer[i][0] ) ) ) ) return NULL;

		for ( int j = 0; j < k; j++ ) {

			fprintf(stderr, "DEBUGPRINT[100]: Divide_A_String.c:19: s=%c\n", s[i*k+j]);

			if ( i * k + j < len ) {
				answer[i][j] = s[i*k+j];
			}
			else {
				answer[i][j] = fill;
			}

			*returnSize = j;

		}

		i++;

	}

	return answer;

}

int main() {

	int MAX_SIZE = 100;

	char* s;
	if ( NULL == ( s = ( char* ) malloc ( MAX_SIZE * sizeof( s[0] ) ) ) ) { return -1; };

	scanf(" %s", s);
	fprintf(stderr, "DEBUGPRINT[88]: Divide_A_String.c:15: s=%s\n", s);

	int k;
	scanf(" %d", &k);
	fprintf(stderr, "DEBUGPRINT[89]: Divide_A_String.c:19: k=%d\n", k);

	char fill;
	scanf(" %c", &fill);
	fprintf(stderr, "DEBUGPRINT[90]: Divide_A_String.c:23: fill=%c\n", fill);

	int* returnSize = 0;
	if ( NULL == ( returnSize = ( int* ) malloc ( sizeof( int ) ) ) ) return -1;

	char** answer = divideString( s, k, fill, returnSize );

	for ( int i = 0; i <= *returnSize; i++ ) {
		for ( int j = 0; j < k; j++ ) {
			printf("%c", answer[i][j]);
		}
		printf("\n");
	}

	free(answer);
	free(s);

}
