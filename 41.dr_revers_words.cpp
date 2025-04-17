#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ReadString(){
	string S1 = "";
	cout << "Please enter your string:\n";
	getline(cin, S1);
	return (S1);
}

vector<string> SplitStrign(string S1, string Delim){
	vector<string> vString;
	size_t pos = 0;
	string sWord = "";
	while ((pos = S1.find(Delim)) != std::string::npos){
		sWord = S1.substr(0, pos);
		if (sWord != " "){
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != " "){
		vString.push_back(S1);
	}
	return (vString);
}

string	ReverseWordsInString(string S1){
	vector<string> vString;
	string S2 = "";
	vString = SplitStrign(S1, " ");
	
	//Declare iterator//
	vector<string>::iterator iter = vString.end();
	while (iter != vString.begin()){
		--iter;
		S2 = S2 + *iter + " ";
	}
	S2.substr(0, S2.length() - 1); //remove the last space//
	return (S2);
}

int main(){
	string S1 = ReadString();
	cout << "\nThe string before reversed:\n";
	cout << S1 << endl;

	cout << "\nThe string after reversed:\n";
	cout << ReverseWordsInString(S1) << endl;
}

