#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
const string ClientFileName = "Client.txt";



struct stClient{
	string AccountNumber;
	string PINCode;
	string Name;
	string Phone;
	double AccountBalance;
	bool MarkForDelete = false;
};

string ReadAccountNumber(){
	string AccountNumber = "";
	cout << "Enter Account Number: ";
	cin >> AccountNumber;
	return (AccountNumber);
}

vector<string> SplitString(string str, string Delim){
	vector<string> vString;
	size_t pos = 0;
	string sWord = "";
	while ((pos = str.find(Delim)) != std::string::npos){
		sWord = str.substr(0, pos);
		if (!sWord.empty())
		{
			vString.push_back(sWord);
		}
		str.erase(0, pos + Delim.length());
	}
	if (!str.empty())
	{
		vString.push_back(str);
	}
	return (vString);
}


stClient ConvertLineToRecord(string Line, string Seperator = "#//#"){
	stClient Client;
	vector<string> vString = SplitString(Line, Seperator);

	Client.AccountNumber = vString[0];
	Client.PINCode = vString[1];
	Client.Name = vString[2];
	Client.Phone = vString[3];
	Client.AccountBalance = stod(vString[4]);
	
	return (Client);
}

vector<stClient> LoadClientsDataFromFile(string FileName){
	vector<stClient> vClients;
	fstream MyFile;

	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		string Line = "";
		while(getline(MyFile, Line))
		{
			vClients.push_back(ConvertLineToRecord(Line));
		}
		MyFile.close();
	}
	return (vClients);
}

bool	FindClientByAccountNumber(string AccountNumber, vector<stClient> vClients, stClient& Client){
	for (stClient C : vClients)
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

bool	MarkClientForDeleteByAccountNumber(string AccountNumber, vector<stClient>& vClients){
	for (stClient& C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			C.MarkForDelete = true;
			return (true);
		}
	}
	return (false);
}

string ConvertRecordToLine(stClient Client, string Seperator = "#//#"){
	string ClientRecord = "";

	ClientRecord += Client.AccountNumber + Seperator;
	ClientRecord += Client.PINCode + Seperator;
	ClientRecord += Client.Name + Seperator;
	ClientRecord += Client.Phone + Seperator;
	ClientRecord += to_string(Client.AccountBalance);

	return (ClientRecord);
}

void	SaveClientsDataToFile(string FileName, vector<stClient>& vClients){
	fstream MyFile;
	MyFile.open(FileName, ios::out);
	string Line = "";

	if (MyFile.is_open())
	{
		for (stClient& C : vClients)
		{
			if (C.MarkForDelete == false)
			{
				Line = ConvertRecordToLine(C);
				MyFile << Line << endl;
			}
		}
		MyFile.close();
	}
}

bool DeleteClientByAccountNumber(string AccountNumber, vector<stClient>& vClients){
	stClient Client;
	char answer = 'n';

	if (FindClientByAccountNumber(AccountNumber, vClients, Client))
	{
		PrintClientCard(Client);

		cout << "\n\nAre Sure You Want To Delete This Client Y/N ? ";
		cin >> answer;

		if (answer == 'y' || answer == 'Y')
		{
			MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
			SaveClientsDataToFile(ClientFileName, vClients);

			vClients = LoadClientsDataFromFile(ClientFileName);

			cout << "\n\nClient Deleted Successfully!" << endl;
			return (true);
		}
	}
	else
	{
		cout << "\n\nClient With Account Number (" << AccountNumber << ") Is Not Found!" << endl; 
	}
	return (false);
}


int main(){
	vector<stClient> vClients = LoadClientsDataFromFile(ClientFileName);
	string AccountNumber = ReadAccountNumber();

	DeleteClientByAccountNumber(AccountNumber, vClients);

	return (0);
}


