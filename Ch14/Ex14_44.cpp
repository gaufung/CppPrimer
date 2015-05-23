#include <iostream>
#include <functional>
#include <map>
int add(int i,int j){return i+j;}
auto mod=[](int i,int j){return i%j;};
struct divide{
	int operator()(int denominator,int divisor){
		return denominator/divisor;
	}
};
int main(){
	std::map<std::string,std::function<int(int,int)>> binops={
		{"+",add},
		{"-",std::minus<int>()},
		{"/",divide()},
		{"*",[](int i,int j){return i*j;}},
		{"%",mod}
	};

	std::cout<<binops["*"](1,2);
}
