#include <iostream>
#include <string>
using namespace std;

enum enWhatToCount {SmallLetters = 0, CapitalLetters = 1, All = 2};

string ReadString(){
	string S1 = " ";
	cout << "Please enter your string:\n";
	getline(cin, S1);
	return (S1);
}

short	CountLetters(string S1, enWhatToCount WhatToCount = All){
	if (WhatToCount == enWhatToCount::All){
		return S1.length();
	}

	short Count = 0;
	for (char c : S1){
		if (WhatToCount == enWhatToCount::SmallLetters && islower(c)){
			Count++;
		}
		else if(WhatToCount == enWhatToCount::CapitalLetters && isupper(c)){
			Count++;
		}
	}
	return (Count);
}

int main(){
	string S1 = ReadString();

	cout << "\nString Length = " << CountLetters(S1) << endl;
	cout << "Capital Letters = " << CountLetters(S1, CapitalLetters) << endl;
	cout << "Small Letters   = " << CountLetters(S1, SmallLetters) << endl;

	return (0);
}
