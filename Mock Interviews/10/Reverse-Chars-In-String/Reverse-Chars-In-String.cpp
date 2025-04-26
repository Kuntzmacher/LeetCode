//                             ╭───────────────────╮
//                             │ almost working :/ │
//                             ╰───────────────────╯
# include "iostream"

class Solution {
public:
	std::string reverseStr( std::string s, int k ) {

		int len = s.length();
		bool rev = true;
		std::string str;
		int lenTemp = 0;
		char c;

		std::string answer = "";

		if ( len + 1 <= k ) {

			lenTemp = s.length();
			for ( int j = 0; j < lenTemp/2; j++ ) {
				c = s[j];
				s[j] = s[lenTemp-j-1];
				s[lenTemp-j-1] = c;
			}

			answer.append(s);

		}
		else {

			for (int i = 0; i < len; i++) {

				if ( rev ) {
					str += s[i];
				} else {
					str += s[i];
				}

				if ( ( ( i + 1 ) % k ) == 0 ) {
					std::cerr << str;

					if ( rev == false ) {

						answer.append(str);

						str.clear();
						rev = true;

					}
					else {

						lenTemp = str.length();
						for ( int j = 0; j < lenTemp/2; j++ ) {
							c = str[j];
							str[j] = str[lenTemp-j-1];
							str[lenTemp-j-1] = c;
						}

						answer.append(str);

						str.clear();
						rev = false;

					}

				}

			}

		}

		for ( int i = len - ( ( len - k ) % k ); i < len; i++ ) {
			answer += s[i];
		}

		return answer;

	}
};

int main() {

	std::string s;
	std::cin >> s;

	int k;
	std::cin >> k;

	Solution sol;
	std::string ans = sol.reverseStr(s, k);

	std::cout << ans;

	return 0;

}
