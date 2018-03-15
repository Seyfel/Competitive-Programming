#include <cstdio>

int clockwiseClicks(int from, int to) {
	if (from == to) {
		return 0;
	}
	if (from < to) {
		return from - to + 40;
	} else {
		return from - to;
	}
}

int counterClockwiseClicks(int from, int to) {
	if (from == to) {
		return 0;
	}
	if (from > to) {
		return to - from + 40;
	} else {
		return to - from;
	}
}

int main(int argc, char* argv[]) {
	int startPos, first, second, third;
	int degPerClick = 9; // 9 degrees each click

	while (scanf("%d %d %d %d", &startPos, &first, &second, &third) == 4 && (first || second || third || startPos)) {
		int res = 720 + 360; // Initial 2 full turns + 1 full turn after first
		res += clockwiseClicks(startPos, first) * degPerClick;
		res += counterClockwiseClicks(first, second) * degPerClick;
		res += clockwiseClicks(second, third) * degPerClick;

		printf("%d\n", res);
	}
	return 0;
}