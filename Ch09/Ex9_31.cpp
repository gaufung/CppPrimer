#include <iostream>
#include <forward_list>
using namespace std;
void duplicateOdd(forward_list<int>& fli){
	auto curr=fli.begin();
	auto prev=fli.before_begin();
	while(curr!=fli.end()){
		if(*curr%2==0)
			curr=fli.erase_after(prev);
		else{
			fli.insert_after(curr,*curr);
			++curr;
			++curr;
			++prev;
			++prev;
			//why prev+=2 is invalid?
			//prev += 2;
		}
	}
}
int main(){
	forward_list<int> fli={1,3,4,5,3};
	duplicateOdd(fli);
	for(auto& val:fli)
		cout<<val<<" ";
	return 0;
}