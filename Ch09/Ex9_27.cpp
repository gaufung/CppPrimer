#include <iostream>
#include <forward_list>
using namespace std;
int main(){
	forward_list<int> fl={1,2,3,4,5};
	auto prev=fl.before_begin();
	auto cur=fl.begin();
	while(cur!=fl.end()) {
	    if(*cur%2==0)
	    {
	    	prev=cur;
	    	++cur;
	    }
	    else
	    	cur=fl.erase_after(prev);
	}
	for(auto& val:fl)
		cout<<val<<" ";
	return 0;
}