// working :)

#include <iostream>

class Solution {
public:
  int passThePillow(int n, int time) {

    int place = 0;
    int jump = 1;

    while (time >= 0) {

      if (place == n) {
        jump = -1;
      } else if (place == 1) {
        jump = 1;
      }

      place += jump;
      time--;
    }

    return place;
  }
};

int main() {

  int n = 0;
  std::cin >> n;

  int time = 0;
  std::cin >> time;

  Solution sol;
  std::cout << sol.passThePillow(n, time);

  return 0;
}
