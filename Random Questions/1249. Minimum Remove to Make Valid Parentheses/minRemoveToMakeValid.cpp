#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
  string minRemoveToMakeValid(string s) {

    int count = 0;
    string output = "";

    for (char c : s) {
      if ((c == ')') && (count == 0)) {
        continue;
      } else if ((c == ')') && (count > 0)) {
        count--;
        output.push_back(c);
      } else if (c == '(') {
        count++;
        output.push_back(c);
      } else {
        output.push_back(c);
      }
    }

    while (count != 0) {
      output.erase(output.rfind('('), 1);
        count--;
    }

    return output;
  }
};

int main() {

  string s;
  cin >> s;

  Solution sol;
  cout << sol.minRemoveToMakeValid(s);

  exit(0);
}
