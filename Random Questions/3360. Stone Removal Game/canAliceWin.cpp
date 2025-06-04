// works

#include <iostream>

class Solution {
public:
  bool canAliceWin(int n) {

    int count = 0;

    for (int i = 10; i <= n; i--) {
      n -= i;
      count++;
    }

    if (count % 2 == 0) {
      return false;
    } else {
      return true;
    }
  }
};

int main() {
  int n = 0;
  std::cin >> n;

  Solution sol;

  std::cout << sol.canAliceWin(n);
  return 0;
}
