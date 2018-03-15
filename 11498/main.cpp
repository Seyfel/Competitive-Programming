#include <cstdio>

int main(int argc, char* argv[]) {
	int K;
	while (scanf("%d", &K) == 1 && K) {
		int N, M;
		scanf("%d %d", &N, &M);
		for (int k = 0; k < K; k++) {
			int x, y;
			scanf("%d %d", &x, &y);
			if (x == N || y == M) {
				printf("divisa\n");
			} else if (x > N) {
				if (y > M) {
					printf("NE\n");
				} else {
					printf("SE\n");
				}
			} else {
				if (y > M) {
					printf("NO\n");
				} else {
					printf("SO\n");
				}
			}
		}
	}
	return 0;
}