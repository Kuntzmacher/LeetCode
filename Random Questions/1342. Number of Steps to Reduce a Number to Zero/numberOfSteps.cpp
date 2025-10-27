#include <iostream>

class Solution {
public:
  int numberOfSteps(int num) {
    int steps = 0;

    while (num != 0) {
      if (num % 2 == 0) {
        num /= 2;
      } else {
        num--;
      }
      steps++;
    }

    return steps;
  }
};

int main(int argc, char *argv[]) {
  int num;
  std::cin >> num;

  Solution sol;
  std::cout << sol.numberOfSteps(num);
  return 0;
}
