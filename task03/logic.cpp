#include "Logic.h"

bool is_most_elements_positive(int** matrix, int i, int m) {

	int c = 0;

	for (int j = 0; j < m; j++) {

		if (matrix[i][j] > 0) {

			c++;
		}
	}

	return c > m - c ? true : false;
}

int get_amount_of_lines(int** matrix, int n, int m) {

	int c = 0;

	for (int i = 0; i < n; i++) {

		is_most_elements_positive(matrix, i, m)
			? c++ : c;
	}

	return c;
}