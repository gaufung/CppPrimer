#include <iostream>
#include <string>
using namespace std;
int main(){
	string s="word";
	string val=s[s.size()-1]=='s'?"":"s";
	//string p1=s+s[s.size()-1]=='s'?"":"s";
	string p1=s+val;
	cout<<p1<<endl;
	return 0;
}