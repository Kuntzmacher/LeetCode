// works
#include "numberGame.h"
#include <algorithm>
#include <vector>
using namespace std;

vector<int> Solution::numberGame(vector<int> &nums) {

  sort(nums.begin(), nums.end());

  int min_a = 0;
  int min_b = 0;

  vector<int> answer;

  for (int i = 0; i < nums.size(); i++) {
    if (i % 2 == 0) {
      min_a = nums[i];
    } else {
      min_b = nums[i];

      answer.push_back(min_b);
	  answer.push_back(min_a);
    }
  }

  return answer;
}
