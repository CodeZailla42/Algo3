#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To){
	int randNum = 0;
	randNum = rand() % (To - From + 1) + From;
	return (randNum);
}

void	FillMatrixWithRandomNUmbers(int arr[3][3], short Rows, int Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}


void	PrintMatrix(int arr[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			printf("%0*d    ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}


void	MultiplyMatrix1AndMatrix(int matrix1[3][3], int matrix2[3][3], int matrix3[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
		}
	}
}

int main(){
	srand((unsigned)time(NULL));

	int matrix1[3][3], matrix2[3][3], matrix3[3][3];

	FillMatrixWithRandomNUmbers(matrix1, 3, 3);
	cout << "Matrix1:\n";
	PrintMatrix(matrix1, 3, 3);

	FillMatrixWithRandomNUmbers(matrix2, 3, 3);
	cout << "\nMatrix2:\n";
	PrintMatrix(matrix2, 3, 3);
	
	MultiplyMatrix1AndMatrix(matrix1, matrix2, matrix3, 3, 3);
	cout << "Matrix2:\n";
	PrintMatrix(matrix3, 3, 3);
	
	

}
