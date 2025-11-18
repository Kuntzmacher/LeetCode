#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* int monotoneIncreasingDigits(int n) {
  int temp = 0;
  int prev = 9;
  int rem = 0;

  for (int i = n; i >= 0; i--) {
    temp = i;
    prev = 9;
    while (temp > 0) {
      rem = temp % 10;
      if (rem <= prev) {
        prev = rem;
      } else {
        break;
      }
      temp /= 10;
    }
    if (temp == 0) {
      return i;
    }
  }

  return -1;
} */

int monotoneIncreasingDigits(int n) {

  char str[12];
  sprintf(str, "%d", n);

  int mark = -1;
  for (int i = 1; i < strlen(str); i++) {
    if (str[i] < str[i - 1]) {
      mark = i - 1;
      break;
    }
  }

  if (mark != -1) {
    while (mark != 0 && str[mark] == str[mark - 1]) {
      mark--;
    }
    str[mark]--;
    for (int i = mark + 1; i < strlen(str); i++) {
      str[i] = '9';
    }
  }

  return atoi(str);
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d", monotoneIncreasingDigits(n));
  return 0;
}
