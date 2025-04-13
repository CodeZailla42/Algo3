#include <iostream>
#include <string>
using namespace std;

string ReadString(){
	string str = " ";
	cout << "Please enter you string:\n";
	getline(cin, str);
	return (str);
}

bool	IsVowel(char Ch1){
	Ch1 = tolower(Ch1);
	return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

void	PrintVowelLetters(string str){
	for (char c : str){
		if (IsVowel(c)){
			cout << c << "   ";
		}
	}
	cout << "\n";
}


int main(){
	string str = ReadString();

	cout << "\nVowels in string are: ";
	PrintVowelLetters(str);
}

