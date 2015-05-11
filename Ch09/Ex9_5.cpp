#include <iostream>
#include <vector>
using namespace std;
vector<int>::iterator Find(vector<int>::iterator header,vector<int>::iterator tailer,int val){
	while(header!=tailer&&(*header!=val)) {
	    ++header;
	}
	return header;
}
int main(){
	vector<int> v={1,3,2,4};
	return 0;
}