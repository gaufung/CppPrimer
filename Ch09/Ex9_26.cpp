#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main(){
	int a[]={0,1,1,2,3,5,8,13,21,55,89};
	vector<int> v(a,a+sizeof(a)/sizeof(a[0]));
	list<int> l(a,a+sizeof(a)/sizeof(a[0]));
	//erase the even elememt in vector 
	auto viter=v.begin();
	while(viter!=v.end()) {
	    if(*viter%2==0)
	    	viter=v.erase(viter);
	    else
	    	++viter;
	}
	
	auto liter=l.begin();
	while(liter!=l.end()) {
	    if(*liter%2==0)
	    	++liter;
	    else
	    	liter=l.erase(liter);
	}
	for(auto& val:v)
		cout<<val<<" ";
	cout<<endl;
	for(auto& val:l)
		cout<<val<<" ";

	return 0;
}