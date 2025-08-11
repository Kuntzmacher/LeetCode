#include "minimumRightShifts.h"

using namespace std;

int Solution::minimumRightShifts(vector<int> &nums) {

  int prev = -1;
  int index = 0;
  int count = 0;
  int shift = -1;
  int max = 100;

  for (int i = 0; i < nums.size(); i++) {

    if (nums[i] > max) {
      return -1;
    }

    if (nums[i] < prev) {

      if ((count > 0)) {
        return -1;
      }

      count++;
      index = i;
      max = prev;
    }

    prev = nums[i];
  }

  shift = (nums.size() - index) % nums.size();

  if ((shift != 0) && (nums[0] < nums[nums.size() - 1])) {
    return -1;
  }

  return shift;
}
