//                                ╭────────────╮
//                                │ working ツ │
//                                ╰────────────╯
#include "iostream"

class Solution {
public:
	bool isPowerOfTwo( int n ) {

		int num = n;
		std::string binNum;

		while ( num > 0 ) {

			if ( num == 2 ) {

				binNum += "01";
				break;

			}
			else if ( num % 2 == 0 ) { binNum += '0'; }
			else if ( num % 2 == 1 ) { binNum += '1'; }

			num /= 2;

		}

		int len = binNum.length();
		char c;

		for (int i = 0; i < len / 2; i++) {

			char c = binNum[i];
			binNum[i] = binNum[len-i-1];
			binNum[len-i-1] = c;

		}

		std::cerr << "binNum: " << binNum << std::endl;

		int count = 0;

		for(char bit : binNum) {
			std::cerr << "DEBUGPRINT[79]: Power_Of_Two.cpp:40: bit=" << bit << std::endl;

			if ( bit == '1' ) {

				if ( count == 0 ) {

					count = 1;

				}
				else {

					count = -1;
					break;

				}

			}

		}

		if ( count == 1 ) { return true; }
		else { return false; }

	}
};

int main() {

	bool answer;

	int n;
	std::cin >> n;
	std::cerr << "DEBUGPRINT[78]: Power_Of_Two.cpp:37: n=" << n << std::endl;

	Solution sol;
	answer = sol.isPowerOfTwo(n);

	std::cout << answer;

}
