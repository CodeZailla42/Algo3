#include <iostream>
#include <string>
using namespace std;

string RemovePunctuation(string S1){
	string S2 = "";
	for (size_t i = 0; i < S1.length(); i++){
		if (!ispunct(S1[i])){
			S2 += S1[i]; 
		}
	}
	return (S2);
}

int main(){
	string S1 = "Welcom to Jordan, Jordan is a nice country; it's amazing";

	cout << "Original string:\n";
	cout << S1 << endl;

	cout << "\nPunctuation removed:\n";
	cout << RemovePunctuation(S1) << endl;
}


