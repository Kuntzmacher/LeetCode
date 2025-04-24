//                              ╭────────────────╮
//                              │ not working :( │
//                              ╰────────────────╯
#include "iostream"

class Solution {
	public:
		std::string licenseKeyFormatting(std::string s, int k) {

			std::string output = "";
			int j = 0;
			int index1 = 0;
			int index2 = 0;

			int len = s.length();
			std::cerr << "DEBUGPRINT[72]: License_Key_Dashes.cpp:12: len=" << len << std::endl;

			for ( int i = 0; i < len; i++ ) {

				index2 = 0;

				index1 = len - i - 1;

				std::cout << s[ index1 ];

				while ( ( index2 < k ) && ( j < len - 1 ) ) {

					std::cerr << "j=" << j << ", k=" << k << ", index1=" << index1 << ", index2=" << index2 << ", output=" << output << ", char=" << s[index1-j] << std::endl;
					if ( s[ index1 - j ] != '-' ) {

						output += s[ index1 - j ];

						index2++;

					}

					j++;
					std::cerr << "j=" << j << ", k=" << k << ", index1=" << index1 << ", index2=" << index2 << ", output=" << output << ", char=" << s[index1-j] << std::endl;

				}

				if ( ( index1 - j ) >= 0  ) { output += '-'; }
				else { break; }

			}

			return output;

		}
};

int main() {

	std::string s;
	std::cin >> s;

	int k;
	std::cin >> k;

	Solution sol;
	std::string output = sol.licenseKeyFormatting(s, k);

	return 0;
}
