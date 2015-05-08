#include <iostream>
using namespace std;
int sum(initializer_list<int> il){
	int su=0;
	for(auto beg=il.begin();beg!=il.end();++beg){
		su+=*beg;
	}
	return su;
}
int main(){
	cout<<sum({1,3,2,5})<<endl;
	return 0;
}