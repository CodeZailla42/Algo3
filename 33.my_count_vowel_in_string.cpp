#include <iostream>
#include <string>
using namespace std;

string ReadString(){
	string str = " ";
	cout << "Please enter you string:\n";
	getline(cin, str);
	return (str);
}

bool	IsVowelLetter(char Ch1){
	Ch1 = tolower(Ch1);
	return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

short CountVowelInString(string str){
	short Counter = 0;
	for (char c : str){
		if (IsVowelLetter(c))
			Counter++;
	}
	return (Counter);
}

int main(){
	string str = ReadString();
	cout << "\nNumber of vowel is = " << CountVowelInString(str) << endl;

	return (0);
}
