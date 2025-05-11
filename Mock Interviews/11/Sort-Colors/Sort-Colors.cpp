//                                ╭────────────╮
//                                │ working ツ │
//                                ╰────────────╯

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

class Solution {
public:
	void sortColors( std::vector<int>& nums ) {

		int len = nums.size();

		int min_index = 0;
		int min_val = 0;

		for (size_t i = 0; i < len; i++) {

			min_index = i;
			min_val = nums[i];

			for (size_t j = i; j < len; j++) {

				if ( nums[j] < min_val ) {
					min_index = j;
					min_val = nums[j];
				}

			}

			nums[min_index] = nums[i];
			nums[i] = min_val;

		}

	};
};

int main() {

	// init vars
	std::string input;
	const int MAX_SIZE = 1000;
	int numbers[MAX_SIZE];
	int index = 0;
	std::string substring;

	std::vector <int> nums;

	// get user input
	std::getline(std::cin, input);

	// convert user input to a string stream
	std::stringstream string_stream(input);

	// iterate over string stream, separated to substrings by ','
	while ( ( std::getline(string_stream, substring, ',') ) && ( index < MAX_SIZE ) ) {

		try {

			numbers[index] = std::stoi(substring); // convert string to int
			index++;

		} catch ( std::invalid_argument& e ) {

			std::cout << "Invalid number: " << substring << std::endl;

		}

	}

	// print the numbers
	for (int i = 0; i < index; ++i) {
		// std::cout << numbers[i] << std::endl;
		nums.push_back(numbers[i]);
	}

	class Solution sol;
	sol.sortColors(nums);

	std::cout << nums[0];
	for (int i = 1; i < index; ++i) {
		std::cout << ',' << nums[i];
	}

	return 0;

}
