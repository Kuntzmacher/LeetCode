// works

#include <cstring>
#include <iostream>
using namespace std;

class Solution {
public:
  string largestOddNumber(string num) {

    int odd = -1;

    for (int i = num.length() - 1; i >= 0; i--) {
      if ((num[i] - '0') % 2 == 1) {
        odd = i;
        break;
      }
    }

    if (odd == -1) {
      return "";
    } else {
      return num.substr(0, odd + 1);
    }
  }
};

int main() {
  string num = "";
  cin >> num;
  Solution sol;
  cout << sol.largestOddNumber(num);
}
