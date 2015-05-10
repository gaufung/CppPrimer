#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
void ReadFile2Vec(string& fileName,vector<string>& v){
	ifstream ifs(fileName);
	if(ifs){
		string buf;
		//get value in one line: getline function
		//while(std::getline(ifs,buf)) 
		while(ifs>>buf)
		{
		    v.push_back(buf);
		}
	}
}
int main(){
	string fileName="data.txt";
	vector<string> v;
	ReadFile2Vec(fileName,v);
	//check
	for(auto & val:v){
		std::cout<<val<<std::endl;
	}
	return 0;
}