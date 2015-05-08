#include <iostream>
#include <string>
using namespace std;
inline const bool
isShorter(string& s1,string& s2){
	return s1.size()<s2.size();
}
int main(){
	string s1="gau";
	string s2="fung";
	cout<<isShorter(s1,s2)<<endl;
	return 0;
}