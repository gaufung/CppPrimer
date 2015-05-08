#include <iostream>
using namespace std;
bool existCapitalLetter(string& str){
	for(auto ch:str){
		if (isupper(ch))
		{
			return true;		
		}
	}
	return false;
}
void changeStringtoUpper(string& str){
	for(auto& ch:str){
		ch=isupper(ch)?tolower(ch):ch;
	}
}
int main(){
	string str="GauFung";
	if(existCapitalLetter(str)){
		changeStringtoUpper(str);
		cout<<str<<endl;
	}
	return 0;
}