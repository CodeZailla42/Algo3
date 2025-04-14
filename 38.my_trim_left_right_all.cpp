#include <iostream>
#include <string>
using namespace std;

string	TrimLeft(string str){
	
	while (!str.empty() && str[0] == ' '){
		str.erase(0 , 1);		
	}
	return (str);
}

string TrimRight(string str){
	while (!str.empty() && str.back() == ' '){
		str.pop_back();
	}
	return (str);
}

string Trim(string str){
	str = TrimLeft(str);
	str = TrimRight(str);
	return (str);
}

int main(){
	string str = "    Mohammed Abo-Hadhoud   ";

	cout << "After Trim Left : " << TrimLeft(str) << endl;
	cout << "After Trim right: " << TrimRight(str) << endl;
	cout << "After Trim both : " << Trim(str) << endl;

	return (0);
}
