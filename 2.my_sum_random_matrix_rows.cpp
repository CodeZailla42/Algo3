#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To){
		int randNum = 0;

		randNum = rand() % (To - From + 1) + From;

		return (randNum);
}

void	FillMatrixWithRandomNumbers(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			matrix[i][j] = RandomNumber(1, 100);
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

void	SumRows(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		int Sum = 0;
		for (short j = 0; j < Cols; j++){
			Sum = Sum + matrix[i][j];
		}
		cout << "Row Sum " << i + 1 << " = " << Sum << endl;
	}
}

int main(){
	srand((unsigned)time(NULL));
	
	int matrix[3][3];
	FillMatrixWithRandomNumbers(matrix, 3, 3);
	cout << "\nThe Following is a 3x3 matrix:\n";
	PrintMatrix(matrix, 3, 3);
	cout << "\nThe Row Sums:\n";
	SumRows(matrix, 3, 3);


	return (0);
}
