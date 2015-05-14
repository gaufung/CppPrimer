#include <iostream>
#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main(){
	vector<int> vec{1,2,3,4,5};
	for (auto rit = vec.crbegin(); rit != vec.crend(); ++rit)
		cout<<*rit<<" ";
	return 0;

}