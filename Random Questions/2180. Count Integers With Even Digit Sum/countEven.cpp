#include <iostream>
using namespace std;

class Solution {
public:
  int countEven(int num) {

    int count = 0;
    int temp = 0;
    int sum = 0;

    for (int i = 1; i <= num; i++) {
      temp = i;
      sum = 0;
      while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
      }

      if (sum % 2 == 0) {
        count++;
      }
    }

    return count;
  }
};

int main() {

  int num;

  cin >> num;

  Solution sol;

  cout << sol.countEven(num);

  exit(0);
}
