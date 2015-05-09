#include <iostream>
#include "EX7_23.h"
using namespace std;
int main(){
	Screen myScreen(5,5,'X');
	myScreen.move(4,0).set('#').display(cout);
	cout<<"\n";
	myScreen.display(cout);
	return 0;
}