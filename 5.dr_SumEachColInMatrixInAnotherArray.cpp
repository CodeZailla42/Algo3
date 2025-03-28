#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To){
	int randNum = 0;
	randNum = rand() % (To - From + 1) + From;
	return (randNum);
}

void	FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << "\n";
	}
}

int ColSum(int arr[3][3], short Rows, short ColNumber){
	int Sum = 0;
	for (int i = 0; i < Rows; i++){
		Sum += arr[i][ColNumber];
	}
	return (Sum);
}

void	SumColsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols){
	for (int j = 0; j < Cols; j++)
	{
		arrSum[j] = ColSum(arr, Rows, j);
	}
}

void	PrintArray(int arrSum[3], short ColNumber){
	for (short i = 0; i < ColNumber; i++){
		cout << "Col " << i + 1 << " Sum = " << arrSum[i] << endl;
	}
}

int main(){
	srand((unsigned)time(NULL));

	int arr[3][3]; int arrSum[3];
	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "The following is a 3x3 matrix:\n";
	PrintMatrix(arr, 3, 3);

	SumColsInArray(arr, arrSum, 3, 3);

	cout << "\nThe sum of the columns in Array:\n";
	PrintArray(arrSum, 3);

	return (0);
}
