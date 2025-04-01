#include <iostream>
#include <ctime>
using namespace std;

int RandomNumbers(int From, int To){
	int randNum = 0;
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

bool	AreTypicalMatrices(int matrix1[3][3], int matrix2[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			if (matrix1[i][j] != matrix2[i][j])	{
				return (false);
			}
		}
	}
	return (true);
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

	if (AreTypicalMatrices(matrix1, matrix2, 3, 3)){
		cout << "\nYes: matrices are typical\n";
	}
	else{
		cout << "\nNo: matrices are not typical\n";
	}

	return (0);
}
