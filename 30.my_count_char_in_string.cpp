#include <iostream>
#include <string>
using namespace std;

string ReadString(){
	string str = " ";
	cout << "Please enter you string:\n";
	getline(cin, str);
	return (str);
}

char ReadChar(){
	char Char = ' ';
	cout << "\nPlease enter a character to look for: ";
	cin >> Char;
	return (Char);
}

short	CountCharacterInString(string str, char Char){
	short Counter = 0;
	for (char c : str){
		if (c == Char){
			Counter++;
		}
	}
	return (Counter);
}

int main(){
	string str = ReadString();
	char Char = ReadChar();

	cout << "\nLetter '" << Char << "' count =  ";
	cout << CountCharacterInString(str, Char) << endl;

	return (0);
}
