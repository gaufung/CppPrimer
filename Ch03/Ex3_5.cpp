#include <iostream>
#include <string>
using namespace std;
string concatenateToLargeString(string s1,string s2){
	if (s1>s2)
	{
		return s1+s2;
	}
	else{
		return s2+s1;
	}
}
string adjacentTwoStringWithSpace(string s1,string s2){
	return s1+" "+s2;
}
void waitUserQuit(){
	string s;
	cin>>s;
}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	cout<<concatenateToLargeString(s1,s2)<<endl;
	cout<<adjacentTwoStringWithSpace(s1,s2)<<endl;
	waitUserQuit();
}