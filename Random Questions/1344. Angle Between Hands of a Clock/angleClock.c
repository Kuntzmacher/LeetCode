#include <stdio.h>

double angleClock(int hour, int minutes) {

  double dHour = (hour % 12 + minutes / 60.0) * 30.0;
  double dMin = minutes * 6.0;

  double answer = dHour - dMin;

  if (answer < 0) {
    answer *= -1;
  }

  if (answer > 180) {
    answer = 360 - answer;
  }

  return answer;
}

int main() {
  int hour, minutes;

  scanf("%d %d", &hour, &minutes);

  double answer = angleClock(hour, minutes);

  printf("%.5f", answer);
}
