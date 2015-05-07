#include <iostream>
#include <string>
using namespace std;
int main(){
	string text;
	cin>>text;
	unsigned int aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0;
	for(auto ch:text){
		switch(tolower(ch)){
			case 'a':
			aCnt++;
			break;
			case 'e':
			eCnt++;
			break;
			case 'i':
			iCnt++;
			break;
			case 'o':
			oCnt++;
			break;
			case 'u':
			uCnt++;
			break;
			default:
			break;
		}
	}
	cout<<"a or A "<<aCnt<<endl;
	cout<<"e or E "<<eCnt<<endl;
	cout<<"i or I "<<iCnt<<endl;
	cout<<"o or O "<<oCnt<<endl;
	cout<<"u or U "<<uCnt<<endl;
	return 0;
}