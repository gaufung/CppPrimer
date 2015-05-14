#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>
using namespace std;
int main(){
	vector<int> v{1,2,3,4,5,6,7,8,9,0};
	list<int> il;
	copy(v.crbegin()+3,v.crbegin()+8,back_inserter(il));
	for(auto& val:il)
		cout<<val<<" ";
	return 0;
}