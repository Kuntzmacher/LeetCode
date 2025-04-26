# include "iostream"

class Solution {

public:

	int reverse( int x ) {

		char temp = '0';
		int sign = 1;
		int reversed = 0;

		if ( x < 0 ) { sign = -1; }

		std::string str = std::to_string( ( uint ) x * sign );
		int len = str.length();

		for (int i = 0; i < str.length() / 2; i++) {

			temp = str[i];
			str[i] = str[ len - i - 1 ];
			str[ len - i - 1 ] = temp;

		}

		try {
			reversed = std::stoi(str) * sign;
		} catch ( const std::out_of_range& e ) {
			reversed = 0;
		}

		return reversed;

	}

};

int main() {

	int x = 0;

	std::cin >> x;
	std::cerr << "DEBUGPRINT[106]: Reverse-Digit-Order.cpp:17: x=" << x << std::endl;

	Solution sol;
	int answer = sol.reverse(x);

	std::cout << answer;

	return 0;

}
