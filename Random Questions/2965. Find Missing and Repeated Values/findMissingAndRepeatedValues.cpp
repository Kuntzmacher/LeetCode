#include "findMissingAndRepeatedValues.h"

using namespace std;

vector<int> Solution::findMissingAndRepeatedValues(vector<vector<int>> &grid) {

  vector<bool> bgrid(grid.size() * grid.size() + 1, false);
  bgrid[0] = true;
  vector<int> answer = {-1, -1};

  for (int i = 0; i < grid.size(); i++) {
    for (int j = 0; j < grid.size(); j++) {
      if (bgrid[grid[i][j]]) {
        answer[0] = grid[i][j];
      } else {
        bgrid[grid[i][j]] = true;
      }
    }
  }

  for (int i = 1; i < bgrid.size(); i++) {
    if (!bgrid[i]) {
      answer[1] = i;
    }
  }

  return answer;
}
