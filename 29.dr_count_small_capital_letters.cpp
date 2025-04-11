#include <iostream>
#include <string>
using namespace std;

string ReadString(){
	string S1 = " ";
	cout << "Please enter your string:\n";
	getline(cin, S1);
	return (S1);
}

short	CountSmallLetters(string S1){
	short Count = 0;
	for (size_t i = 0; i < S1.length(); i++){
		if (islower(S1[i]))
		{
			Count++;
		}
	}
	return (Count);
}

short CountCapitalLetters(string S1){
	short Count = 0;
	for (size_t i = 0; i < S1.length(); i++){
		if (isupper(S1[i])){
			Count++;
		}
	}
	return (Count);
}

int main(){
	string S1 = ReadString();
	cout << "\nString length   = " << S1.length() << endl;
	cout << "\nCapital Letters = " << CountCapitalLetters(S1) << endl;
	cout << "\nSmall Letters   = " << CountSmallLetters(S1) << endl;

	return (0);
}
