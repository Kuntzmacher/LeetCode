#include "separateDigits.h"

#include <iostream>
#include <vector>
using namespace std;

vector<int> Solution::separateDigits(vector<int> &nums) {

  vector<int> digits = {};
  vector<int> num_digits = {};

  for (auto num : nums) {
    num_digits = {};
    num_digits = getDigits(num_digits, num);
    for (int i = num_digits.size() - 1; i >= 0; i--) {
      digits.push_back(num_digits[i]);
    }
  }

  return digits;
}

vector<int> Solution::getDigits(vector<int> digits, int num) {

  while (num > 0) {
    digits.push_back(num % 10);
    num = num / 10;
  }

  return digits;
}
