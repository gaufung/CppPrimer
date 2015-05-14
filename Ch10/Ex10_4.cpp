#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	vector<double> v={1,2,3,4};
	cout<<accumulate(v.cbegin(),v.cend(),0.0)<<endl;
	return 0;
}