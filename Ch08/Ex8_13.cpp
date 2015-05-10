#include <fstream>
#include <vector>
#include <sstream>
#include <iostream>
#include "PersonInfo.h"
using std::string;
using std::ifstream;
using std::istringstream;
using std::cout;
using std::endl;
int main(){
	ifstream ifs("personInfo.txt");
	string line,word;
	std::vector<PersonInfo> peoples;
	while(getline(ifs,line)) {
	    PersonInfo info;
	    istringstream record(line);
	    record>>info.name;
	    while(record>>word) {
	        info.phones.push_back(word);
	    }
	    peoples.push_back(info);
	}
	for(auto& person:peoples){
		cout<<person.name<<" ";
		for(auto& number:person.phones)
			cout<<number<<" ";
		cout<<endl;
	}
	return 0;
}