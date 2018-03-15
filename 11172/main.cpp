#include <cstdio>

int main(int argc, char* argv[]) {
	int T, a, b;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d %d", &a, &b);
		if (a < b) {
			printf("<\n");
		} else if (a > b) {
			printf(">\n");
		} else {
			printf("=\n");
		}
	}
	return 0;
}