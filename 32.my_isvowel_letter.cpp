#include <iostream>
#include <string>
using namespace std;

char ReadChar(){
	char Ch1 = ' ';
	cout << "Pleas enter a letter: ";
	cin >> Ch1;
	return (Ch1);
}

bool	IsVowelLetter(char Ch1){
	Ch1 = tolower(Ch1);
	return (Ch1 == 'a' || Ch1 == 'e' || Ch1 == 'i' || Ch1 == 'o' || Ch1 == 'u');
}

int main(){
	char Ch1 = ReadChar();

	if (IsVowelLetter(Ch1))
	{
		cout << "\nYes: Letter \'" << Ch1 << "\' is a vowel" << endl;
	}
	else
	{
		cout << "\nNo: Letter \'" << Ch1 << "\' is not a vowel" << endl;
	}

	return (0);
}
