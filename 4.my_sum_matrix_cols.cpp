#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;



int RandomNumber(int From, int To) {
	int randNum = 0;
	randNum = rand() % (To - From + 1) + From;
	return (randNum);
}

void    FillMatrixWithRandomNumbers(int matrix[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			matrix[i][j] = RandomNumber(1, 100);
		}
	}
}

void    PrintMatrix(int matrix[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			cout << setw(3) << matrix[i][j] << "   ";
		}
		cout << "\n";
	}
}

void    PrintCols(int matrix[3][3], short Rows, short Cols) {
	for (int j = 0; j < Cols; j++) {
		cout << "Column " << j + 1 << ":\n";
		for (int i = 0; i < Rows; i++) {
			cout << setw(3) << matrix[i][j] << "\n";
		}
		cout << "\n";
	}
}

void    SumColumns(int matrix[3][3], short Rows, short Cols) {
	for (int j = 0; j < Cols; j++) {
		int Sum = 0;
		for (int i = 0; i < Rows; i++) {
			Sum += matrix[i][j];
		}
		cout << "Sum Col " << j + 1 << " = " << Sum << endl;
	}
}

int main() {
	srand((unsigned)time(NULL));

	int matrix[3][3];
	FillMatrixWithRandomNumbers(matrix, 3, 3);

	cout << "\nThis is the following a 3x3 matrix:\n";
	PrintMatrix(matrix, 3, 3);

	cout << "\nThe Columns are:\n\n";
	PrintCols(matrix, 3, 3);

	SumColumns(matrix, 3, 3);

	return (0);
}

