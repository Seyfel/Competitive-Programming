#include <cstdio>

int main(int argc, char* argv[]) {
	int T;
	scanf("%d", &T);

	for (int t = 0; t < T; t++) {
		if (t != 0) {
			printf("\n");
		}

		int W;
		scanf("%d", &W);

		int top, bottom;
		scanf("%d %d", &top, &bottom);
		int gap = top - bottom;
		bool result = true;
		for (int w = 1; w < W; w++) {
			scanf("%d %d", &top, &bottom);
			if (gap != top - bottom) {
				result = false;
			}
		}

		if (result) {
			printf("yes\n");
		} else {
			printf("no\n");
		}
	}

	return 0;
}