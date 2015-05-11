#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v={1,2,3};
	cout<<v.at(0)<<endl;
	cout<<v[0]<<endl;
	cout<<v.front()<<endl;
	cout<<*v.begin()<<endl;
	vector<int> v1;
	try {
		cout<<v1.at(0)<<endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}