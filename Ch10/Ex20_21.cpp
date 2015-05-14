#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int i=10;
	auto decreament_and_check=[&i](){return --i?false:true;};
	while(decreament_and_check()) {
	    cout<<i<<endl;
	}
	return 0;
}