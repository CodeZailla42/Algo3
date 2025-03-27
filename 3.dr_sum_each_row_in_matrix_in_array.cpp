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

void	PrintMatrix(int arr[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << "\n";
	}
}

int RowSum(int arr[3][3], short RowNumber, short Cols){
	int Sum = 0;
	for (int j = 0; j < Cols; j++)
	{
		Sum += arr[RowNumber][j];
	}

	return (Sum);
}

void	SumMatrixRowsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++)
	{
		arrSum[i] = RowSum(arr, i, Cols);
	}
}

void	PrintRowsSumArray(int arrSum[3], short Rows){
	cout << "\nThe following are the sum of each row in matrix:\n";
	for (short i = 0; i < Rows; i++){
		cout << "\nRow " << i + 1 << " Sum = " << arrSum[i] << endl;
	}
}

int main(){
	srand((unsigned)time(NULL));


	int arr[3][3];
	int arrSum[3];
	FillMatrixWithRandomNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
	SumMatrixRowsInArray(arr, arrSum, 3, 3);
	PrintRowsSumArray(arrSum, 3);

	return (0);
}

