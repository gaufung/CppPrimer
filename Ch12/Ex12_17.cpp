#include <memory>
using namespace std;
int main(){
	int ix=1024,*pi=&ix,*pi2=new int(2048);
	typedef unique_ptr<int> Intp;
	//Intp p0(ix);//error invalid conversion from 'int' to 'std::unique_ptr<int>::pointer {aka int*}'
	//Intp p1(pi);// runtime error
	Intp p2(pi2);
	Intp p3(&ix);//ok
	Intp p4(new int(2048));//ok
	Intp p5(p2.get());

	return 0;
}