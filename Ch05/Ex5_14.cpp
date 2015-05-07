#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<string> v;
	string word;
	while(cin>>word&&word!="quit") {
	    v.push_back(word);
	}
	auto it=v.begin();
	unsigned freqCnt=1,curCnt=1;
	string freqStr,curStr;
	while(it!=(v.end()-1)) {
	    if(*it==*(it+1)){
	    	curCnt++;
	    	curStr=*it;
	    }
	    else{
	    	curCnt=0;
	    }
	    if (curCnt>freqCnt)
	    {
	    	freqCnt=curCnt;
	    	freqStr=curStr;
	    }
	    ++it;
	}
	cout<<"duplicates string is: "<<freqStr<<" and repated"<<freqCnt<<"times";
	return 0;
}
