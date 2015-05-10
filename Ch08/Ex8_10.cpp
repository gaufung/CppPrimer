#include <sstream>
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::istringstream; 
int main(){
	std::vector<string> v{"gau","fung"};
	
	for(auto val:v){
		istringstream is(val);
		string word;
		while(is>>word) {
		    std::cout<<word<<std::endl;
		}
	}
	return 0;
} 