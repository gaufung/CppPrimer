#ifndef FACT_CHAPTER6
#define FACT_CHAPTER6
int fact(int val){
	if(val==1)return 1;
	else{
		return val*fact(val-1);
	}
}
#endif