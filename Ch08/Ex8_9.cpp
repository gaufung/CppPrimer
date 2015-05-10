#include <iostream>
#include <sstream>
std::istream& Func(std::istream& in){
	std::string buff;
	while(in>>buff) {
	    std::cout<<buff<<std::endl;
	}
	in.clear();
	return in;
}
int main(){
	std::istringstream in("gaufung");
	Func(in);
	return 0;
}