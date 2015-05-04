#include <iostream>
#include <vector>
using namespace std;
bool Compare(int* arr1,int* arr2,int length){
	int posi=0;
	while(posi<length&&(*(arr1+posi)==*(arr2+posi))) ++posi;
	return posi==length?true:false;	
}
int main(){
	int arr1[4]={1,2,3,5};
	int arr2[4]={1,2,4,5};
	if (sizeof(arr1)/sizeof(arr1[0])==sizeof(arr2)/sizeof(arr2[0]))
	{
		auto res=Compare(arr1,arr2,sizeof(arr1)/sizeof(arr1[0]));
	}
	return 0;
}