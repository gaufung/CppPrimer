#include <iostream>
using namespace std;
int count(){
	static int size=-1;
	return ++size;
}
int main(){
	for(unsigned i = 0; i < 10; ++i) {
		cout<<count()<<" ";
	}
	return 0;
}