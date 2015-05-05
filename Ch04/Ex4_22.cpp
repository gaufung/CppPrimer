#include <iostream>
#include <string>
using namespace std;
string finalGradeCondition(int grade){
	return grade>90 ? "high pass":
			(grade<60)?"fail":
			(grade<75)?"low pass":"pass";
}
string finalGradeIf(int grade){
	if (grade>90)
	{
		return "high pass";
	}
	else if(grade>=75) return "pass";
	else if(grade>=60) return "low pass";
	else return "fail";
}
int main(){
	int grade=68;
	cout<<finalGradeCondition(grade)<<endl;
	cout<<finalGradeIf(grade)<<endl;
	return 0;
}