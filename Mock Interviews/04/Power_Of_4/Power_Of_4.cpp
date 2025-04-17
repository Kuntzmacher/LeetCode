#include <iostream>

class Solution {
	public:
		bool isPowerOfFour(int n) {
			int rem = 0;
			if ( ( n <= 0 ) || ( ( n > 1 ) && ( n < 4 ) ) ) {
				return false;
			}
			else if ( n == 1 ) {
				return true;
			}
			else {
				rem = n & 3;
				if ( rem != 0 ) { return false; }
				else { return this->isPowerOfFour( n >> 2 ); }
			}
		}
};


int main() {
	int n;
	std::cin >> n;
	Solution sol;
	std::cout << sol.isPowerOfFour(n);
}
