#include <iostream>
#include <iomanip>
using namespace std;

void	FillMatrixWithOrderdNumbers(int matrix[3][3], short Rows, short Cols){
	short orderNumbers = 1;
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			matrix[i][j] = orderNumbers;
			orderNumbers++;
		}
	}
}

void	PrintMatrix(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			cout << setw(3) << matrix[i][j] << "   ";
		}
		cout << "\n";
	}
}

void	TransposedMatrix(int matrix[3][3], int transposeMatrix[3][3], short Rows, short Cols){
	for (short j = 0; j < Rows; j++){
		for (short i = 0; i < Cols; i++){
			transposeMatrix[i][j] = matrix[j][i];
		}
	}
}

int main(){
	int matrix[3][3];
	FillMatrixWithOrderdNumbers(matrix, 3, 3);

	cout << "\nThe following is a 3x3 ordered matrix:\n";
	PrintMatrix(matrix, 3, 3);

	int transposeMatrix[3][3];
	TransposedMatrix(matrix, transposeMatrix, 3, 3);

	cout << "\nThe following is the transpose of matrix:\n";
	PrintMatrix(transposeMatrix, 3, 3);

	return (0);
}


