#include <iostream>
#include <cstdio>
#include <ctime>


int RandomNumber(int From, int To)
{
	int randNum = 0;

	randNum = rand() % (To - From + 1) + From;

	return (randNum);
}

void	FillMatrix(int matrix[3][3]){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			matrix[i][j] = RandomNumber(1, 100);
		}
	}	
}

void	PrintMatrix(int matrix[3][3]){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%0*d ", 2, matrix[i][j]);
		}
		printf("\n");
	}
}


int main(){
	srand((unsigned)time(NULL));

	int matrix[3][3];

	FillMatrix(matrix);
	PrintMatrix(matrix);

	return (0);
}

