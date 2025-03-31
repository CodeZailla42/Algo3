#include <iostream>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To){
	int rnadNum = 0;
	rnadNum = rand() % (To - From + 1) + From;
	return (rnadNum);
}

void	FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void	PrintMatrix(int arr[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			printf("%0*d   ", 2, arr[i][j]);
		}
		printf("\n");
	}
}

void	PrintMiddleRowOfMatrix(int arr[3][3], short Rows, short Cols){
	short MiddleRow = Rows / 2;
	for (short j = 0; j < Cols; j++)
	{
		printf("%0*d   ", 2, arr[MiddleRow][j]);
	}
	cout << "\n";
}

void	PrintMiddleColOfMatrix(int arr[3][3], short Rows, short Cols){
	short MiddleCols = Cols / 2;
	for (short i = 0; i < Rows; i++)
	{
		printf("%0*d   ", 2, arr[i][MiddleCols]);
	}
	cout << "\n";
}

int main(){
	srand((unsigned)time(NULL));

	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "Print Matrix:\n";
	PrintMatrix(arr, 3, 3);

	cout << "\nPrint Middle Row Of Matrix:\n";
	PrintMiddleRowOfMatrix(arr, 3, 3);

	cout << "\nPrint Middle Columns Of Matrix:\n";
	PrintMiddleColOfMatrix(arr, 3, 3);

	return (0);
}
