#include <limits.h>
#include <stdio.h>

int integerReplacement(int n) {

  int temp_minus = 0;
  int temp_plus = 0;

  if (n == 1) {
    return 0;
  } else if (n % 2 == 0) {
    return 1 + integerReplacement(n / 2);
  } else {

    temp_minus = integerReplacement(n - 1);

    if (n + 1 < INT_MAX - 1) {

      temp_plus = integerReplacement(n + 1);

      if (temp_minus < temp_plus) {
        return 1 + temp_minus;
      } else {
        return 1 + temp_plus;
      }

    } else {
      return 32;
      // return 1 + temp_minus;
    }
  }
}

int main() {
  int n = 0;
  scanf("%d", &n);
  int answer = integerReplacement(n);
  printf("%d", answer);
  return 0;
}
