#ifndef EX_16_20
#define EX_16_20
#include <iostream>
template <typename Iter>
void print(Iter begin,Iter end,std::ostream &os){
	while(begin!=end) {
	    os<<*begin<<" ";
	    ++begin;
	}
}
#endif