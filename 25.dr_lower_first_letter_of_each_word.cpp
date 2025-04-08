#include <iostream>
#include <string>
using namespace std;

string ReadString(){
	string	s1 = " ";
	cout << "Please enter string: ";
	getline(cin, s1);
	return (s1);
}

string	LowerFirstLetterOfEachWord(string s1){
	bool	isFirsLetter = true;
	for (size_t i = 0; i < s1.length(); i++)
	{
		if (s1[i] != ' ' && isFirsLetter)
		{
			s1[i] = tolower(s1[i]);
		}
		isFirsLetter = (s1[i] == ' '? true : false);
	}
	return (s1);
}

int main(){
	string s1 = ReadString();

	cout << "\nThe string after conversion:\n";
	s1 = LowerFirstLetterOfEachWord(s1);
	cout << s1 << endl;

	return (0);
}
