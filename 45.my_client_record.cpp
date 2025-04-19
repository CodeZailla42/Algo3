#include <iostream>
#include <string>
using namespace std;

string ReadString(string Message){
	cout << Message;
	if (cin.peek() == '\n')
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	string str;
	getline(cin, str);
	return (str);
}

struct stClient{
	string AccountNumber;
	string PINCode;
	string Name;
	string PhoneNumber;
	float  AccountBalance;
};

stClient ReadNewClient(){ 
	cout << "Please enter Client Data:\n";

	stClient Client;
	Client.AccountNumber = ReadString("Enter Account Number: ");
	Client.PINCode = ReadString("Enter PIN Code: ");
	Client.Name = ReadString("Enter Name: ");
	Client.PhoneNumber = ReadString("Enter Phone Number: ");
	Client.AccountBalance = stof(ReadString("Enter Account Balance: "));

	return (Client);
}

string	ConvertRecordToLine(stClient Client, string Seperator = "#//#"){
	string stClientRecord;
	stClientRecord += Client.AccountNumber + Seperator;
	stClientRecord += Client.PINCode + Seperator;
	stClientRecord += Client.Name + Seperator;
	stClientRecord += Client.PhoneNumber + Seperator;
	stClientRecord += to_string(Client.AccountBalance);

	return (stClientRecord);
}

int main(){
	stClient Client = ReadNewClient();
	
	cout << "\nClient Record fo Saving is:\n";
	cout << ConvertRecordToLine(Client) << endl;

	return (0);
}
