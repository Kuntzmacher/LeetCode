#include <stdbool.h>
#include <stdio.h>

int minMoves(int target, int maxDoubles) {

  bool isOdd = false;

  if (maxDoubles == 0) {
    return target - 1;
  }
  if (target == 1) {
    return 0;
  }

  int count = 0;

  while ((maxDoubles > 0) && (target != 1)) {
    count++;
    maxDoubles--;
    if (target % 2 == 1) {
      count++;
      isOdd = true;
    }
    target /= 2;
  }

  target--;

  return count + target;
}

int main() {

  int target;
  int maxDoubles;

  scanf("%d %d", &target, &maxDoubles);

  printf("%d", minMoves(target, maxDoubles));
}
