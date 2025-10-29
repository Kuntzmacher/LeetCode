#include "stringMatching.h"

#include <string>
#include <vector>

using namespace std;

vector<string> Solution::stringMatching(vector<string> &words) {

  vector<string> substrings = {};

  for (int i = 0; i < words.size(); i++) {
    for (int j = 0; j < words.size(); j++) {
      if (i == j) {
        continue;
      }

      if (words[j].find(words[i]) != string::npos) {
        substrings.push_back(words[i]);
        break;
      }
    }
  }

  return substrings;
}
