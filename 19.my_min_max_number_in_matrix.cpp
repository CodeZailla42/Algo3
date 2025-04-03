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
			matrix[i][j] = RandomNumber(1, 99);
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

int	GetMinimumNumberInMatrix(int matrix[3][3], short Rows, short Cols){
	int min = matrix[0][0];
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			if (matrix[i][j] < min){
				min = matrix[i][j];
			}
		}
	}
	return (min);
}

int GetMaximumNumberInMatrix(int matrix[3][3], short Rows, short Cols){
	int max = matrix[0][0];
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			if (matrix[i][j] > max){
				max = matrix[i][j];
			}
		}
	}
	return (max);
}

int main(){
	srand((unsigned)time(NULL));

	int matrix[3][3];
	
	FillMatrixWithRandomNumbers(matrix, 3, 3);
	cout << "The following is 3x3 matrix:\n";
	PrintMatrix(matrix, 3, 3);
	
	cout << "\nThe minimum number in matrix: ";
	cout << GetMinimumNumberInMatrix(matrix, 3, 3) << endl;

	cout << "\nThe maximum numberin matrix: ";
	cout << GetMaximumNumberInMatrix(matrix, 3, 3) << endl;

	return (0);
}
