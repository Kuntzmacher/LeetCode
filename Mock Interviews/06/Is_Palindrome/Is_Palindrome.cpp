//                                ╭────────────╮
//                                │ working ツ │
//                                ╰────────────╯
# include "iostream"
class Solution {
	public:
		bool isPalindrome(int x) {

			std::string xStr = std::to_string(x);

			int len = xStr.length();

			for (int i = 0; i < len; i++) {
				if ( xStr.at(i) != xStr.at(len-i-1) ) {
					return false;
				}
			};

			return true;

		}
};

int main(){

	int num;
	bool bil;

	std::cin >> num;

	Solution sol;
	bil = sol.isPalindrome(num);

	std::cout << bil;

	return 0;
}
