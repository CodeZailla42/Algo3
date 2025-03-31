#include <iostream>
#include <iomanip>
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
			cout << setw(3) << matrix[i][j] << "   ";
		}
		cout << "\n";
	}
}

void	PrintRows(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (int j = 0; j < Cols; j++){
			if (i == 1){
				cout << matrix[i][j] << "   ";
			}
		}
	}
	cout << "\n";
}

void	PrintCols(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (int j = 0; j < Cols; j++){
			if (j == 1){
				cout << matrix[i][j] << "   \n";
			}
		}
	}
}

int main(){
	srand((unsigned)time(NULL));

	int matrix[3][3];
	FillMatrixWithRandomNumbers(matrix, 3, 3);

	cout << "The following is 3x3 matrix:\n";
	PrintMatrix(matrix, 3, 3);

	cout << "\nPrint Rows:\n";
	PrintRows(matrix, 3, 3);

	cout << "\nPrint Cols:\n";
	PrintCols(matrix, 3, 3);

	return (0);
}

