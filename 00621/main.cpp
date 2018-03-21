#include <iostream>
#include <string>

bool isPositive(const std::string &word) {
	if (word.length() == 1 && (word[0] == '1' || word[0] == '4')) {
		return true;
	} else if (word.length() == 2 && word[0] == '7' && word[1] == '8') {
		return true;
	}
	return false;
}

bool isNegative(const std::string &word) {
	if (word.length() > 2 && word[word.length()-2] == '3' && word[word.length()-1] == '5') {
		return true;
	}
	return false;
}

bool isFailed(const std::string &word) {
	if (word.length() > 2 && word[0] == '9' && word[word.length()-1] == '4') {
		return true;
	}
	return false;
}

bool isNotCompleted(const std::string &word) {
	if (word.length() > 3 && word[0] == '1' && word[1] == '9' && word[2] == '0') {
		return true;
	}
	return false;
}

int main(int arg, char* argv[]) {
	int N;
	std::string word;

	std::cin >> N;
	for (int n = 0; n < N; n++) {
		std::cin >> word;
		if (isPositive(word)) {
			std::cout << "+" << std::endl;
		} else if (isNegative(word)) {
			std::cout << "-" << std::endl;
		} else if (isFailed(word)) {
			std::cout << "*" << std::endl;
		} else if (isNotCompleted(word)) {
			std::cout << "?" << std::endl;
		}
	}

	return 0;
}