#include <iostream>
#include <cstring>
using namespace std;
int main(){
	const char* firstName="gau";
	const char* lastName="fung";
	size_t newLength=strlen(firstName)+strlen(lastName)+1;
	char* name=new char(newLength);
	strcpy(name,firstName);
	strcat(name," ");
	strcat(name,lastName);
	cout<<name<<endl;
	delete name;
	return 0;
}