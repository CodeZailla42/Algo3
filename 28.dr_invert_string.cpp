#include <iostream>
#include <string>
using namespace std;

string ReadString(){
	string S1 = " ";
	cout << "Please enter you string:" << endl;
	getline(cin, S1);
	return (S1);
}

char IvertLetterCase(char Char){
	return isupper(Char) ? tolower(Char) : toupper(Char);
}

string InvertingAllStringLettersCase(string S1){
	for (size_t i = 0; i < S1.length(); i++){
		S1[i] = IvertLetterCase(S1[i]);
	}
	return (S1);
}

int main(){
	string S1 = ReadString();

	cout << "\nString after Inverting All Letters Case:" << endl;
	S1 = InvertingAllStringLettersCase(S1);
	cout << S1 << endl;

	return (0);
}
