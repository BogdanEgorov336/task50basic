#include "logic.h"

double get_avg_non_zero_elements(int** matrix, int n, int m) {

	int sum = 0;
	double count = 0;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (matrix[i][j] != 0) {

				sum += abs(matrix[i][j]);
				count++;
			}
		}
	}

	return count ? sum / count : 0;
}