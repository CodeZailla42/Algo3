#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


int RandomNumber(int From, int To){
	int randNum = 0;
	randNum = rand() % (To - From + 1) + From;
	return (randNum);
}

void	FillMatrix1WithRandomNumbers(int matrix1[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			matrix1[i][j] = RandomNumber(1, 10);
		}
	}
}


void	FillMatrix2WithRandomNumbers(int matrix2[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			matrix2[i][j] = RandomNumber(1, 10);
		}
	}
}

void	MultiplyMatrix1AndMatrix2InMatrix3(int matrix1[3][3], int matrix2[3][3], int matrix3[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
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

int main(){
	int matrix1[3][3]; int  matrix2[3][3]; 
  int	matrix3[3][3];

	FillMatrix1WithRandomNumbers(matrix1, 3, 3);
	FillMatrix2WithRandomNumbers(matrix2, 3, 3);
	MultiplyMatrix1AndMatrix2InMatrix3(matrix1, matrix2, matrix3, 3, 3);

	cout << "The following is a 3x3 matrix1:\n";
	PrintMatrix(matrix1, 3, 3);


	cout << "\nThe following is a 3x3 matrix2:\n";
	PrintMatrix(matrix2, 3, 3);

	cout << "\nThe following is the multiplication of Tow  3x3 matrix:\n";
	PrintMatrix(matrix3, 3, 3);


	

}
