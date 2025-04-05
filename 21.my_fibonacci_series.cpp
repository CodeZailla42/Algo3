#include <iostream>
using namespace std;


void	FibonacciSeries(int Number){
	int v1 = 1;
	int v2 = 1;
	int v3 = 0;

	cout << v1 << "  " << v2 << "  ";

	for (int  i = 2; i < Number; i++){
		v3 = v1 + v2;
		cout << v3 << "  ";
		v1 = (v3 - v2) + (v2 - v1);//formula for putting the value of v2 in v1;
		v2 = v3;
	}
	cout << "\n";
}

int main(){
	FibonacciSeries(10);

	return (0);
}
