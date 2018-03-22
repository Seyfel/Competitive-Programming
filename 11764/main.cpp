#include <cstdio>

int main(int argc, char* argv[]) {
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		int N;
		scanf("%d", &N);

		int highJumps = 0;
		int lowJumps = 0;
		int prevHeight;
		scanf("%d", &prevHeight);
		for (int n = 1; n < N; n++) {
			int currentHeight;
			scanf("%d", &currentHeight);
			if (currentHeight > prevHeight) {
				highJumps++;
			} else if (currentHeight < prevHeight) {
				lowJumps++;
			}
			prevHeight = currentHeight;
		}

		printf("Case %d: %d %d\n", t, highJumps, lowJumps);
	}
	return 0;
}