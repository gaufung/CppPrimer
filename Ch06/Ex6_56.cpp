#include <iostream>
#include <vector>
using namespace std;
typedef int (*Fp)(int,int);
int numAdd(int val1,int val2){return val1+val2;}
int numSub(int val1,int val2){return val1-val2;}
int numMulti(int val1,int val2){return val1*val2;}
int numDivide(int val1,int val2){return val1/val2;}
int main(){
	vector<Fp> v={numAdd,numSub,numMulti,numDivide};
	for(auto it=v.begin();it!=v.end();++it)
		cout<<(*it)(3,4)<<" ";
	return 0;
}