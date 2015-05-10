#include <sstream>
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::istringstream; 
int main(){
	std::vector<string> v{"gau","fung"};
	istringstream is;
	for(auto val:v){
		is.clear();//clear the stream hold string
		is.str(val);
		string word;
		while(is>>word) {
		    std::cout<<word<<std::endl;
		}
	}
	return 0;
} 