#include "util.h"
#include "logic.h"

int main() {
	srand(time(0));

	int n;
	cout << "Enter size of the square matrix: ";
	cin >> n;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
	}

	int a, b;
	cout << "Enter range of matrix values: ";
	cin >> a >> b;
	init(matrix, n, a, b);

	cout << convert_to_string(matrix, n);

	cout << "Sum from main and additional diagonals: "
		<< get_sum_from_both_diagonals(matrix, n) << endl;

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	system("pause");
	return 0;
}