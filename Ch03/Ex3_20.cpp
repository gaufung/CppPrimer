#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printSequenceSum(vector<int> v){
	for(decltype(v.size()) index=0;index<v.size()-1;++index)
		cout<<v[index]+v[index+1]<<" "; 
}
void printTwoSum(vector<int> v){
	decltype(v.size()) header=0;
	decltype(v.size()) tailer=v.size()-1;
	while(header<=tailer) {
	    cout<<v[header]+v[tailer]<<" ";
	    header++;
	    tailer--;
	}
}
int main(){
	vector<int> v;
	int val;
	while(cin>>val&& val!=0) {
	    v.push_back(val);
	}
	cout<<"********SequenceSum********"<<endl;
	printSequenceSum(v);
	cout<<endl;
	cout<<"********TwoSum********"<<endl;
	printTwoSum(v);
	cin>>val;
	return 0;
}