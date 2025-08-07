#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  string convertDateToBinary(string date) {

    string binary = "";

    int first_sep = date.find_first_of('-');
    int last_sep = date.find_last_of('-');

    int year = stoi(date.substr(0, first_sep));
    int month = stoi(date.substr(first_sep + 1, last_sep));
    int day = stoi(date.substr(last_sep + 1, date.length() + 1));

    binary.append(toBinary(year));
    binary.push_back('-');
    binary.append(toBinary(month));
    binary.push_back('-');
    binary.append(toBinary(day));

    return binary;
  }

private:
  string toBinary(int num) {
    string binary = "";
    while (num > 0) {

      binary = (num % 2 == 0 ? "0" : "1") + binary;
      num /= 2;
    }

    return binary.empty() ? "0" : binary;
  }
};

int main() {

  string date;

  cin >> date;

  Solution sol;
  cout << sol.convertDateToBinary(date);
}
