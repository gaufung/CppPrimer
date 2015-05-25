#ifndef EX_16_19
#define EX_16_19
#include <iostream>

template <typename container>
void printnew(container &c,std::ostream &os){
	typedef typename c::size_type size_type;
	auto it=c.begin();
	for(size_type st=0;st!=c.size();++st)
		os<<*it++<<" ";
}

template<typename Container>
std::ostream & print(Container &c, std::ostream &os)
{
    typedef typename Container::size_type size_type;

    auto it = c.begin();
    for(size_type i = 0; i!= c.size(); ++i)
        os << *it++ << "\n";

    return os;
}
#endif