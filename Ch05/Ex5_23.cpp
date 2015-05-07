#include <iostream>
#include <stdexcept>
using namespace std;
int main(){
	int firstVal,secVal;
	cout<<"please input two integers:"<<endl;	
	try {
		cin>>firstVal;
		cin>>secVal;
		if (secVal==0)
		{		
			throw runtime_error("the divided value is zero");
		}
		double divide=static_cast<double>(firstVal)/secVal;
		cout<<firstVal<<" dividing "<<secVal<<" equal to "<<divide<<endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}