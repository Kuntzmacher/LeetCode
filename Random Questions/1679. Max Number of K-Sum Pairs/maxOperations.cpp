#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

// the maximal size of the string
#define MAX_SIZE 1000

class Solution {
public:
  int maxOperations(vector<int> &nums, int k) {

    unordered_map<int, int> map;
    int count = 0;

    for (int item : nums) {
      if (map[item] > 0) {
        count++;
        map[item]--;
      } else {
        map[k - item]++;
      }
    }

    return count;
  }
};

int main() {

  int k;
  cin >> k;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  // init vars
  string input;
  vector<int> numbers(MAX_SIZE);
  int index = 0;
  string substring;

  // get user input
  getline(cin, input);

  // convert user input to a string stream
  stringstream string_stream(input);

  // iterate over string stream, separated to substrings by ','
  while ((getline(string_stream, substring, ',')) && (index < MAX_SIZE)) {

    try {

      numbers[index] = stoi(substring); // convert string to int
      index++;

    } catch (invalid_argument &e) {

      cout << "Invalid number: " << substring << endl;
    }
  }

  // for (int i = 0; i < index; i++) {
  //   cout << numbers[i] << endl;
  // }

  Solution sol;

  int answer = sol.maxOperations(numbers, k);

  cout << answer << endl;

  return 0;
}
