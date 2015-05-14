#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
string make_plural(size_t ctr,const string &word, const string &ending)
{
  return (ctr==1) ? word : word+ending;
}
void biggies(vector<string>& words,int sz)
{
	stable_sort(words.begin(),words.end(),
		[](const string& s1,const string& s2){return s1.size()<s2.size();});
	auto iter=partition(words.begin(),words.end(),[sz](const string & s){return s.size()>sz?true:false;});
	
	for_each(words.begin(),iter,
		[](const string &s){cout<<s<<" ";});
		
	cout<<endl;
}
int main(){
	vector<string> v={"gau","fung","gaofengcumt"};
	biggies(v,4);
	return 0;
}
