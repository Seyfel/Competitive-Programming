#include <cstdio>
#include <vector>

int main(int argc, char* argv[]) {
	int B, N;
	while (scanf("%d %d", &B, &N) == 2 && B != 0 && N != 0) {
		std::vector<int> banksReserves(B);
		for (int b = 0; b < B; b++) {
			scanf("%d", &banksReserves[b]);
		}

		for (int n = 0; n < N; n++) {
			int debtor, creditor, value;
			scanf("%d %d %d", &debtor, &creditor, &value);
			debtor--;	// Adjust Bank Indices
			creditor--;

			banksReserves[debtor] -= value;
			banksReserves[creditor] += value;
		}

		int success = true;
		for (int b = 0; b < B; b++) {
			if (banksReserves[b] < 0) {
				success = false;
			}
		}

		if (success) {
			printf("S\n");
		} else {
			printf("N\n");
		}
	}
}