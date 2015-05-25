#ifndef EX_16_5
#define EX_16_5
#include <iostream>
template<typename T>
void print(const T ta[],std::size_t size){
	for(std::size_t i=0; i != size; ++i)
		std::cout<<ta[i]<<std::endl;
}
#endif