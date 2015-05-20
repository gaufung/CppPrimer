#include <iostream>
using namespace std;
class numbered
{
public:
	numbered(){
	static unsigned unique = 10;
        mysn = unique++;
	}
	numbered(const numbered& n){
		cout<<"called"<<endl;
		 mysn = n.mysn + 1;
	}
	numbered& operator=(const numbered& n){
		cout<<"called2"<<endl;
		mysn=n.mysn;
		return *this;
	}
public:
	unsigned mysn;
};
void f(const numbered& s){
	cout<<s.mysn<<endl;
}
int main(){
	numbered a,b=a,c;
	c=b;
	f(a);
	f(b);
	f(c);
	return 0;
}