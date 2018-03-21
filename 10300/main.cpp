#include <cstdio>

int main(int argc, char* argv[]) {
	int N;
	scanf("%d", &N);

	for (int n = 0; n < N; n++) {
		int F;
		scanf("%d", &F);

		int result = 0;
		for (int f = 0; f < F; f++) {
			int size, animals, environment;
			scanf("%d %d %d", &size, &animals, &environment);
			result += size * environment;
		}

		printf("%d\n", result);
	}

	return 0;
}