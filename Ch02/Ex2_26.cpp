#include <iostream>
using namespace std;
int main(){
	//const int buf;// error :const object must be initialized if not extern
	int cnt=0;
	const int sz=cnt;
	++cnt;
	//++sz;//error: you cannot assign to a variable that is const
	return 0;
}