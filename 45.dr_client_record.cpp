#include <iostream>
#include <string>
using namespace std;

struct stClient
{
	string AccountNumber;
	string PINCode;
	string Name;
	string Phone;
	float  Balance;
};

stClient ReadNewClient(){
	stClient Client;
	cout << "Enter Account Number? ";
	getline(cin, Client.AccountNumber);

	cout << "Enter PinCode? ";
	getline(cin, Client.PINCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Ener Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance? ";
	cin >> Client.Balance;

	return (Client);
}

string ConvertClientRecordToLine(stClient Client, string Seperator = "#//#"){
	string stClientRecord;

	stClientRecord += Client.AccountNumber + Seperator;
	stClientRecord += Client.PINCode + Seperator;
	stClientRecord += Client.Name + Seperator;
	stClientRecord += Client.Phone + Seperator;
	stClientRecord += to_string(Client.Balance);

	return (stClientRecord);
}

int main(){
	cout << "Please Enter Client Data:\n\n";
	stClient Client = ReadNewClient();

	cout << "\n\nClient Record for Saving is: \n";
	cout << ConvertClientRecordToLine(Client);

}
