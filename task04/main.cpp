#include "util.h"
#include "logic.h"

int main() {
	srand(time(0));

	int n, m;
	cout << "Enter size of the square matrix: ";
	cin >> n >> m;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
	}

	int a, b;
	cout << "Enter range of matrix values: ";
	cin >> a >> b;
	init(matrix, n, m, a, b);

	cout << convert_to_string(matrix, n, m);

	cout << "Amount of lines where positive elements are more: "
		<< get_sum_from_columns_with_extreme_elements(matrix, n, m) << endl;

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	system("pause");
	return 0;
}