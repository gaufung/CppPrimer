#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main(){
	list<int> iList={1,5,3};
	vector<int> iVector={1,5,3};
	vector<double> dVector(iList.begin(),iList.end());
	for(auto& val:dVector)
		cout<<val<<" ";
	vector<double> dVector1(iVector.begin(),iVector.end());
	return 0;
}