#include "stdio.h"

int helper(int n, int sign) {
  if (n == 1) {
    return sign;
  } else if (n == 2) {
    return 2 * sign;
  } else if (n == 3) {
    return 6 * sign;
  } else if (n == 4) {
    if (sign == 1) {
      return 7;
    } else {
      return -5;
    }
  }

  int calc = sign * (n * (n - 1) / (n - 2));

  return calc + (n - 3) + helper(n - 4, -1);
}

int clumsy(int n) { return helper(n, 1); }

int main() {

  int n = 0;
  scanf("%d", &n);

  int answer = clumsy(n);

  printf("%d\n", answer);

  return 0;
}
