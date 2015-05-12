#include <iostream>
#include <string>
using namespace std;
void addPre(string& s,string const& pre,string const& name){
	s.insert(0,pre);
	s.append(name);
}
int main(){
	string name="Gao";
	addPre(name,"Mr."," Feng");
	cout<<name<<endl;
	return 0;
}