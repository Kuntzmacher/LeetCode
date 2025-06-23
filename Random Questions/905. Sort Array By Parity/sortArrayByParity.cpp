#include <vector>

using namespace std;

class Solution {
public:
  vector<int> sortArrayByParity(vector<int> &nums) {

    vector<int> even;
    vector<int> odd;
    vector<int> answer;

    for (auto num : nums) {
      if (num % 2 == 0) {
        even.push_back(num);
      } else {
        odd.push_back(num);
      }
    }

    for (auto num : even) {
      answer.push_back(num);
    }

    for (auto num : odd) {
      answer.push_back(num);
    }

    return answer;
  }
};
