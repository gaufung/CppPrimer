#ifndef EX_17_11
#define EX_17_11
#include <bitset>
#include <iostream>
template<std::size_t N>
class Exam{
public:
	void update(std::size_t po){
		bitExam.set(po,true);
	}
	void clear(std::size_t po){
		bitExam.reset(po);
	}
	bool query(std::size_t po){
		return bitExam.test(po);
	}
	std::ostream& print(std::ostream& os){
		os<<bitExam;
		return os;
	}
private:
	std::bitset<N> bitExam;	
};
#endif