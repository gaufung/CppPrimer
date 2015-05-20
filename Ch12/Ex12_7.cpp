#include <memory>
#include <iostream>
#include <vector>
using namespace std;
shared_ptr<vector<int>> createVector(){
	return make_shared<vector<int>>();
}
void inputVector(shared_ptr<vector<int>> vsp){
	int val;
	while(cin>>val) {
	    vsp->push_back(val);
	}
}
void printVector(shared_ptr<vector<int>> vsp){
	for(auto& val:*vsp)
		cout<<val<<" ";
}
int main(){
	auto vsp=createVector();
	inputVector(vsp);
	printVector(vsp);
	return 0;
	
}