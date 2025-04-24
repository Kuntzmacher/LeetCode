//                    ╭─────────────────────────────────────╮
//                    │ this does not work for HUGE numbers │
//                    ╰─────────────────────────────────────╯
#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "string.h"

char* addStrings(char* num1, char* num2) {

	fprintf(stderr, "DEBUGPRINT[52]: String_Sum.c:4: num1=%s\n", num1);
	fprintf(stderr, "DEBUGPRINT[54]: String_Sum.c:4: num2=%s\n", num2);

	static char out[100000] = "";

	unsigned long long num1Long = strtoull(num1, NULL, 10);
	fprintf(stderr, "DEBUGPRINT[60]: String_Sum.c:13: num1Long=%llu\n", num1Long);
	unsigned long long num2Long = strtoull(num2, NULL, 10);
	fprintf(stderr, "DEBUGPRINT[61]: String_Sum.c:15: num2Long=%llu\n", num2Long);

	unsigned long long outLong = num1Long + num2Long;
	fprintf(stderr, "DEBUGPRINT[55]: String_Sum.c:15: outLong=%llu\n", outLong);

	sprintf(out, "%llu", outLong);
	fprintf(stderr, "DEBUGPRINT[56]: String_Sum.c:18: out=%s\n", out);

	return out;
};

int main() {

	char num1[100000] = "";
	scanf("%s", num1);
	fprintf(stderr, "DEBUGPRINT[58]: String_Sum.c:28: num1=%s\n", num1);

	char num2[100000] = "";
	scanf("%s", num2);
	fprintf(stderr, "DEBUGPRINT[59]: String_Sum.c:32: num2=%s\n", num2);

	char sum[100000] = "";
	strcpy(sum, addStrings(num1, num2));
	printf("%s", sum);

	return 0;
}
