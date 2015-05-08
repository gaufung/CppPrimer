#include <iostream>
using namespace std;
int fact(int val){
	if(val==1)return 1;
	else{
		return val*fact(val-1);
	}
}
int main(){
	int val=4;
	cout<<val<<"! equal to "<<fact(val)<<endl;
	return 0;
}