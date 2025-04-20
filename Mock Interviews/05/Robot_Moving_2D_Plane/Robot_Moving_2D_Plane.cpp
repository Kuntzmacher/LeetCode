#include <iostream>

class Solution {
	public:
		bool judgeCircle(std::string moves) {

			int x = 0;
			int y = 0;

			for(char move : moves){

				switch(move) {
					case 'U':
						y++;
						continue;
					case 'D':
						y--;
						continue;
					case 'R':
						x++;
						continue;
					case 'L':
						x--;
						continue;
				};

			};

			if ( ( x == 0 ) && ( y == 0 ) ) {
				return true;
			}
			else {
				return false;
			}

		}
};

int main(){
	Solution sol;
	std::string moves = "";
	std::cin >> moves;
	bool temp = sol.judgeCircle(moves);
	std::cout << temp;
	return 0;
}
