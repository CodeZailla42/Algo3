#include <iostream>
#include <string>
#include <string>
using namespace std;

string ReplceStringWithbuiltInFunction(string S1, string StringToReplace, string sReplaceTo){
	size_t pos = S1.find(StringToReplace);
	while (pos != std::string::npos)
	{
		S1 = S1.replace(pos, StringToReplace.length(), sReplaceTo);
		pos = S1.find(StringToReplace); //find next//
	}
	return (S1);
}

int main(){
	string S1 = "Welcom to Jordan, Jordan is a nice country";
	string StringToReplace = "Jordan";
	string sReplaceTo = "USA";

	cout << "Original String:\n" << S1 << endl;
	cout << "\nString after replace:" << endl;
	cout << ReplceStringWithbuiltInFunction(S1, StringToReplace, sReplaceTo) << endl;

	return (0);
}
