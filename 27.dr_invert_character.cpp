#include <iostream>
#include <string>
using namespace std;

char ReadChar(){
	char Char1 = ' ';
	cout << "Please enter a character:\n";
	cin >> Char1;
	return(Char1);
}

char InvertLetterCase(char Char1){
	return (isupper(Char1) ? tolower(Char1) : toupper(Char1));
}


int main(){
	char Char1 = ReadChar();

	cout << "Character after invert:\n";
	Char1 = InvertLetterCase(Char1);
	cout << Char1 << endl;

	return (0);
}
