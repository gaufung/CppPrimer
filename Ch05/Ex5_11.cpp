#include <iostream>
#include <string>
using namespace std;
int main(){
	string text;
	cin>>text;
	unsigned ffCnt=0,flCnt=0,fiCnt=0;
	for(decltype(text.size()) ind=0;ind<text.size()-1;++ind){
		if (text[ind]=='f')
		{		
			switch(text[ind+1]){
				case 'f':
				ffCnt++;
				break;
				case 'l':
				flCnt++;
				break;
				case 'i':
				fiCnt++;
				break;
				default:
				break;
			}
		}
	}
	cout<<"ff: "<<ffCnt<<endl;
	cout<<"fl: "<<flCnt<<endl;
	cout<<"fi: "<<fiCnt<<endl;
	return 0;
}