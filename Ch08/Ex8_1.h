#ifndef EX8_1
#define EX8_1
#include <iostream>
std::istream& Func(std::istream& in){
	std::string buff;
	while(in>>buff) {
	    std::cout<<buff<<std::endl;
	}
	in.clear();
	return in;
}
#endif