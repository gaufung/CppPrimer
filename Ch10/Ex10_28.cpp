#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
void print(list<int>& il){
	for(auto & val:il)
		cout<<val<<" ";
	cout<<endl;
}
int main(){
	vector<int> v{1,2,3,4,5,6,7,8,9};
	list<int> il1,il2,il3;
	copy(v.cbegin(),v.cend(),inserter(il1,il1.begin()));
	print(il1);
	copy(v.cbegin(),v.cend(),back_inserter(il2));
	print(il2);
	copy(v.cbegin(),v.cend(),front_inserter(il3));
	print(il3);
	return 0;
}