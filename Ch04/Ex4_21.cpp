#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> vec={1,4,3,5};
	auto it=vec.begin();
	while(it!=vec.end()) {
		*it=(*it)%2==0?*it:(*it)*2;
		it++;
	}
	for(auto val:vec)
		cout<<val<<" ";
	return 0;
}