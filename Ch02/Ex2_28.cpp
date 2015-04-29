#include <iostream>
using namespace std;
int main(){
	//int i,*const p;//error:const object must be initialized if not extern
	//int *p1,*const p2;//const object must be initialized if not extern
	//const int ic,&r=ic;//error: const object must be initialized if not extern
	//const int *const p3;//error C2734: 'p3' : const object must be initialized if not extern
	const int *p;//ok，but application cannot work
	return 0;
}