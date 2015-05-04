#include <iostream>
#include <iterator>
using namespace std;
int main(){
	int arr[4]={6,3,2,1};
	for(auto i:arr)
		cout<<i<<" ";
	cout<<endl;

	for(int j=0;j<sizeof(arr)/sizeof(arr[0]);++j)
		cout<<arr[j]<<" ";
	cout<<endl;
	
	for(int* p=begin(arr);p!=end(arr);++p)
		cout<<*p<<" ";
	cout<<endl;		
	return 0;
}