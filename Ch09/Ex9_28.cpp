#include <iostream>
#include <forward_list>
#include <string>
using namespace std;
void insertString(forward_list<string>& fls,string target,string insertval){
	auto cur=fls.begin();
	auto prev=fls.before_begin();
	while(cur!=fls.end()&&*cur!=target) {
	   prev=cur;
	   ++cur;
	}
	if(cur!=fls.end())
		fls.insert_after(cur,insertval);
	else{
		fls.insert_after(prev,insertval);
	}
}
int main(){
	forward_list<string> fls={"gau","fung"};
	insertString(fls,"gan","cumt");
	for(auto& s:fls)
		cout<<s<<" ";
	return 0;
}