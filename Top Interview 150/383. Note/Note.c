# include <stdio.h>
# include <stdbool.h>
# include <string.h>

# define MAX 10000

bool canConstruct( char* note, char* magazine ){

	if ( ( strlen(magazine) == 0 ) && ( strlen(note) != 0 ) ) printf("false");

	printf("false");
	return false;
}

int main () {

	char note [MAX] = { '\0' };
	char magazine [MAX] = { '\0' };

	fgets( note, MAX, stdin );
	fgets( magazine, MAX, stdin );

	canConstruct(note, magazine);

}
