#include <iostream>
#include <vector>
#include <string>
using namespace std;

string TrimPunctuation(string s){
	if (!s.empty() && ispunct(s.back()))
		 s.pop_back();
	return (s);
}

vector<string> SplitString(string str, string Delim){
	vector<string> vString;
	size_t pos = 0;
	string sWord = "";
	while ((pos = str.find(Delim)) != std::string::npos){
		sWord = str.substr(0, pos);
		if (sWord != " "){
			vString.push_back(sWord);	
		}
		str.erase(0, pos + Delim.length());
	}
	if (str != " "){
		vString.push_back(str);
	}
	return (vString);
}

string	ReplaceString(string str, string word, string rWord){
	vector<string> vString = SplitString(str, " ");
	string str2 = "";
	vector<string>::iterator iter = vString.begin();
	while(iter != vString.end())
	{
		string current = TrimPunctuation(*iter);
		if (current == word)
		{
			*iter = rWord + (*iter).substr(current.length());
		}
		str2 += *iter + " ";
		iter++;
	}
	return (str2);
}

int main(){
	string str = "Welcome to Jordan, Jordan is a nice country";
	
	cout << "Original String:\n";
	cout << str << endl;

	cout << "\nReplaced String:\n";
	cout << ReplaceString(str, "Jordan", "USA") << endl;

	return (0);
}
