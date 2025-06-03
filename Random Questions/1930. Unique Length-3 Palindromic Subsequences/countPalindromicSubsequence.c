// almost working, taking too much space
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int countPalindromicSubsequence(char *s) {

  int count = 0;
  char tempStr[4] = "";
  bool same = false;

  char **pals = (char **)malloc(strlen(s) * sizeof(char *));
  if (pals == NULL) {
    return -1;
  }

  for (int i = 0; i < strlen(s); i++) {
    for (int j = i + 1; j < strlen(s); j++) {
      if (s[i] == s[j]) {

        for (int k = i + 1; k < j; k++) {
          same = false;

          tempStr[0] = s[i];
          tempStr[1] = s[k];
          tempStr[2] = s[j];

          for (int l = 0; l < count; l++) {
            if (!strcmp(tempStr, pals[l])) {
              same = true;
              break;
            }
          }

          if (!same) {
            pals[count] = (char *)malloc(4 * sizeof(char));
            if (pals[count] == NULL) {
              return -1;
            }
            strncpy(pals[count], tempStr, 4);
            count++;
          }
        }
      }
    }
  }

  for (int i = 0; i < count; i++) {
    free(pals[i]);
  }

  free(pals);

  return count;
}

int main() {
  char s[MAX_SIZE] = "";

  scanf("%s", s);

  int count = countPalindromicSubsequence(s);
  printf("%d", count);

  return 0;
}
