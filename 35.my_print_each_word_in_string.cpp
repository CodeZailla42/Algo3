#include <iostream>
#include <string>
using namespace std;

string ReadString(){
	string str = " ";
	cout << "Please enter your string:\n";
	getline(cin, str);
	return (str);
}

void	PrintEachWordInString(string str){
	cout << "\nYour string words are:\n";	
	for (char c : str)
	{
		bool isFirstLetter = true;

		if (isFirstLetter && c != ' ')
		{
			cout << c;
			isFirstLetter = false;
		}
		else if (c == ' ')
		{
			cout << "\n";
			isFirstLetter = true;
		}
	}
	cout << "\n";
}

int main(){
	PrintEachWordInString(ReadString());

	return (0);
}
