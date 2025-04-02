#include <iostream>
#include <ctime>
using namespace std;

short ReadNumber(){
	short Number = 0;
	cout << "\nPleas enter number to look for? ";
	cin >> Number;
	return (Number);
}

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

bool	IsNumberExist(int matrix[3][3], short Rows, short Cols){
	short Number = ReadNumber();
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			if (matrix[i][j] ==  Number){
				return (true);
			}
		}
	}
	return (false);
}

int main(){
	srand((unsigned)time(NULL));
	
	int matrix[3][3];
	FillMatrixWithRandomNumbers(matrix, 3, 3);

	cout << "The following is a 3x3 matrix:\n";
	PrintMatrix(matrix, 3, 3);

	if (IsNumberExist(matrix, 3, 3)){
		cout << "\nYes it is there" << endl;
	}
	else{
		cout << "\nNo it's not there" << endl;
	}

	return (0);
}
