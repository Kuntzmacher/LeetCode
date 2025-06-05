#include <iostream>
using namespace std;

class Solution {
public:
  bool checkRecords(string s) {

    int a = 0;
    int l = 0;

    for (int i = 0; i < s.length(); i++) {

      if ((a >= 2) || (l >= 3)) {
        return false;
      }

      if (s[i] == 'L') {
        l++;
        continue;
      } else if (s[i] == 'A') {
        a++;
      }

      l = 0;
    }

    if ((a >= 2) || (l >= 3)) {
      return false;
    }

    return true;
  }
};

int main() {
  string s = "";
  cin >> s;

  Solution sol;
  if (sol.checkRecords(s)) {
    cout << "true";
  } else {
    cout << "false";
  }

  return 0;
}
