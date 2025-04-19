#include <iostream>
#include <string>
#include <vector>
using namespace std;


string RemovePunctuation(string str){
	string str2 = "";
	for (char& c : str)
		if (!ispunct(c))
			str2 += c;
	return (str2);
}



int main(){
	string str = "Welcom to Jordan, Jordan is a nice country; it's amazing";

	cout << "Original string:\n";
	cout << str << endl;

	cout << "\nPunctuation removed:\n";
	cout << RemovePunctuation(str) << endl;
}
