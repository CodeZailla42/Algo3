#include <iostream>
#include <string>
using namespace std;

string	ReadString(){
	string S1 = " ";
	cout << "Please enter your string:\n";
	getline(cin, S1);
	return (S1);
}

short 	CountEachWordInString(string S1){
	cout << "\nNumber of words in the string = ";
	string delim = " ";
	short Counter = 0;
	size_t pos = 0;
	string sWord = " ";
	while ((pos = S1.find(delim)) != std::string::npos){
		sWord = S1.substr(0, pos);
		if (sWord != " "){
			Counter++;
		}
		S1.erase(0, pos + delim.length());
	}
	if (S1 != " "){
		Counter++;
	}
	return (Counter);
}

int main(){
	cout << CountEachWordInString(ReadString()) << endl;	

	return (0);
}
