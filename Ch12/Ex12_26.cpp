#include <memory>
#include <iostream>
#include <string>
using namespace std;
int main(){
	allocator<string> sa;
	int n{0};
	cin>>n;
	string *const p=sa.allocate(n);
	string s;
	string *q=p;
	while(cin>>s&&q!=p+n) {
	    sa.construct(q++, s);
	}
	while (q != p)
    {
        cout << *--q << " ";
        sa.destroy(q);
    }
    sa.deallocate(p, n);
	return 0;
}