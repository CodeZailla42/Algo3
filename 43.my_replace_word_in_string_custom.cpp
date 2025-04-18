#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString(){
	string str = "";
	cout << "Please enter your string:\n";
	getline(cin, str);
	return (str);
}

string TrimPunctuation(string s){
	while (!s.empty() && ispunct(s.back()))
		s.pop_back();
	return (s);
}

string TrimRight(string str){
	while (!str.empty() && str.back() == ' ')
		str.pop_back();
	return (str);
}

vector<string> SplitString(string str, string Delim){
	vector<string> vString;
	string sWord = "";
	size_t pos = 0;
	while ((pos = str.find(Delim)) != std::string::npos){
		sWord = str.substr(0, pos);
		if (sWord != " "){
			vString.push_back(sWord);
		}
		str.erase(0, pos + Delim.length());
	}
	if (str != " ")
	{
		vString.push_back(str);
	}
	return (vString);
}

string ReplaceWordInstringCustom(string str, string word, string rWord){
	vector<string> vString = SplitString(str, " ");
	string str2 = "";
	vector<string>::iterator iter = vString.begin();
	while (iter != vString.end())
	{
		string current = TrimPunctuation(*iter);
		if (current == word)
		{
			*iter = rWord + (*iter).substr(current.length());
		}
		str2 += *iter + " ";
		iter++;
	}
	return (TrimRight(str2));
}

string ToLower(string str){
	for (char& c : str)
	{
		c = tolower(c);
	}
	return (str);
}

string ReplaceWordInstringCustomMatchCase(string str, string word, string rWord){
	vector<string> vString = SplitString(str, " ");
	string str2 = "";
	word = ToLower(word);
	rWord = ToLower(rWord);

	vector<string>::iterator iter = vString.begin();
	while (iter != vString.end())
	{
		string current = TrimPunctuation(*iter);
		if (ToLower(current) == word)
		{
			*iter = rWord + (*iter).substr(current.length());
		}
		str2 += *iter + " ";
		iter++;
	}
	return (TrimRight(str2));
}

int main(){
	string str = ReadString();

	cout << "\nThe original string:\n";
	cout << str << endl;

	cout << "\n\nString after replaced with match case:\n";
	cout << ReplaceWordInstringCustom(str, "Jordan", "USA") << endl;

	cout << "\nString after replace with no match case:\n";
	cout << ReplaceWordInstringCustomMatchCase(str, "Jordan", "USA") << endl;

	return (0);
}
