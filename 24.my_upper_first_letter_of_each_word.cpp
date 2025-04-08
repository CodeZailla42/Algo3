#include <iostream>
#include <string>
using namespace std;

string ReadString(){
	string s1 = " ";
	cout << "Please enter string: ";
	getline(cin, s1);
	return (s1);
}

void	PrintFirstEachLetterOfString(string s1){
	bool isFirstLetter = true;
	for (size_t i = 0; i < s1.length(); i++){
		if (s1[i] != ' ' && isFirstLetter){
			if (s1[i] >= 'a' && s1[i] <= 'z')
			{
				s1[i] -= 32;
			}
			//cout << s1[i] << endl;
		}
		cout << s1[i];
		isFirstLetter = (s1[i] == ' '? true : false);
	}
	cout << "\n";
}

int main(){
	PrintFirstEachLetterOfString(ReadString());

	return (0);
}
