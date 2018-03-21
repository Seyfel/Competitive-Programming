#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	std::string word;
	int t = 1;
	while (std::cin >> word && word.compare("*") != 0) {
		if (word.compare("Hajj") == 0) {
			std::cout << "Case " << t++ << ": Hajj-e-Akbar" << std::endl;
		} else {
			std::cout << "Case " << t++ << ": Hajj-e-Asghar" << std::endl;
		}
	}
	return 0;
}