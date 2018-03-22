#include <cstdio>

int main(int argc, char* argv[]) {
	int N, B, H, W;
	while (scanf("%d %d %d %d", &N, &B, &H, &W) == 4) {
		int cheapestValid = 99999;
		for (int h = 0; h < H; h++) { // Check all the hotels
			int price;
			scanf("%d", &price);

			// Check All weeks
			int maxAvailableRooms;
			scanf("%d", &maxAvailableRooms);
			for (int w = 1; w < W; w++) {
				int currentAvailability;
				scanf("%d", &currentAvailability);

				if (currentAvailability > maxAvailableRooms) {
					maxAvailableRooms = currentAvailability;
				}
			}

			if (maxAvailableRooms >= N) {
				if (price < cheapestValid) {
					cheapestValid = price;
				}
			}
		}

		if (cheapestValid == 99999) { // Valid Hotel Not found
			printf("stay home\n");
		} else {
			int totalPrice = cheapestValid * N;
			if (totalPrice <= B) {
				printf("%d\n", totalPrice);
			} else {
				printf("stay home\n");
			}
		}

	}
}