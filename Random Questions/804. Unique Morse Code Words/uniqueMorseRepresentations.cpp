#include "uniqueMorseRepresentations.h"

using namespace std;

int Solution::uniqueMorseRepresentations(vector<string> &words) {

  vector<string> morse = {".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
                          "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
                          "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
                          "...-", ".--",  "-..-", "-.--", "--.."};
  vector<string> converted = {};
  string str = "";
  bool exists = false;
  int count = 0;

  for (auto word : words) {

    for (auto letter : word) {
      str.append(morse[letter - 'a']);
    }

    for (auto temp : converted) {
      if (temp == str) {
        exists = true;
        break;
      }
    }

    if (exists) {
      exists = false;
    } else {
      count++;
      converted.push_back(str);
    }

    str = "";
  }

  return count;
}
