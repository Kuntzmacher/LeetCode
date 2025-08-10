#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  string convertToBase7(int num) {

    if (num == 0) {
      return "0";
    }

    int sign = 1;
    if (num < 0) {
      sign = -1;
      num = abs(num);
    }
    string str = "";

    while (num != 0) {

      if (num < 7) {
        str.push_back('0' + num);
      } else {
        str.push_back('0' + num % 7);
      }
      num /= 7;
    }

    if (sign == -1) {
      str.push_back('-');
    }

    reverse(str.begin(), str.end());

    return str;
  }
};

int main() {

  int num = 0;

  cin >> num;

  Solution sol;

  cout << sol.convertToBase7(num);
}
