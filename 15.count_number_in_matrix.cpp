#include <iostream>
#include <ctime>
using namespace std;

int  ReadNumber(){
	int  Number = 0;
	cout << "\nEnter number you want to count? ";
	cin >> Number;
	return (Number);
}

int RandomNumber(int From, int To){
	int randNum = 0;
	randNum = rand() % (To - From + 1) +  From;
	return (randNum);
}

void	FillMatrixWithRandomNumbers(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			matrix[i][j] = RandomNumber(1, 10);
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

int	CountNumber(int matrix[3][3], short Number, short Rows, short Cols){
	int  Counter = 0;
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			if (Number == matrix[i][j]){
				Counter++;
			}
		}
	}
	return (Counter);
}

int main(){
	srand((unsigned)time(NULL));
	
	int matrix[3][3];
	FillMatrixWithRandomNumbers(matrix, 3, 3);

	cout << "The following is a 3x3 matrix:\n";
	PrintMatrix(matrix, 3, 3);

	int Number = ReadNumber();
	
	cout << "\nNumber " << Number << " count in matrix ";
	cout << CountNumber(matrix, Number, 3, 3)<< " time/s" << endl; 

	return (0);
}
