#include <cstdio>

int main(int argc, char* argv[]) {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int n;
		scanf("%d", &n);
		int res = ((((((n * 567) / 9) + 7492) * 235) / 47) - 498) / 10 % 10;
		res = (res < 0) ? -res : res;
		printf("%d\n", res);
	}
	return 0;
}