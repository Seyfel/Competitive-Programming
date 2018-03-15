#include <cstdio>

int main(int argc, char* argv[]) {
	int T, N;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d", &N);

		int min, max, current;
		scanf("%d", &current);
		min = current;
		max = current;

		for (int n = 1; n < N; n++) {
			scanf("%d", &current);
			min = (current < min) ? current : min;
			max = (current > max) ? current : max;
		}

		int res = (max - min) * 2;
		printf("%d\n", res);
	}
	return 0;
}