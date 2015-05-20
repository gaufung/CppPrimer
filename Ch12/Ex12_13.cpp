#include <memory>
#include <iostream>
using namespace std;

int main(){
	auto sp=make_shared<int>();
	auto p=sp.get();
	//runtime error
	delete p;
	return 0;
}