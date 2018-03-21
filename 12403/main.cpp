#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	int total = 0;

	int T;
	std::cin >> T;
	for (int t = 0; t < T; t++) {

		std::string word;
		std::cin >> word;

		if (word.compare("donate") == 0) {
			int donation;
			std::cin >> donation;
			total += donation;
		} else {
			std::cout << total << std::endl;
		}
	}
	return 0;
}