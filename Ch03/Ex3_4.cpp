#include <iostream>
#include <string>
using namespace std;
void reportLarger(string gu,string s2){
	cout<<"The larger string is:";
	if (gu>s2)
	{
		cout<<gu<<endl;
	}
	else{
		cout<<s2<<endl;
	}
}
void reportLonger(string s1,string s2){
	cout<<"The longer string is:";
	if (s1.size()>s1.size())
	{
		cout<<s1<<endl;
	}
	else{
		cout<<s2<<endl;
	}	
}
int  main(){
	string s1, s2;
	cin>>s1>>s2;
	if (s1!=s2)
	{
		reportLarger(s1,s2);
		reportLonger(s1,s2);
	}
	return 0;
}