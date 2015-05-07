#include <iostream>
#include <string>
using namespace std;
int main(){
	string text;
	cin>>text;
	int strIndex=0;
	int vowlCnt=0;
	while(text[strIndex]) {
	    if (text[strIndex]=='a')
	    {
	    	++vowlCnt;
	    }
	    if (text[strIndex]=='e')
	    {
	    	++vowlCnt;
	    }
	    if (text[strIndex]=='i')
	    {
	    	++vowlCnt;
	    }
	    if (text[strIndex]=='o')
	    {
	    	++vowlCnt;
	    }
	    if (text[strIndex]=='u')
	    {
	    	++vowlCnt;
	    }
	    strIndex++;
	}
	cout<<vowlCnt<<endl;
	return 0;
}