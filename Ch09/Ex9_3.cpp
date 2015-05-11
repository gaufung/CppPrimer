#include <iostream>
#include <vector>
using namespace std;
bool Find(vector<int>::iterator header,vector<int>::iterator tailer,int val){
	while(header!=tailer&&(*header!=val)) {
	    ++header;
	}
	return header==tailer?false:true;
}
int main(){
	vector<int> v={1,3,2,4};
	cout<<Find(v.begin(),v.end(),3);
	return 0;
}