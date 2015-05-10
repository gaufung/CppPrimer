#include <vector>
class Example{
public:
	static double rate=6.5;
	static constexpr int vecSize=20;
	static std::vector<double> vec(vecSize);
};
int main(){
	double r=Example::rate;
	auto doubles=Example::vec;
	return 0;
}