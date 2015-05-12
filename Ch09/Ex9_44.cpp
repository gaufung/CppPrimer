#include <iostream>
#include <string>
using namespace std;
//如果第二和第三个参数string有const修饰，就可以在传参的时候可以使用字面字符串
void func(string &s, string const& oldVal, string const& newVal){
	for(size_t pos=0;pos<s.size()-oldVal.size();){
		if(s[pos]==oldVal[0]&&s.substr(pos,oldVal.size())==oldVal){
			s.replace(pos,oldVal.size(),newVal);
			pos+=newVal.size();
		}
		else
			++pos;
	}
}
int main() 
{
	string s{ "gau fung cumt" };
	func(s, "gau", "gao");
	func(s, "fung", "feng");
	cout << s << endl;

	return 0;
}