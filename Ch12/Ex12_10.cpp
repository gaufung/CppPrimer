#include <memory>
#include <iostream>
using namespace std;
void process(shared_ptr<int> ptr){

}
int main(){
	shared_ptr<int> p(new int(42));
	process(shared_ptr<int>(p));//ok
	process(shared_ptr<int>(p.get()));

	auto np=new int();
	auto sp=make_shared<int>();
	process(sp);//ok
	//process(new int());//error:from 'int*' to 'std::shared_ptr<int>
	//process(np);//error:from 'int*' to 'std::shared_ptr<int>'
	process(shared_ptr<int>(np));//ok

	return 0;
}