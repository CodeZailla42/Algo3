#include <iostream>
using namespace std;


string ReadString(){
	string str = " ";
	cout << "Please enter your strint:\n";
	getline(cin, str);
	return(str);
}

char ReadChar(){
	char Char = ' ';
	cout << "\nPlease enter a character to look for: ";
	cin >> Char;
	return (Char);
}

char InverCharacter(char Char){
	return (isupper(Char) ? tolower(Char) : toupper(Char));
}

short CountCharacterInString(string str, char Char, bool MatchCase = true){
	short Counter = 0; 
	for (size_t i = 0; i < str.length(); i++)
	{
		if (MatchCase)
		{
			if (str[i] == Char)
				Counter++;
		}
		else
		{
			if(tolower(str[i]) == tolower(Char))
				Counter++;
		}		
	}
	return (Counter);
}

int main(){
	string str = ReadString();
	char Char = ReadChar();

	cout << "\nLetter \'" << Char << "\' Count = " << CountCharacterInString(str, Char) << endl;
	
	cout << "\nLetter \'" << Char << "\' Or \'" << InverCharacter(Char) << "\' ";
	cout << "Count = " << CountCharacterInString(str, Char, false) << endl;

	return (0);
}
