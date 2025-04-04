#include <iostream>
#include <iomanip>

using namespace std;


void	PrintMatrix(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
			cout << setw(3) << matrix[i][j] << "   ";			
		}
		cout << "\n";
	}
}

bool	IsPalindromeMatrix(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++){
				if ((matrix[i - 1 + 1][0]) != (matrix[i - 1 + 1][2])){
					return (false);
			}
		}
	}
	return (true);
}


int main(){
	int matrix1[3][3] = {{1, 2, 1}, {5, 5, 5}, {7, 3, 7}};
	int matrix2[3][3] = {{1, 2, 1}, {5, 5, 5}, {7, 3, 8}};

	cout << "Matrix1:\n";
	PrintMatrix(matrix1, 3, 3);

	if (IsPalindromeMatrix(matrix1, 3, 3)){
		cout << "\nIt's Palindrome matrix!" << endl;
	}
	else{
		cout << "\nNo it's not Palindrome matrix!" << endl;
	}

	cout << "\nMatrix2:\n";
	PrintMatrix(matrix2, 3, 3);

	if (IsPalindromeMatrix(matrix2, 3, 3)){
		cout << "\nIt's Palindrome matrix!" << endl;
	}
	else{
		cout << "\nNo it's not Palindrome matrix!" << endl;
	}

}
