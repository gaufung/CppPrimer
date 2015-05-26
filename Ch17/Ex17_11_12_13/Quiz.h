#ifndef QUIZ
#define QUIZ
#include <iostream>
#include <bitset>
#include <utility>
#include <string>
#include <iostream>
//class type: quiz
template<std::size_t N>
class Quiz{
public:
	Quiz()=default;
	Quiz(std::string& s):bitquiz(s){}
	//generate the grade for this quiz
	template<std::size_t M>
	friend std::size_t grade(Quiz<M>&,Quiz<M>&);	
	//void print(std::ostream& );
	template<std::size_t M>
	friend std::ostream& operator<<(std::ostream&,Quiz<M>&);

	//update 
	void update(std::pair<std::size_t,bool>);
private:
	std::bitset<N> bitquiz;	
};
#endif