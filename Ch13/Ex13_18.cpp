#include "EX13_18.h"
using std::string;
int Employee::s_id = 0;//初始化值
Employee::Employee(){
	id_=++s_id;
}
Employee::Employee(string & n){
	id_=++s_id;
	name=n;
}
int main(){
	Employee e;
	return 0;
}