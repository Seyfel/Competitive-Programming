#include <cstdio>

int main(int argc, char* argv[]) {
	int T, N, M;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d %d", &N, &M);

		int res = (N/3) * (M/3);
		printf("%d\n", res);
	}
}