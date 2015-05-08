#include <iostream>
#include <vector>
using namespace std;
inline int f(int,int);
typedef decltype(f) fp;
inline int numAdd(int val1,int val2){
	return val1+val2;
}
inline int numSub(int val1,int val2){return val1-val2;}
int main(){
	vector<fp*> v={numSub,numAdd};
	for(auto it=v.begin();it!=v.end();++it){
		cout<<(*it)(2,3)<<endl;
	}
	return 0;
}