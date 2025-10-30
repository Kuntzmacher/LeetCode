#include "sumOddLengthSubarrys.h"

using namespace std;

int Solution::sumOddLengthSubarrays(vector<int> &arr) {
  int sum = 0;
  int size = arr.size();
  int j = 0;

  for (int i = 0; i < size; i++) {
    j = 0;
    while (i + j < size) {
      for (int k = i; k <= i + j; k++) {
        sum += arr[k];
      }
      j += 2;
    }
  }

  return sum;
}
