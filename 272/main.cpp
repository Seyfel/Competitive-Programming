#include <cstdio>

int main(int argc, char* argv[]) {
	char inputChar;
	bool open = false;
	while (scanf("%c", &inputChar) == 1) {
		if (inputChar == '"') {
			if (open) {
				open = false;
				printf("''");
			} else {
				open = true;
				printf("``");
			}
		} else {
			printf("%c", inputChar);
		}
	}
	return 0;
}