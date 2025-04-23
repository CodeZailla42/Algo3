#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
const string ClientFileName = "Client.txt";

struct stClient{
	string AccountNumber;
	string PINCode;
	string Name;
	string Phone;
	double AccountBalance;
};

string ReadClientAccountNumber(){
	string str = "";
	cout << "Please Enter Account Number: ";
	cin >> str;
	return (str);
}

vector<string> SplitString(string str, string Delim){
	vector<string> vString;
	size_t pos = 0;
	string sWord = "";
	while ((pos = str.find(Delim)) != std::string::npos)
	{
		sWord = str.substr(0, pos);
		if (!sWord.empty()) vString.push_back(sWord);
		str.erase(0, pos + Delim.length());
	}
	if (!str.empty()) vString.push_back(str);

	return (vString);
}


stClient CovertLineToRecord(string Line, string Seperator = "#//#"){
	stClient Client;
	vector<string> vString = SplitString(Line, Seperator);

	Client.AccountNumber = vString[0];
	Client.PINCode = vString[1];
	Client.Name = vString[2];
	Client.Phone = vString[3];
	Client.AccountBalance = stod(vString[4]);

	return (Client);
}

vector<stClient> LoadClientDataFromFile(string FileName){
	vector<stClient> vClient;
	fstream MyFile;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		string Line = "";
		while (getline(MyFile, Line))
		{
			vClient.push_back(CovertLineToRecord(Line));
		}
		MyFile.close();
	}
	return (vClient);
}

bool FindClientByAccountNumber(string AccountNumber, stClient& Client){
	vector<stClient> vClient = LoadClientDataFromFile(ClientFileName);

	for (stClient& C : vClient)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return (true);
		}
	}
	return (false);
}

void	PrintClientCard(stClient Client){
	cout << "\nAccount Number : " << Client.AccountNumber;
	cout << "\nPIN Code       : " << Client.PINCode;
	cout << "\nName           : " << Client.Name;
	cout << "\nPhone          : " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountBalance;
	cout << endl;
}

int main(){
	stClient Client;
	string AccountNumber = ReadClientAccountNumber();

	if (FindClientByAccountNumber(AccountNumber, Client))
	{
		PrintClientCard(Client);
	}
	else
	{
		cout << "\nAccount Number (" << AccountNumber << ") Not Found!" << endl;
	}
	
	return (0);
}
