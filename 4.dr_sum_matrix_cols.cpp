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

int SumCol(int arr[3][3], short Rows, short ColNumber){
	int Sum = 0;
	for (short i = 0; i < Rows; i++){
		Sum += arr[i][ColNumber];
	}
	return (Sum);
}

void	SumColumnsMatrix(int arr[3][3], short Rows, short Cols){
	for (short j = 0; j < Cols; j++)
	{
		cout << "Col " << j + 1 << " Sum = " << SumCol(arr, Rows, j) << endl;
	}
}


int main(){
	srand((unsigned)time(NULL));

	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);
	
	cout << "The following is a 3x3 matrix:\n";
	PrintMatrix(arr, 3, 3);

	cout << "\nThe following is columns sum:\n";
	SumColumnsMatrix(arr, 3, 3);

	return (0);
}



