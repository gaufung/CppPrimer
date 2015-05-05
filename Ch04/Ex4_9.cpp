#include <iostream>
using namespace std;
int main(){
	const char *cp="Hello world";
	if (cp&&*cp)
	{
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}