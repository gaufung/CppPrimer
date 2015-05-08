#include <iostream>
using namespace std;
void swap(int& p1,int& p2){
	int temp=p1;
	p1=p2;
	p2=temp;
}
int main(){
	int i1=4,i2=5;
	cout<<"i1: "<<i1<<" i2: "<<i2<<endl;
	swap(i1,i2);
	cout<<"i1: "<<i1<<" i2: "<<i2<<endl;
	return 0;
} 