#include "Ex16_4.h"
#include <iterator>
#include <vector>
#include <list>
#include <string>
#include <iostream>
int main(){
	std::vector<int> v{1,2,3,4};
	auto res=find(v.begin(),v.end(),3);
	if(res==v.end())
		std::cout<<"cannot find the value";
	else
		std::cout<<"find the value";
	return 0;
}