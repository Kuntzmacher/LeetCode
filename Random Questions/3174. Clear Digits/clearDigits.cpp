#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string clearDigits(string s) {

    vector<char> vec;
    string str;

    for (auto c : s) {

      if (isalpha(c)) {
        vec.push_back(c);
        continue;
      }

      if (~isalpha(c)) {
        if (vec.size() == 0) {
          str.push_back(c);
          continue;
        }

        vec.pop_back();
      }
    }

    for (int i = 0; i < vec.size(); i++) {
      str.push_back(vec.at(i));
    }

    return str;
  }
};

int main() {

  string s = "";

  cin >> s;

  Solution sol;
  cout << sol.clearDigits(s);
}
