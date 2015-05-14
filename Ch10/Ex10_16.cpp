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
	auto wc=find_if(words.begin(),words.end(),
		[sz](const string &a){return a.size()>=sz;});
	auto count=words.end()-wc;
	cout<<count<<" "<<make_plural(count,"word","s")<<" of length "<<sz<<" or longer"<<endl;
	for_each(wc,words.end(),
		[](const string &s){cout<<s<<" ";});
	cout<<endl;
}
int main(){
	vector<string> v={"gau","fung","gaofengcumt"};
	biggies(v,4);
	return 0;
}
