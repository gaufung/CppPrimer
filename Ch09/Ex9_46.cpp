#include <iostream>
#include <string>
using namespace std;
void addPre(string& s,string const& pre,string const& name){
	s.insert(0,pre);
	//size_t pos=s.size();
	s.insert(s.size(),name);
}
int main(){
	string name="Gao";
	addPre(name,"Mr."," Feng");
	cout<<name<<endl;
	return 0;
}