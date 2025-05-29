#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool checkValidString(char *s) {
  int len = strlen(s);

  int count = 0;
  for (int i = 0; i < len; ++i) {
    if (s[i] == ')') {
      count++;
    } else {
      count--;
    }
    if (count > 0) {
      return false;
    }
  }

  count = 0;
  for (int i = len - 1; i >= 0; --i) {
    if (s[i] == '(') {
      count++;
    } else {
      count--;
    }
    if (count > 0) {
      return false;
    }
  }

  return true;
}

/* bool checkValidString(char *s) {
  int x = 0;
  int w = 0;

  for (int i = 0; i < strlen(s); i++) {
    switch (s[i]) {
    case '(':
      x++;
      continue;
    case ')':
      if ((x == 0) && (w == 0)) {
        return false;
      } else if ((x == 0) && (w > 0)) {
        w--;
      } else if (x > 0) {
        x--;
      }
      continue;
    case '*':
      w++;
      continue;
    default:
      continue;
    }
  }

  if (x == 0) {
    return true;
  } else if (x > 0) {
    if (w >= x) {
      return true;
    } else {
      return false;
    }
  }

  if (w > 0) {
    return true;
  }

  return false;
} */

int main() {

  char s[100];
  scanf("%s", s);
  // printf("%s", s);

  int answer = checkValidString(s);
  printf("%d", answer);

  return 0;
}
