#include <iostream>
#include <cstddef>
using namespace std;
int main(){	
	const size_t sz=10;
	int arr[sz];
	int posi=0;
	for(size_t ix=0;ix<sz;++ix,++posi){
		arr[ix]=posi;
	}
	for(auto i:arr)
		cout<<i<<endl;
	return 0;
}