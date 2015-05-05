#include <iostream>
#include <vector>
#include <cstddef>
using namespace std;
int main(){
	vector<int> vec={1,3,3};
	cout<<*vec.begin()<<endl;
	cout<<*vec.begin()+1<<endl;
	return 0;
}