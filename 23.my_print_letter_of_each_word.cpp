#include <iostream>
#include <string>
using namespace std;

string ReadName(){
	string name = " ";
	cout << "Please Enter Name: ";
	getline(cin, name);
	return (name);
}

void	PrintLetterOfEachString(string name){
	bool	isFirstLetter = true;
	for (size_t i = 0; i < name.length(); i++){
		if (isFirstLetter && name[i] != ' '){
			cout << name[i] << "\n" << endl;
			isFirstLetter = false;
		}
		else if (name[i] == ' '){
			isFirstLetter = true;
		}
	}
}

int main(){
	string name = ReadName();

	PrintLetterOfEachString(name);
	cout << "\n";

	return (0);
}

