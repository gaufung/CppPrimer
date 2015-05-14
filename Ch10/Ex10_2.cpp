#include <iostream>
#include <algorithm>
#include <string>
#include <list>
using namespace std;
int main(){
	string s("gaufungcumt");
	list<int> il={1,2,3,2,2,3,3,2};
	cout<<count(s.cbegin(),s.cend(),'u')<<endl;
	cout<<count(il.cbegin(),il.cend(),2)<<endl;
	return 0;
}