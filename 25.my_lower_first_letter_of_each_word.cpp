#include <iostream>
#include <string>
using namespace std;

string	ReadString(){
	string s1 = " ";
	cout << "Please enter string: ";
	getline(cin, s1);
	return (s1);
}

void	LowerFirstLetterOfEachWord(string str){
	bool	isFristLetter = true;
	for (size_t i = 0; i < str.length(); i++){
		if (isFristLetter && str[i] != ' '){
			if (str[i] >= 65 && str[i] <= 90)
			{
				str[i] += 32;
			}
		}
		cout << str[i];
		isFristLetter = (str[i] == ' ' ? true : false);
	}
	cout << "\n";
}


int main(){
	LowerFirstLetterOfEachWord(ReadString());

	return (0);
}
