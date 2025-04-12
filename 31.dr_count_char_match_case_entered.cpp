#include <iostream>
#include <string>
using namespace std;

string ReadString(){
	string S1 = " ";
	cout << "Please enter your string:\n";
	getline(cin, S1);
	return (S1);
}

char ReadChar(){
	char Letter = ' ';
	cout << "\nPlease enter a letter to look for: ";
	cin >> Letter;
	return (Letter);
}

char InvertLetterCase(char Ch1){
	return (isupper(Ch1) ? tolower(Ch1) : toupper(Ch1));
}

short	CountLetters(string S1, char Letter, bool MatchCase = true){
	short Counter = 0;

	for (size_t i = 0; i < S1.length(); i++)
	{
		if (MatchCase)
		{
			if(S1[i] == Letter) 
				Counter++;
		}		
		else
		{
			if (tolower(S1[i]) == tolower(Letter))
				Counter++;
		}	
	}
	return (Counter);
}



int main(){
	string S1 = ReadString();
	char Ch1  = ReadChar();
	
	cout << "'\nLetter \'" << Ch1 << "\' Count = " << CountLetters(S1, Ch1) << endl;

	cout << "\nLetter \'" << Ch1 << "\' Or \'" << InvertLetterCase(Ch1) << "\' ";
	cout << "Count = " << CountLetters(S1, Ch1, false) << endl;

	return (0);
}
