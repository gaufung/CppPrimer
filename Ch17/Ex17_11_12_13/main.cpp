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
template<std::size_t N>
void Quiz<N>::update(std::pair<std::size_t,bool> pair){
	 bitquiz.set(pair.first,pair.second);
}
template<std::size_t M>
std::ostream& operator<<(std::ostream& os,Quiz<M>& quiz){
	os<<quiz.bitquiz;
	return os;
}
template<std::size_t M>
std::size_t grade(Quiz<M>& corAns,Quiz<M>& stuAns){
	auto result = stuAns.bitquiz ^ corAns.bitquiz;
    result.flip();
    return result.count();
}
int main(){
	//Ex17_11
	std::string s="1010101";
	Quiz<10> quiz(s);
	std::cout<<quiz<<std::endl;
	//EX17_12
	quiz.update(std::make_pair(1,true));
	std::cout<<quiz<<std::endl;
	//Ex17_13
	std::string answer="10011";
	std::string stu_answer="11001";
	Quiz<5> ans(answer),stu_ans(stu_answer);
	std::cout<<grade(ans,stu_ans);
	return 0;
}