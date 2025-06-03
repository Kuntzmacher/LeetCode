// working
#include <iostream>

using namespace std;

class Solution {
public:
  string removeDuplicates(string s) {
    int len = s.length();
    int i = 0;

    while (i < len) {
      if (i == 0) {
        i++;
      } else if (s.at(i) == s.at(i - 1)) {
        s.erase(i - 1, 2);
        i--;
        len -= 2;
      } else {
        i++;
      }
    }

    return s;
  }
};

int main() {
  string s = "";
  cin >> s;

  Solution sol;

  cout << sol.removeDuplicates(s);
}
