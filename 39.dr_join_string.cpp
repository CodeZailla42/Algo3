#include <iostream>
#include <vector>
#include <string>
using namespace std;

string JoinString(vector<string> vString, string Delim){
	string S1 = "";

	for (string &s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}

int main(){
	vector<string> vString = {"Mohammed", "Alin", "Fadwa", "Mahir"};
	
	cout << "Vector after joint in string:\n\n";
	cout << JoinString(vString, "###") << endl;

	return (0);
}
