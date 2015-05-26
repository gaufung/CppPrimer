#include <regex>
#include <string>
#include <iostream>
using namespace std;
int main(){
	string pattern("[^c]ei");
	pattern="\\w*" + pattern + "\\w*";
	regex r(pattern);
	smatch results;
	string test_str="receipt friend theif receive";
	for(sregex_iterator it(test_str.begin(),test_str.end(),r),end_it;
		it!=end_it;++it)
		cout<<it->str()<<endl;
	return 0;
}