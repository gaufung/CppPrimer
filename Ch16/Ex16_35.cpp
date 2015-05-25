template <typename T>
void calc(T t1,int i1){}
template <typename T>
void fcn(T t1,T t2){}
int main(){
	double d;
	float f;
	char c;
	calc(c,'c');//ok
	calc(d,f);//ok
	fcn(c,'c');//ok
	fcn(d,f);//error: parameter 'T' ('double' and 'float')
}