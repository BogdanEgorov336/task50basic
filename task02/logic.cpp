#include "logic.h"

int get_sum_from_main_diagonal(int** matrix, int n) {

	int sum = 0;

	for (int i = 0; i < n; i++) {

		sum += matrix[i][i];
	}

	return sum;
}

int get_sum_from_additional_diagonal(int** matrix, int n) {

	int sum = 0;

	for (int i = 0; i < n; i++) {

		sum += matrix[i][n - i - 1];
	}

	return sum;
}

int get_sum_from_both_diagonals(int** matrix, int n) {

	return get_sum_from_additional_diagonal(matrix, n)
		+ get_sum_from_main_diagonal(matrix, n);
}