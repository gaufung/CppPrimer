#include <memory>
#include <iostream>
#include <vector>
using namespace std;
vector<int>* createVector(){
	return new vector<int>;
}
void inputVector(vector<int>* vp){
	int val;
	while(cin>>val) {
	    vp->push_back(val);
	}
}
void print(vector<int>* p){
	for(auto& val:*p)
		cout<<val<<" ";
}
int main(){
	auto vp=createVector();
	inputVector(vp);
	print(vp);
	delete vp;
	return 0;
}