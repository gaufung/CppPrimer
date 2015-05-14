#include <iostream>
#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main(){
	vector<int> vec{1,2,0,3,4,0,5};
	auto rcomma=find(vec.crbegin(),vec.crend(),0);
	cout<<distance(rcomma, vec.crend())<<endl;
	return 0;

}