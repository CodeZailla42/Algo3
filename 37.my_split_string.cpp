#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ReadString(){
	string str = "";
	cout << "Please enter your string:\n";
	getline(cin, str);
	return (str);
}

void	SplitEachWordInString(string str, vector<string>& vWord){
	string delim = " ";
	size_t pos = 0;
	string sWord = "";
	while ((pos = str.find(delim)) != std::string::npos){
			sWord = str.substr(0, pos);
			if (sWord != " "){
			vWord.push_back(sWord);
		}
		str.erase(0, pos + delim.length());
	}
	if (str != " "){
		vWord.push_back(str);
	}
}


int main(){
	string str = ReadString();
	vector<string> vWord;
	SplitEachWordInString(str, vWord);
	
	cout << "\nString  words are:\n\n";
	for (const string &word : vWord){
		cout << word << endl;
	}

	return (0);
}

