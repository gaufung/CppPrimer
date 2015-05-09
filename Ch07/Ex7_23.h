#ifndef EX7_23
#define EX7_23
#include <string>
#include <iostream>
class Screen{
public:
	typedef std::string::size_type pos;
	Screen()=default;
	Screen(pos h,pos w,char c):height(h),width(w),content(h*w,c){}
	Screen(pos h,pos w):Screen(h,w,' '){}
private:
	pos cursor=0;
	pos height=0,width=0;
	std::string content;
public:
	inline
	Screen &move(pos r,pos c){
		pos row=r*width;
		cursor=row+c;
		return *this;
	}
	char get(pos r,pos c)const;
	Screen& set(const char );
	inline 
	void display(std::ostream& os)const{
		os<<content;
	}
};
char Screen::get(pos r,pos c)const{
	pos row=r*width+c;
	return content[row+c];
}
Screen& Screen::set(const char ch){
	content[cursor]=ch;
	return *this;
}
#endif