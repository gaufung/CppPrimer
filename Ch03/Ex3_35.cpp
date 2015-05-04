#include <iostream>
#include <iterator>
using namespace std;
int main(){
	int arr[10];
	int* header=begin(arr);
	int* tailer=end(arr);
	while(header!=tailer) {
	    *header=0;
	    header++;
	}
}