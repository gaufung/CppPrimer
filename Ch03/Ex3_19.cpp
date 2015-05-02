#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	vector<int> v1(10,42);
	vector<int> v2={42,42,42,42,42,42,42,42,42,42};
	vector<int> v3;
	for(decltype(v3.size()) index=0;index!=10;++index){
		v3.push_back(42);
	}
	return 0;
}