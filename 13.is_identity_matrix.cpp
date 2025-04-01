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

bool	IsIdentityMatrix(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			if (i == j && matrix[i][j] != 1){
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

	int matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
	
	cout << "Matrix1:\n";
	PrintMatrix(matrix, 3, 3);

	if (IsIdentityMatrix(matrix, 3, 3)){
	    cout << "\nYes: Idintity matrix" << endl;
	}
	else{
	    cout << "\nNo: it's not identity matrix" << endl;
	}
	
	return(0);	
}

