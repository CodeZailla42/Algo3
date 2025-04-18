#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector<string> SplitString(string S1, string Delim){
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

string JoinString(vector<string> vString, string Delim){
	string S1 = "";
	for (string &s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return (S1.substr(0, S1.length() - Delim.length()));
}

string LowerAllString(string S1){
	for (size_t i = 0; i < S1.length(); i++){
		S1[i] = tolower(S1[i]);
	}
	return (S1);
}

string rPunct(string s){
	while (!s.empty() && ispunct(s.back()))
		s.pop_back();
	return (s);
}

string ReplaceWordInStringUsingSplitFunction(string S1, string StringToReplace, string sReplaceTo, bool MatchCase = true){
	vector<string> vString = SplitString(S1, " ");

	for (string &s : vString)
	{
		string withoutPunct = rPunct(s);
		if (MatchCase)
		{
			if (withoutPunct == StringToReplace)
				s = sReplaceTo + s.substr(withoutPunct.length());
		}
		else
		{
			if (LowerAllString(withoutPunct) == LowerAllString(StringToReplace))
				s = sReplaceTo + s.substr(withoutPunct.length());
		}
	}
	return (JoinString(vString, " "));
}

int main(){
	string S1 = "Welcome to Jordan, Jordan is a nice coutnry";
	string StringToReplace = "jordan";
	string sReplaceTo = "USA";
	
	cout << "Original String:\n" << S1 << endl;

	cout << "\nReplace word with match cases:\n";
	cout << ReplaceWordInStringUsingSplitFunction(S1, StringToReplace, sReplaceTo) << endl;

	cout << "\nReplace word without match cases:\n";
	cout << ReplaceWordInStringUsingSplitFunction(S1, StringToReplace, sReplaceTo, false) << endl;

	return (0);
}



