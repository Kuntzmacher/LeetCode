//                                  ╭─────────╮
//                                  │ working │
//                                  ╰─────────╯

# include <iostream>
# include <unordered_map>

class Solution {
public:
	bool wordPattern(std::string pattern, std::string s) {

		std::string word = "";
		std::unordered_map<std::string, char> myMap;
		int index = 0;

		for(char letter : s) {

			if ( letter != ' ' ) { word += letter; }
			else {
				if ( ! check_word(myMap, word, pattern[index++]) ) { return false; };
				word = "";
			};

		}

		if ( ! check_word(myMap, word, pattern[index++]) ) { return false; };

		if ( index != pattern.length() ) { return false; }

		return true;

	};

	bool check_word(std::unordered_map<std::string, char> &myMap, std::string word, char c) {

		if ( myMap.find(word) == myMap.end() ) {
			for ( const auto& pair: myMap ) { if ( pair.second == c ) { return false; } }
			myMap[word] = c;
		}
		else {
			if ( myMap[word] == c ) { return true; }
			else { return false; }
		}

		return true;

	};

};

int main() {

	std::string pattern;
	std::getline(std::cin, pattern);
	std::cerr << "DEBUGPRINT: Word-Pattern.cpp:13: pattern=" << pattern << std::endl;

	std::string s;
	std::getline(std::cin, s);
	std::cerr << "DEBUGPRINT: Word-Pattern.cpp:13: s=" << s << std::endl;

	Solution sol;
	std::cout << sol.wordPattern(pattern, s);

	return 0;

}
