#include <iostream>
#include <string>
using namespace std;
int main(){
	string sentence;
	cout<<"enter a full sentence: ";
	getline(cin, sentence);
	cout<< "You typed: "<<sentence<<endl;
	return 0;
}
