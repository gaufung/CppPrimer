#include <iostream>
#include <bitset>
#include <vector>
using namespace std;
int main(){
	vector<unsigned long long> vl={1,2,3,5,8,13,21};
	bitset<32> bvec;
	for(auto & val:vl)
		bvec.set(val);
	cout<<bvec<<endl;
}