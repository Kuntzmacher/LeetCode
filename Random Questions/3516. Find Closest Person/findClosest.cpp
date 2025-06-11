#include <iostream>

using namespace std;

class Solution {
public:
  int findClosest(int x, int y, int z) {
    int xdist = abs(z - x);
    int ydist = abs(z - y);
    if (xdist == ydist) {
      return 0;
    } else if (xdist < ydist) {
      return 1;
    } else {
      return 2;
    }
  }
};

int main() {
  int x = 0;
  int y = 0;
  int z = 0;

  cin >> x;
  cin >> y;
  cin >> z;

  Solution sol;
  cout << sol.findClosest(x, y, z);
}
