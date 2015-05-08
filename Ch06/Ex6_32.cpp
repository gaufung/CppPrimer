#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
void printVector(vector<int> v,unsigned index,unsigned size){
	if (index!=size)
	{
		cout<<v[index]<<" ";
		printVector(v,index+1,size);
	}
}
int main(){
	vector<int> v={1,3,45,2};
	printVector(v,0,v.size());
	return 0;
}