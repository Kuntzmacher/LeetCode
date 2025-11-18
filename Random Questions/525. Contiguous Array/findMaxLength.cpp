#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  int findMaxLength(vector<int> &nums) {

    unordered_map<int, int> map;
    map[0] = -1;

    int max_len = 0;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
      sum = (nums[i] == 1 ? sum + 1 : sum - 1);

      if (map.find(sum) != map.end()) {
        max_len = max(max_len, i - map[sum]);
      } else {
        map[sum] = i;
      }
    }

    return max_len;
  }
};

int main() {

  int n;
  cin >> n;

  int temp;
  vector<int> nums;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    nums.push_back(temp);
  }

  /* for (int i = 0; i < n; i++) {
    cout << nums[i] << endl;
  } */

  Solution sol;
  cout << sol.findMaxLength(nums);

  return 0;
}
