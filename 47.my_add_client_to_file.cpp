#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

string ReadString(string Message){
	cout << Message;
	if (cin.peek() == '\n') 
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	string str = "";
	getline(cin, str);
	return (str);
}

struct	stClient
{
	string AccountNumber;
	string PINCode;
	string Name;
	string Phone;
	float  Balance;
};

stClient	ReadNewClient(){
	stClient Client;
	Client.AccountNumber = ReadString("Enter Account Number: ");
	Client.PINCode = ReadString("Enter PIN Code: ");
	Client.Name = ReadString("Enter Name: ");
	Client.Phone = ReadString("Enter Phone: ");
	Client.Balance = stof(ReadString("Enter Account Balance: "));
	return (Client);
}

string ConvertRecordToLine(stClient Client, string Seperator = "#//#"){
	string ClientRecord = "";
	ClientRecord += Client.AccountNumber + Seperator;
	ClientRecord += Client.PINCode + Seperator;
	ClientRecord += Client.Name + Seperator;
	ClientRecord += Client.Phone + Seperator;
	ClientRecord += to_string(Client.Balance);
	return(ClientRecord);
}

void AddLineToFile(string FileName, string Line){
	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);
	if (MyFile.is_open())
	{
		if (Line != " ")
		{
			MyFile << Line << endl;
		}
		MyFile.close();
	}
}

void	AddNewClient(){
	char AddClient = 'Y';
	
	do{
			stClient Client = ReadNewClient();
			string Line = ConvertRecordToLine(Client);
			AddLineToFile("file.txt", Line);

			cout << "\nClient added successfully, Do you want add more client Y/N ?";
			cin >> AddClient;
		
	} while (AddClient == 'y' || AddClient == 'Y');

}

int main(){
	AddNewClient();

	return (0);
}
