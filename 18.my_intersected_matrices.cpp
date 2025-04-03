#include <iostream>
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
			matrix[i][j] = RandomNumber(1, 99);
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

void	CheckIntersectedNumbers(int matrix1[3][3], int matrix2[3][3], short Rows, short Cols){
	bool printed[100] = {false};

	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			int Number = matrix1[i][j];
			if (!printed[Number] && IsNumberInMatrix(matrix2, Number, Rows, Cols)){
				cout << Number << "   ";
				printed[Number] = true;
			}
		}
	}
	cout << "\n";
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

	cout << "\nIntersected Numbers:\n";
	CheckIntersectedNumbers(matrix1, matrix2, 3, 3);
	
	

	return (0);
}
