#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To){
	int randNum = 0;
	randNum = rand() % (To - From + 1) + From;
	return (randNum);
}

void	FillMatrixWithRandomNumbers(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			matrix[i][j] = RandomNumber(1, 10);			
		}
	}
}

void	PrintMatrix(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			printf("%0*d    ", 2, matrix[i][j]);
		}
		printf("\n");
	}
}

int 	SumTheMatrix(int matrix[3][3], short Rows, short Cols){
	int MatrixSum = 0;
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			MatrixSum += matrix[i][j];	
		}
	}
	return (MatrixSum);
}

int main(){
	srand((unsigned)time(NULL));

	int matrix[3][3];
	FillMatrixWithRandomNumbers(matrix, 3, 3);

	cout << "The following is a 3x3 matrix:\n";
	PrintMatrix(matrix, 3, 3);

	cout << "\nThe Matrix Sum = " << SumTheMatrix(matrix, 3, 3) << endl;

	return (0);
}
