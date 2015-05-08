#include <iostream>
using namespace std;
void print(const int ia[10]){
	for(size_t i=0;i!=10;++i){
		cout<<ia[i]<<endl;
	}
}
int main(){
	int ia[10]={};
	print(ia);
	return 0;
}