#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 1000

int countSubstrings(char* s){

	if ( strlen(s) == 1 ) { return 1; }

	static int pals = 0;
	int pal = true;

	for ( int i=0; i<strlen(s)-1; i++ ) {
		if ( s[i] == s[strlen(s)-1-i] ) { continue; }
		else {
			pal = false;
			break;
		}
	}

	if ( pal ) { pals++; }

	return 0;
}

int main(){

	char s[MAX] = "\0";
	fgets( s, MAX, stdin );

	countSubstrings(s);

}
