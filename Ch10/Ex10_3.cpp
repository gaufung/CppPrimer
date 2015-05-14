#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	vector<int> v={1,2,3,4};
	cout<<accumulate(v.cbegin(),v.cend(),0)<<endl;
	return 0;
}