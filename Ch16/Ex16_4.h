#ifndef EX_16_4
#define EX_16_4
template<typename iteratorT,typename V>
iteratorT find(const iteratorT &begin,
		const iteratorT & end, V val){
	auto it=begin;
	while(it!=end) {
	    if(*it==val)
	    	break;
	    ++it;
	}
	return it==end ? end : it;
}
#endif