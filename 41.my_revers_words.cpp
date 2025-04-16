#include <iostream>
#include <string>
using namespace std;

string	ReversedString(string str){
	string reversed = "";
	string word = "";
	for (size_t i = 0; i < str.length(); i++){
		if (str[i] == ' '){
			if (reversed == ""){
				reversed = word;
			}
			else{
				reversed = word + " " + reversed;
			}
			word = "";
		}		
		else{
			word += str[i];
		}
	}
	//process the last word//
	if (reversed == ""){
		reversed = word;
	}
	else{
		reversed = word + " " + reversed;
	}
	return (reversed);
}

int main(){
	string str = "Hello World I Love Coding";

	cout << "Before reversed:\n";
	cout << str << endl;

	cout << "\nAfter reversed:\n";
	cout << ReversedString(str) << endl;

	return (0);
}
