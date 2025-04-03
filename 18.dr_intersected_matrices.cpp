#include <iostream>
#include <iomanip>
using namespace std;

void	PrintMatrix(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			printf("%0*d   ", 2, matrix[i][j]);
		}
		printf("\n");
	}
}

bool	IsNumberInMatrix(int matrix[3][3], int Number, short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			if (matrix[i][j] == Number){
				return (true);
			}
		}
	}
	return (false);
}

void	PrintIntersectedNumbers(int matrix1[3][3], int matrix2[3][3], short Rows, short Cols){
	int Number = 0;
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			Number = matrix1[i][j];
			if (IsNumberInMatrix(matrix2, Number, Rows, Cols)){
				cout << setw(3) << Number << "    ";	
			}
		}
	}
	cout << "\n";
}

int main(){
	int matrix1[3][3] = {{77, 5, 12}, {22, 20, 1}, {1, 0, 9}};
	int matrix2[3][3] = {{5, 80, 90}, {22, 77, 1}, {10, 8, 33}};

	cout << "Matrix1:\n";
	PrintMatrix(matrix1, 3, 3);

	cout << "\nMatrix2:\n";
	PrintMatrix(matrix2, 3, 3);

	cout << "\nIntersected Numbers are:\n";
	PrintIntersectedNumbers(matrix1, matrix2, 3, 3);

	return (0);
}
