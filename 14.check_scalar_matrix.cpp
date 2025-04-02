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

int IsScalarMatrix(int matrix[3][3], short Rows, short Cols){

	int FirstDiagonal = matrix[0][0];

	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			if (i == j && matrix[i][j] != FirstDiagonal){
				return (false);
			}
			else if (i != j && matrix[i][j] != 0){
				return (false);
			}
		}
	}
	return (true);
}

int main(){
	int matrix[3][3] = {{9, 0, 0}, {0, 9, 0}, {0, 0, 9}};
	PrintMatrix(matrix, 3, 3);

	if (IsScalarMatrix(matrix, 3, 3)){
		cout << "\nYes: It is scalar matrix" << endl;
	}
	else{
		cout << "\nNo: It is not scalar matrix" << endl;
	}

	return (0);
}
