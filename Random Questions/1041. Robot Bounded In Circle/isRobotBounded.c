#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000

bool isRobotBounded(char *instructions) {

  bool n = false, s = false, e = false, w = false;
  int N = 0, S = 0, E = 0, W = 0;
  bool bounded = false;
  char c;

  n = true;

  for (int j = 0; j < 4; j++) {

    for (int i = 0; i < strlen(instructions); i++) {

      c = instructions[i];

      switch (c) {
      case 'G':
        if (n) {
          N++;
        } else if (s) {
          S++;
        } else if (e) {
          E++;
        } else if (w) {
          W++;
        }
        continue;
      case 'L':
        if (n) {
          n = false;
          w = true;
        } else if (s) {
          s = false;
          e = true;
        } else if (e) {
          e = false;
          n = true;
        } else if (w) {
          w = false;
          s = true;
        }
        continue;
      case 'R':
        if (n) {
          n = false;
          e = true;
        } else if (s) {
          s = false;
          w = true;
        } else if (e) {
          e = false;
          s = true;
        } else if (w) {
          w = false;
          n = true;
        }
        continue;
      }
    }
  }

  if ((N == S) && (E == W)) {
    bounded = true;
  }

  return bounded;
}

int main() {

  char *instructions = (char *)malloc(MAX_SIZE * sizeof(instructions[0]));
  if (instructions == NULL) {
    return -1;
  }

  scanf("%s", instructions);

  printf("%d", isRobotBounded(instructions));

  free(instructions);
}
