#include <string>
#include <iostream>
using namespace std;
char* concatenate(const string& s1,const string& s2){
	char* p=new char[s1.size()+s2.size()+1];
	int pos=0;
	for(auto ch:s1)
		p[pos++]=ch;
	for(auto ch:s2)
		p[pos++]=ch;
	p[pos]='\0';
	return p;
}
int main(){
	auto p1=concatenate("hello","world");
	cout<<p1<<endl;
	delete [] p1;
	string s1="gau";
	string s2="fung";
	auto p2=concatenate(s1,s2);
	cout<<p2<<endl;
	delete [] p2;
	return 0;

}