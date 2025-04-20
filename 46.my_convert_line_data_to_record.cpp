#include <iostream>
#include <string>
#include <vector>
using namespace std;



vector<string>	SplitString(string str, string Delim){
	vector<string> vString;
	string sWord = "";
	size_t pos = 0;
	while ((pos = str.find(Delim)) != std::string::npos){
		sWord = str.substr(0, pos);
		if (sWord != " ")
		{
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

void PrintClientData(vector<string> vString){
	string ClientData[5] = {"AccountNumbr: ", "PIN Code    : ", "Name        : ", "Phone       : ", "Balance     : "};
	
	for (size_t i = 0; i < vString.size(); i++){
		ClientData[i] += vString[i];

		cout << ClientData[i] << endl;
	}
}

int main(){
	string LineData = "A150#//#1234#//#Mohammed Abo-Hadhoud#//#0799999#//#5270.000000";

	cout << "Line Record:\n";
	cout << LineData << endl;

	vector<string> vString = SplitString(LineData, "#//#");

	cout << "\nLine Record in vector:\n\n";
	PrintClientData(vString);

	return (0);
}

