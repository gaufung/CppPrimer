#include <iostream>
#include <string>
using namespace std;
template < typename T, typename... Args>
ostream & print(ostream &os, const T &t,const Args& ... rest){
	os << t << ", ";
	return print(os,rest...);
}
int main(){
	int i=0 ; double d=3.14; string s = "how now brown cow";
	print(cout,i,s,42);
	return 0;
}