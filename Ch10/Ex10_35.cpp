#include <iostream>
#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main(){
	vector<int> vec{1,2,3,4,5};
	for(auto it=prev(vec.end());true;--it){
		cout<<*it<<" ";
		if(it==vec.begin())
			break;
	}
	return 0;

}