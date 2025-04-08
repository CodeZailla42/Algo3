#include <iostream>
#include <string>
using namespace std;

string ReadString(){
	string s1 = " ";
	cout << "Please enter string: ";
	getline(cin, s1);
	return (s1);
}

string	UpperFirstLetterOfEachWord(string s1){
	bool isFirstLetter = true;
	for (size_t i = 0; i < s1.length(); i++){
		if (s1[i] != ' ' && isFirstLetter){
			s1[i] = toupper(s1[i]);
		}
		isFirstLetter = (s1[i] == ' '? true : false);
	}
	return (s1);
}

int main(){
	string s1 = ReadString();

	cout << "\nString after conversion:\n" << endl;
	s1 = UpperFirstLetterOfEachWord(s1);
	cout << s1 << endl;

	return (0);
}
