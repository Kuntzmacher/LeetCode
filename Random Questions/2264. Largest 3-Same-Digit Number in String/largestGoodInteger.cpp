// works

#include <iostream>

using namespace std;

class Solution {
public:
  string largestGoodInteger(string num) {
    string answer = "";

    if (num.length() < 3) {
      return answer;
    };

    for (int i = 2; i < num.length(); i++) {
      if ((num[i - 2] == num[i - 1]) && (num[i - 1] == num[i])) {
        if (!answer.empty()) {
          if (num[i] - '0' < answer[0] - '0') {
            continue;
          }
        }
        answer.clear();
        answer.push_back(num[i - 2]);
        answer.push_back(num[i - 1]);
        answer.push_back(num[i]);
      }
    };

    return answer;
  }
};

int main() {
  string num = "";
  std::cin >> num;

  Solution sol;
  std::cout << sol.largestGoodInteger(num);
}
