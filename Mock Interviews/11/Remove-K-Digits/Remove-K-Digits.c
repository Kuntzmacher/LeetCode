//                        ╭─────────────────────────────╮
//                        │ almost working ¯\_( ツ )_/¯ │
//                        ╰─────────────────────────────╯

# include <stdio.h>
# include <string.h>

# define MAXSIZE 10000

char* removeKdigits( char* num, int k ) {

	static char sol[MAXSIZE];

	char remove[MAXSIZE];
	int index_remove = 0;

	int index_add = 0;

	int i = 0;
	while (i < MAXSIZE) {
		if ( index_remove == k ) { break; }
		if ( num[i] < num[i+index_add+1] ) {
			remove[index_remove++] = num[i+index_add+1];
			index_add++;
		}
		else {
			remove[index_remove++] = num[i];
			i++;
		}
	}

	i = 0;
	int rem_len = index_remove;
	index_remove = 0;
	index_add = 0;
	int len = strlen(num);
	int temp = 0;
	while (i < len) {
		if ( num[i] == remove[index_remove] ) {
			index_remove++;
			i++;
			continue;
		}
		else {
			sol[index_add] = num[index_add+index_remove];
			index_add++;
			i++;
		}
	}

	return sol;

}

int main() {

	char num[MAXSIZE];
	scanf("%s", num);
	// fprintf(stderr, "DEBUGPRINT: Remove-K-Digits.c:6: num=%s\n", num);

	int k = 0;
	scanf(" %d", &k);
	// fprintf(stderr, "DEBUGPRINT: Remove-K-Digits.c:10: k=%d\n", k);

	char *sol = removeKdigits(num, k);
	printf("%s", sol);

}
