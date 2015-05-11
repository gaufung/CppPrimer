#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main(){
	list<int> il={1,2,3,4};
	vector<int> v={1,2,3,4,5};
	vector<int> tempV(il.begin(),il.end());
	cout<<(tempV<v)<<endl;
	return 0;
}