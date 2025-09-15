#include "logic.h"

int get_min(int** matrix, int n, int m) {

	int min = matrix[0][0];

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (min > matrix[i][j]) {

				min = matrix[i][j];
			}
		}
	}

	return min;
}

int get_max(int** matrix, int n, int m) {

	int max = matrix[0][0];

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (max < matrix[i][j]) {

				max = matrix[i][j];
			}
		}
	}

	return max;
}

bool is_there_any_extreme_elements(int** matrix, int n, int m, int j) {

	int min = get_min(matrix, n, m);
	int max = get_max(matrix, n, m);

	for (int i = 0; i < n; i++) {

		if (matrix[i][j] == min || matrix[i][j] == max) {

			return true;
		}
	}

	return false;
}

int get_sum_from_column(int** matrix, int n, int j) {

	int sum = 0;

	for (int i = 0; i < n; i++) {

		sum += matrix[i][j];
	}

	return sum;
}

int get_sum_from_columns_with_extreme_elements(int** matrix, int n, int m) {

	int sum = 0;

	for (int j = 0; j < m; j++) {

		if (is_there_any_extreme_elements(matrix, n, m, j)) {

			sum += get_sum_from_column(matrix, n, j);
		}
	}

	return sum;
}