#include "util.h"
#include "logic.h"

int main() {
	srand(time(0));

	int n, m;
	cout << "Enter size of the matrix: ";
	cin >> n >> m;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}

	int a, b;
	cout << "Enter range of matrix values: ";
	cin >> a >> b;
	init(matrix, n, m, a, b);

	cout << convert_to_string(matrix, n, m);

	cout << "Arithmethical average of non-zero elements: "
		<< get_avg_non_zero_elements(matrix, n, m) << endl;

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	system("pause");
	return 0;
}