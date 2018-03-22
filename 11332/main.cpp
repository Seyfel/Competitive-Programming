#include <cstdio>

int f(int n) {
	int res = 0;
	while (n > 0) {
		res += n % 10;
		n /= 10;
	}

	return res;
}

int g(int n) {
	while (n >= 10) {
		n = f(n);
	}
	return n;
}

int main(int argc, char* argv[]) {
	int n;
	while(scanf("%d", &n) == 1 && n > 0) {
		printf("%d\n", g(n));
	}

	return 0;
}