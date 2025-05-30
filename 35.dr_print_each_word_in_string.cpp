#include <iostream>
#include <string>
using namespace std;

string ReadString(){
	string S1 = " ";
	cout << "Please enter your string:\n";
	getline(cin, S1);
	return (S1);
}

void	PrintEachWordInString(string S1){
	string delim = " ";
	cout << "\nString words are:\n\n";
	size_t pos = 0;
	string sWord = " ";
	while ((pos = S1.find(delim)) != std::string::npos){
		sWord = S1.substr(0, pos);
		if (sWord != " "){
			cout << sWord << endl;
		}
		S1.erase(0, pos + delim.length());
	}
	if (S1 != " "){
		cout << S1 << endl;
	}
}


int main(){
	PrintEachWordInString(ReadString());

	return (0);
}
