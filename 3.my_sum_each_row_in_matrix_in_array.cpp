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
			matrix[i][j] = RandomNumber(1, 100);
		}
	}
}

void	PrintMatrixRows(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		cout << "Row " << i + 1 << ": ";
		for (short j = 0; j < Cols; j++){
			cout << setw(3) << matrix[i][j] << "  ";
		}
		cout << "\n";
	}
}

void	SumRowsInArray(int matrix[3][3], int arr[3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		arr[i] = 0;
		for (short j = 0; j < Cols; j++){
			arr[i] += matrix[i][j];						
		}
	}
}

void	PrintArray(int arr[], short Rows){
	for (short i = 0; i < Rows; i++){
		cout << arr[i] << " ";
	}
}

int main(){
	srand((unsigned)time(NULL));

	int matrix[3][3];
	FillMatrixWithRandomNumbers(matrix, 3, 3);

	cout << "\nThe Following are 3x3 matrix rows:\n";
	PrintMatrixRows(matrix, 3, 3);

	int arr[3];
	SumRowsInArray(matrix, arr, 3, 3);

	cout << "\nThe Sum of the rows in the array:\n";
	PrintArray(arr, 3);

	return (0);
}
