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
	cout << "\nPlease enter letter to look for: ";
	cin >> Letter;
	return (Letter);
}

short CountLetter(string S1, char Letter){
	short Counter = 0;
	for (size_t i = 0; i < S1.length(); i++){
		if (S1[i] == Letter){
			Counter++;
		}
	}
	return (Counter);
}

int main(){
	string S1 = ReadString();
	char Letter = ReadChar();

	cout << "\nLetter '" << Letter << "' Count = ";
	cout << CountLetter(S1, Letter) << endl;

	return (0);
}


