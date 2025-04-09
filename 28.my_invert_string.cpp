#include <iostream>
#include <string>
using namespace std;

string ReadString(){
	string str = " ";
	cout << "Please enter string: \n";
	getline(cin, str);
	return (str);
}

void	InvertString(string str){
	
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		cout << str[i];
	}
	cout << "\n";
}



int main(){
	InvertString(ReadString());	

	return (0);
}
