#include <cstdio>

int main(int argc, char* argv[]) {
	int N;
	int t = 1;
	while (scanf("%d", &N) == 1 && N > 0) {
		int balance = 0;
		for (int n = 0; n < N; n++) {
			int event;
			scanf("%d", &event);
			if (event > 0) {
				balance++;
			} else {
				balance--;
			}
		}

		printf("Case %d: %d\n", t++, balance);
	}
	return 0;
}