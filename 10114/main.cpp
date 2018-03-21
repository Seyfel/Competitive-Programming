#include <cstdio>
#include <vector>

struct depreciationRecord {
	int month;
	double percentage;
};

int main(int argc, char* argv[]) {
	int loanDuration;
	double payment, loan;
	int depreciationRecords;
	while (scanf("%d %lf %lf %d", &loanDuration, &payment, &loan, &depreciationRecords) == 4 && loanDuration > 0) {
		double carValue = payment + loan;
		double monthlyQuota = loan / loanDuration;
		std::vector<depreciationRecord> records(depreciationRecords);

		for (int i = 0; i < depreciationRecords; i++) {
			scanf("%d %lf", &records[i].month, &records[i].percentage);
		}

		int depreciationIndex = 0;
		int month = 0;

		// Initial Depreciation
		carValue *= 1 - records[depreciationIndex].percentage;

		while (carValue <= loan && ++month <= loanDuration) {
			if (depreciationIndex+1 < records.size() && month >= records[depreciationIndex+1].month) {
				depreciationIndex++;
			}

			loan -= monthlyQuota;
			carValue *= 1 - records[depreciationIndex].percentage;
		}

		if (month == 1) {
			printf("%d month\n", month);
		} else {
			printf("%d months\n", month);
		}
		
	}
	



	return 0;
}