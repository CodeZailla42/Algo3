#include <iostream>
#include <fstream>
#include <iomanip>
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
};

vector<string> SplitString(string S1, string Delim){
	vector<string> vString;
	size_t pos = 0;
	string sWord = "";
	while ((pos = S1.find(Delim)) != std::string::npos){
		sWord = S1.substr(0, pos);
		if (!sWord.empty()){
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (!S1.empty()){
		vString.push_back(S1);
	}
	return (vString);
}

stClient	ConvertLineToRecord(string Line, string Seperator = "#//#"){
	stClient Client;
	vector<string> vClientData = SplitString(Line, Seperator);

	Client.AccountNumber = vClientData[0];
	Client.PINCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);
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
			vClient.push_back(ConvertLineToRecord(Line));
		}

		MyFile.close();
	}
	return (vClient);
}

void	PrintClientRecord(stClient Client){
	cout << "| " << left << setw(15) << Client.AccountNumber;
	cout << "| " << left << setw(10) << Client.PINCode;
	cout << "| " << left << setw(40) << Client.Name;
	cout << "| " << left << setw(15) << Client.Phone;
	cout << "| " << left << setw(12) << Client.AccountBalance;
}

void	PrintAllClientsData(vector<stClient> vClient){
	cout << "\n\t\t\t\t\tClient List(" << vClient.size() << ") Client(s)";
	cout << "\n______________________________________________________________";
	cout << "______________________________________________\n" << endl;
	cout << "| " << left << setw(15) << "Account Number";
	cout << "| " << left << setw(10) << "PIN Code";
	cout << "| " << left << setw(40) << "Name";
	cout << "| " << left << setw(15) << "Phone";
	cout << "| " << left << setw(12) << "Account Balance";
	cout << "\n______________________________________________________________";
	cout << "______________________________________________\n" << endl;
	for (stClient& Client : vClient){
		PrintClientRecord(Client);
		cout << endl;
	}
	cout << "\n______________________________________________________________";
	cout << "______________________________________________\n" << endl;

}

int main(){
	vector<stClient> vClient = LoadClientDataFromFile(ClientFileName);
	PrintAllClientsData(vClient);

	return (0);
}







