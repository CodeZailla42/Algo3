#include <iostream>
#include <string>
using namespace std;

string	ReadString(){
	string str = " ";
	cout << "Please enter your string:\n";
	getline(cin, str);
	return (str);
}

size_t	StringLength(string str){
	return (str.length());
}

void	CountCapitalAndSmallLetters(string str){
	int small = 0, capital = 0;
	for (size_t i = 0; i < str.length(); i++){
		if (isalpha(str[i]))
		{
			isupper(str[i]) ? capital++ : small++;
		}
	}
	cout << "\nSmall Letter    = " << small << endl;
	cout << "\nCapital Letters = " << capital << endl;
}


int main(){
	string str = ReadString();
	cout << "\nString Length = " << StringLength(str) << endl;
	CountCapitalAndSmallLetters(str);

	return (0);
}
