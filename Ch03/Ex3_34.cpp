#include <iostream>
using namespace std;
int main(){
	int arr[2]={1,2};
	int *p1=arr;
	int *p2=arr;
	p1+=p2-p1;
	cout<<*p1<<endl;
	return 0;
}