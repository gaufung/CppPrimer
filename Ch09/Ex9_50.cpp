#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	vector<string> v={"1","2","3","5"};
	int sum=0;
	for(auto val:v)
		sum+=stoi(val);
	cout<<to_string(sum)<<endl;
	return 0;
}