#include <random>
#include <iostream>
using namespace std;
unsigned random_gen()
{
    static default_random_engine e;
    static uniform_int_distribution<unsigned> ud;
    return ud(e);
}
int main()
{
	for (int i = 0; i < 10; ++i)
	{
		cout<<random_gen()<<" ";
	}
	
	return 0;
}