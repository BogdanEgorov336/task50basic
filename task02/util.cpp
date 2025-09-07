#include "util.h"

void init(int** matrix, int n, int a, int b) {

	if (a > b) {
		swap(a, b);
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			matrix[i][j] = rand() % (b - a) + a + 1;
		}
	}
}

string convert_to_string(int** matrix, int n) {

	string str = "";

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			str += to_string(matrix[i][j]) + "	";
		}
		str += "\n";
	}

	return str;
}