#include <iostream>
#include <cstddef>
#include <vector>;
using namespace std;
int main(){
	int arr[3]={1,2,4};
	vector<int> v(arr,arr+sizeof(arr) / sizeof(arr[0]));
	for(auto i:v)
		cout<<i<<endl;
	return 0;
}
