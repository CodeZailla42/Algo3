#include <iostream>
using namespace std;


void	PrintFibonacciNumber(short Number, int Prev1, int Prev2){
	int FibNumber = 0;

	if (Number > 0)
	{
		FibNumber = Prev2 + Prev1;
		Prev2 = Prev1;
		Prev1 = FibNumber;
		cout << FibNumber << "   ";
		PrintFibonacciNumber(Number - 1, Prev1, Prev2);
	}
}


int main(){
	PrintFibonacciNumber(10, 0, 1);

	cout << "\n";

	return (0);
}


