#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
//using namespace std;
int main(){
	std::vector<int> v{1,1,3,3,5,5,7,7,9};
	list<int> il;
	std::unique_copy(v.begin(),v.end(),back_inserter(il));
	for(auto val:il)
		cout<<val<<" ";
	std::cout << std::endl;
	return 0;
}