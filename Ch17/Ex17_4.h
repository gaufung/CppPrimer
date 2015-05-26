#ifndef EX_17_4
#define EX_17_4
#include "Sales_data.h"
#include <utility>
#include <tuple>
#include <vector>
using std::tuple;
using std::vector;
using std::istream;
using std::ostream;
using std::cout;
using std::endl;
using std::string;
typedef tuple<vector<Sales_data>::size_type,vector<Sales_data>::const_iterator,
	vector<Sales_data>::const_iterator> matches;
vector<matches>
findBook(const vector<vector<Sales_data>>& files,const string& book){
	vector<matches> ret;
	for(auto it=files.cbegin();it!=files.cend();++it){
		auto found=std::equal_range(it->cbegin(),it->cend(),book,compareIsbn);
		if(found.first!=found.second)
			ret.push_back(make_tuple(it-files.cbegin(),found.first,found.second));
	}
	return ret;
}	
void reportResults(istream &in,ostream &os,const vector<vector<Sales_data>>& files){
	string s;
	while(in>>s) {
	    auto trans=findBook(files,s);
	    if(trans.empty()){
	    	cout<<s<<" not found in any stores "<<endl;
	    	continue;
	    }
	    for(const auto & store,trans)
	    	os<<"store "<<std::get<0>(store)<<" sales: "<<std::accumulate(std::get<1>(store),std::get<2>(store),Sales_data(s))<<endl;
	}
}
#endif