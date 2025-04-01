#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int RandomNumbers(int From, int To){
	int randNum = 0;;
	randNum = rand() % (To - From + 1) + From;
	return (randNum);
}

void	FillMatrixWithRandomNumbers(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			matrix[i][j] = RandomNumbers(1, 10);
		}
	}
}

void	PrintMatrix(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			printf("%0*d   ", 2, matrix[i][j]);
		}
		printf("\n");
	}
}

int  SumOfMatrix(int matrix[3][3], short Rows, short Cols){
	int MatrixSum = 0;
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			MatrixSum += matrix[i][j];
		}
	}
	return (MatrixSum);
}

bool	AreEqualMatrices(int matrix1[3][3], int matrix2[3][3], short Rows, short Cols){
	return (SumOfMatrix(matrix1, Rows, Cols) == SumOfMatrix(matrix2, Rows, Cols));
}

int main(){
	srand((unsigned)time(NULL));

	int matrix1[3][3], matrix2[3][3];

	FillMatrixWithRandomNumbers(matrix1, 3, 3);
	cout << "Matrix1:\n";
	PrintMatrix(matrix1, 3, 3);

	FillMatrixWithRandomNumbers(matrix2, 3, 3);
	cout << "\nMatrix2:\n";
	PrintMatrix(matrix2, 3, 3);

	if (AreEqualMatrices(matrix1, matrix2, 3, 3)){
		cout << "\nYes: Matrices are equal\n";
	}
	else{
		cout << "\nNo: Matrices are not equal\n";
	}

	return (0);
}

