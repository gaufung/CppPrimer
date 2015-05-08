#include <iostream>
using namespace std;
int abs(int val){
	return val<0?-val:val;
}
int main(){
	int val1=4,val2=0,val3=-3;
	cout<<abs(val1)<<endl;
	cout<<abs(val2)<<endl;
	cout<<abs(val3)<<endl;
	return 0;
}