#include <iterator>
#include <iostream>
#include <string>
#include <cstddef>

using std::cout; using std::endl; using std::string;

void func(string &s, string const& oldVal, string const& newVal)
{
    for (auto iter = s.begin(); std::distance(iter, s.end()) >= 
    	static_cast<ptrdiff_t>(oldVal.size()); )
    	//找到该oldVal字符串
        if (*iter == oldVal[0] && string(iter, iter+oldVal.size()) == oldVal) {
        	//删除旧的字符串
            iter = s.erase(iter, iter+oldVal.size());
            //找到下一个位置的gap
            size_t pos = std::distance(s.begin(), iter) + newVal.size();
            s.insert(iter, newVal.begin(), newVal.end());
            iter =s.begin()+pos;
        } else  ++iter;
}

int main() 
{
	string s{ "gau fung cumt" };
	func(s, "gau", "gao");
	func(s, "fung", "feng");
	cout << s << endl;

	return 0;
}