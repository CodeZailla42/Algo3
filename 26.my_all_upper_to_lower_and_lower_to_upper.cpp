#include <iostream>
#include <string>
using namespace std;

string ReadString(){
	string str = " ";
	cout << "Please enter a string: ";
	getline(cin, str);
	return (str);
}

void	AllLettersToUpper(string str)
{
	for (size_t i = 0; i < str.length(); i++){
		if (str[i] >= 97 && str[i] <= 122){
			str[i] -= 32;
		}
		cout << str[i];
	}
	cout << "\n";
}

void	AllLettersToLower(string str)
{
	for (size_t i = 0; i < str.length(); i++){
		if (str[i] >= 65 && str[i] <= 90){
			str[i] += 32;
		}
		cout << str[i];
	}
	cout << "\n";
}


int main(){
	cout << "\nConvert All Letters to Upper Case:\n";
	AllLettersToUpper(ReadString());

	cout << "\nConverst All Letters to Lower Case:\n";
	AllLettersToLower(ReadString());

	return (0);
}
