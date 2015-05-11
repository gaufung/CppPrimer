#include <iostream>
#include <list>
#include <deque>
using namespace std;
int main(){
	list<int> values={1,3,4,5,6};
	deque<int> oddq,evenq;
	for(auto val:values){
		if(val%2==0)
			evenq.push_back(val);
		else
			oddq.push_back(val);
	}
	for(auto val:evenq)
		cout<<val<<" ";
	cout<<endl;
	for(auto val:oddq)
		cout<<val<<" ";
	return 0;
}