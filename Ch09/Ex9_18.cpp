#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main(){
	deque<string> dq;
	string word;
	auto iter=dq.end();
	while(cin>>word) {
	    iter=dq.insert(iter,word);
	}
	iter=dq.begin();
	while(iter!=dq.end()) {
	    cout<<*iter<<" ";
	}
	return 0;
}