#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


void	FillMatrixWithOrderedNumbers(int matrix[3][3], short Rows, short Cols){
	int order = 1;
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			matrix[i][j] = order;
			order++;
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

int main(){
	int matrix[3][3];

	FillMatrixWithOrderedNumbers(matrix, 3, 3);
	cout << "\nThe following is a 3x3 ordered matrix:\n";
	PrintMatrix(matrix, 3, 3);

	return (0);
}

