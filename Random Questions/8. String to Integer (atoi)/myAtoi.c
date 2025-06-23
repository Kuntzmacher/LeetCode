#include <limits.h>
#include <stdbool.h>
#include <string.h>

int myAtoi(char *s) {

  bool started = false;
  bool neg = false;
  char strNum[200] = "";
  int num = 0;
  int j = 0;

  for (int i = 0; i < strlen(s); i++) {
    if (!started && s[i] == ' ') {
      continue;
    } else if (!started && s[i] == '+') {
      started = true;
      continue;
    } else if (!started && s[i] == '-' && !neg) {
      neg = true;
      started = true;
      continue;
    } else if (s[i] >= '0' && s[i] <= '9') {
      strNum[j++] = s[i];
      if (!started) {
        started = true;
      }
    } else {
      break;
    }
  }
  strNum[j] = '\0';

  for (int i = 0; i < strlen(strNum); i++) {
    if (num > ((INT_MAX - (strNum[i] - '0')) / 10)) {
      if (neg) {
        return INT_MIN;
      } else {
        return INT_MAX;
      }
    }
    num = num * 10 + (strNum[i] - '0');
  }

  if (neg) {
    num *= -1;
  }

  return num;
}
