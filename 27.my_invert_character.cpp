#include <iostream>
#include <string>
using namespace std;

char ReadCharacter(){
	char a = ' ';
	cout << "Please enter a character:" << endl;
	cin >> a;
	return (a);
}

void	InvertCharacter(char a){
	if (a >= 65 && a <= 90){
		a += 32;
	}
	else{
		a -= 32;
	}
	cout << "Character after inverting:" << endl;
	cout << a << endl;
}

int main(){
	InvertCharacter(ReadCharacter());

	return (0);
}


