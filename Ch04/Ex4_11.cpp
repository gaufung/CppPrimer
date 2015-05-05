#include <iostream>
using namespace std;
bool TestValue(int ia,int ib,int ic,int id){
	return ia>ib&&ia>ic&&ia>id;
}
int main(){
	int ia,ib,ic,id;
	cin>>ia>>ib>>ic>>id;
	cout<<TestValue(ia,ib,ic,id);
	return 0;
}