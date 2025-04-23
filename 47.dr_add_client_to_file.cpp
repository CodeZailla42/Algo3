#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;
const string ClientFileName = "Client.txt";

void	clearScreen(){
	std::cout << "\033[2J\033[1;1H";
}

struct stClient
{
	string AccountNumber;
	string PINCode;
	string Name;
	string Phone;
	float  AccountBalance;
};

stClient ReadNewClient(){
	stClient Client;
	cout << "Enter Account Number? ";
	getline(cin >> ws, Client.AccountNumber);

	cout << "Enter PIN Code? ";
	getline(cin, Client.PINCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance: ";
	cin >> Client.AccountBalance;

	return (Client); 
}

string ConvertRecordToLine(stClient Client, string Seperator = "#//#"){
	string stClientRecord = "";
	stClientRecord += Client.AccountNumber + Seperator;
	stClientRecord += Client.PINCode + Seperator;
	stClientRecord += Client.Name + Seperator;
	stClientRecord += Client.Phone + Seperator;
	stClientRecord += to_string(Client.AccountBalance);

	return (stClientRecord);
}

void	AddDataLineToFile(string FileName, string stDataLine){
	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);
	if (MyFile.is_open())
	{
		MyFile << stDataLine << endl;

		MyFile.close();
	}
}

void	AddNewClient(){
	stClient Client;
	Client = ReadNewClient();
	AddDataLineToFile(ClientFileName, ConvertRecordToLine(Client));
}

void	AddClients(){
	char AddMore = 'Y';

	do{
		clearScreen();
		cout << "Adding New Client:\n\n";

		AddNewClient();
		cout << "\nClient Added Successfully, do you want to add more Client? Y/N? ";
		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');
}

int main(){
	AddClients();

	return (0);
}



