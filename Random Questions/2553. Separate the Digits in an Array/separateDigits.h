#ifndef separateDigits_H
#define separateDigits_H

#include <vector>
class Solution {
  public:
    std::vector<int> separateDigits(std::vector<int>& nums);
  private:
    std::vector<int> getDigits(std::vector<int> digits, int num);
};

#endif
