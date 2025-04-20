#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct stClientData
{
	string AccountNumber;
	string PINCode;
	string Name;
	string Phone;
	float  AccountBalance;
};

vector<string> SplitString(string str, string Delim){
	vector<string> vString;
	string sWord = "";
	size_t pos = 0;
	while ((pos = str.find(Delim)) != std::string::npos)
	{
		sWord = str.substr(0, pos);
		if (!sWord.empty()){
			vString.push_back(sWord);
		}
		str.erase(0, pos + Delim.length());
	}
	if (!str.empty()){
		vString.push_back(str);
	}
	return (vString);
}

stClientData	ConvertLineToRecord(const vector<string>& vString){
	stClientData Client;
	if (vString.size() >= 1) Client.AccountNumber = vString[0];
	if (vString.size() >= 2) Client.PINCode = vString[1];
	if (vString.size() >= 3) Client.Name = vString[2];
	if (vString.size() >= 4) Client.Phone = vString[3];
	if (vString.size() >= 5) Client.AccountBalance = stof(vString[4]);

	return (Client);
}

void	PrintClientData(stClientData Client){
	cout << "Account Number : " << Client.AccountNumber << endl;
	cout << "PIN Code       : " << Client.PINCode << endl;
	cout << "Name           : " << Client.Name << endl;
	cout << "Phone          : " << Client.Phone << endl;
	cout << "Account Balance: " << Client.AccountBalance << endl;
}


int main(){
	string LineData = "A150#//#1234#//#Mohammed Abo-Hadhoud#//#0799999#//#5270.000000";
	
	cout << "Line Record:\n";
	cout << LineData << endl << endl;

	vector<string> vString = SplitString(LineData, "#//#");
	stClientData Client = ConvertLineToRecord(vString); 

	cout << "Client Data:\n";
	PrintClientData(Client);

	return (0);
}
