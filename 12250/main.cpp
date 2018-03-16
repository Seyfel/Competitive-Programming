#include <cstdio>
#include <cstring>

int main(int argc, char* argv[]) {
	int t = 1;
	char word[15];
	while (scanf("%s", word) == 1) {
		if (strcmp(word, "#") == 0) {
			break;
		} else if (strcmp(word, "HELLO") == 0) {
			printf("Case %d: ENGLISH\n", t++);
		} else if (strcmp(word, "HOLA") == 0) {
			printf("Case %d: SPANISH\n", t++);
		} else if (strcmp(word, "HALLO") == 0) {
			printf("Case %d: GERMAN\n", t++);
		} else if (strcmp(word, "BONJOUR") == 0) {
			printf("Case %d: FRENCH\n", t++);
		} else if (strcmp(word, "CIAO") == 0) {
			printf("Case %d: ITALIAN\n", t++);
		} else if (strcmp(word, "ZDRAVSTVUJTE") == 0) {
			printf("Case %d: RUSSIAN\n", t++);
		} else {
			printf("Case %d: UNKNOWN\n", t++);
		}
	}
	return 0;
}