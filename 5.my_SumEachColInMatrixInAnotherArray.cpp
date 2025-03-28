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

void	PrintMatrix(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			cout << setw(3) << matrix[i][j] << "   ";
		}
		cout << "\n";
	}
}

void	SumMatrixColsInArray(int matrix[3][3], int arr[3], short Rows, short Cols){
	for (int j = 0; j < Cols; j++){
		arr[j] = 0;
		for (int i = 0; i < Rows; i++){
			arr[j] += matrix[i][j];
		}
	}
}

void	PrintArray(int arr[3], short length){
	for (int i = 0; i < length; i++){
		cout << "Col " << i+ 1 << " Sum = " << arr[i] << endl;
	}
}

int main(){
	srand((unsigned)time(NULL));

	int matrix[3][3];
	FillMatrixWithRandomNumbers(matrix, 3, 3);

	cout << "The Follwoing is the a 3x3 matrix:\n";
	PrintMatrix(matrix, 3, 3);

	int arr[3];
	SumMatrixColsInArray(matrix, arr, 3, 3);

	cout << "\nThe sum of the matrix in array:\n";
	PrintArray(arr, 3);


}

