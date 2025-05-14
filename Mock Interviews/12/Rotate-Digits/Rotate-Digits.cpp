//                           ╭───────────────────────╮
//                           │ this does not work :( │
//                           ╰───────────────────────╯

# include <iostream>

class Solution {
public:
	int rotatedDigits(int n) {

		int counter = 0;
		int tempNum = 0;

		for ( int i = 0; i <= n; i++ ) {

			if ( ( checkNum(i % 10000) == -1 ) || ( checkNum(i % 1000 - i % 100) == -1 ) || ( checkNum(i % 100 - i % 1000) == -1 ) || ( checkNum(i % 10 - i % 100) == -1 ) ) { continue; }
			else if ( checkNum(i % 10000) || checkNum(i % 1000 - i % 10000) || checkNum(i % 100 - i % 1000) || checkNum(i % 10 - i % 100) ) { counter++; }

		}

		return counter;

	}

	int checkNum(int num) {
		switch (num) {
			case 0:
				return false;
			case 1:
				return false;
			case 2:
				return true;
			case 3:
				return -1;
			case 4:
				return -1;
			case 5:
				return true;
			case 6:
				return true;
			case 7:
				return -1;
			case 8:
				return false;
			case 9:
				return true;
			default:
				return false;
		}
	}

};


int main() {

	int n = 0;
	std::cin >> n;
	std::cerr << "DEBUGPRINT: Rotate-Digits.cpp:12: n=" << n << std::endl;

	Solution sol;
	std::cout << sol.rotatedDigits(n);

}
