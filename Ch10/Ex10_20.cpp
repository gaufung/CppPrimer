#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
	vector<string> v={"gau","fung","gaofeng"};
	int sz=3;
	cout<<count_if(v.begin(),v.end(),[sz](const string &s){return s.size()>sz ;});
	return 0;
}