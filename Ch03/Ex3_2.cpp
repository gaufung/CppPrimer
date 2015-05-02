#include <iostream>
#include <string>
using namespace std;
void ReadLine(){
	string line;
	while(getline(cin,line)) {
	    cout<<line;
	}
}
void ReadWord(){
	string word;
	while(cin>>word) {
	    cout<<word;
	}
}
int main(){
	//read word;
	ReadWord();
	ReadLine();
}
