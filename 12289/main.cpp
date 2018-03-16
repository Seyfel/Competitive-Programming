#include <iostream>
#include <string>

bool isOne(const std::string &word) {
	if (word[0] == 'o' && (word[1] == 'n' || word[2] == 'e')) {
		return true;
	} else if (word[1] == 'n' && word[2] == 'e') {
		return true;
	}
	return false;
}

int main(int argc, char* argv[]) {
	int N;
	std::cin >> N;
	std::cin.ignore(10000,'\n');
	for (int n = 0; n < N; n++) {
		std::string word;
		std::cin >> word;

		if (word.length() == 5) {
			std::cout << "3" << std::endl;
		} else if (isOne(word)) {
			std::cout << "1" << std::endl;
		} else {
			std::cout << "2" << std::endl;
		}
	}
	return 0;
}