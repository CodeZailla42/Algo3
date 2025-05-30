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
	cout << "\n";
}

bool IsPalindrome(int matrix[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols / 2; j++){
			if (matrix[i][j] != matrix[i][Cols - 1 - j]){
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

	if (IsPalindrome(matrix1, 3, 3)){
		cout << "Yes: is palindrome matrix!\n" << endl;
	}
	else{
		cout << "No: it's not palindrome matrix!\n" << endl;
	}

	cout << "\nMatrix2:\n";
	PrintMatrix(matrix2, 3, 3);

	if (IsPalindrome(matrix2, 3, 3)){
		cout << "Yes: it's palindrome matrix!\n" << endl;
	}
	else{
		cout << "No: it's not palindrome matrix!\n" << endl;
	}

	return (0);
}
