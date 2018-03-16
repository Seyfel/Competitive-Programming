#include <cstdio>
#include <algorithm>

int main(int argc, char* argv[]) {
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		int res;
		if (a <= std::max(b, c) && a >= std::min(b, c)) res = a;
		if (b <= std::max(a, c) && b >= std::min(a, c)) res = b;
		if (c <= std::max(b, a) && c >= std::min(b, a)) res = c;
		printf("Case %d: %d\n", t, res);
	}
}