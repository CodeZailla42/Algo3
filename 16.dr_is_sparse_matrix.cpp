#include <iostream>
using namespace std;


void	PrintMatrix(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			printf("%0*d   ", 2, matrix[i][j]);
		}
		printf("\n");
	}
}

short CountNumberInMatrix(int matrix[3][3], short Number, short Rows, short Cols){
	short CountNumber = 0;
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			if (matrix[i][j] == Number){
				CountNumber++;
			}
		}
	}
	return (CountNumber);
}

bool	IsSpareMatrix(int matrix[3][3], short Rows, short Cols){
	short MatrixZise = Rows * Cols;

	return(CountNumberInMatrix(matrix, 0, 3, 3) > (MatrixZise / 2));
}

int main(){
	int matrix[3][3] = {{0, 3, 9}, {0, 0, 5}, {0, 0, 1}};
	PrintMatrix(matrix, 3, 3);

	if (IsSpareMatrix(matrix, 3, 3)){
		cout << "\nYes: it's sparse matrix" << endl;
	}
	else{
		cout << "\nNo: it's not sparse matrix" << endl;
	}

	return (0);
}


