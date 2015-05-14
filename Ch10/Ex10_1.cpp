#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	vector<int> v={1,2,3,4,2,2,4,3};
	cout<<"v contains "<<count(v.cbegin(),v.cend(),2)<<" times"<<endl;

	return 0;
}