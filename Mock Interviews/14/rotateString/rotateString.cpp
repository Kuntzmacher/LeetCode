// ╭────────────╮
// │ working ツ │
// ╰────────────╯

#include <iostream>

class Solution {
public:
  bool rotateString(std::string s, std::string goal) {
    std::string temp;
    for (int i = 0; i < s.length(); i++) {
      temp.clear();
      for (int j = i; j < s.length(); j++) {
        temp += s.at(j);
      }
      for (int j = 0; j < i; j++) {
        temp += s.at(j);
      }
      if (temp == goal) {
        return true;
      }
    }
    return false;
  }
};

int main() {
  std::string s;
  std::cin >> s;
  std::cerr << "DEBUGPRINT: rotateString.cpp:10: s=" << s << std::endl;

  std::string goal;
  std::cin >> goal;
  std::cerr << "DEBUGPRINT: rotateString.cpp:14: goal=" << goal << std::endl;

  Solution sol;
  std::cout << sol.rotateString(s, goal);
  return 0;
}
