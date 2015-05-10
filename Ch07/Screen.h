#ifndef SCREEN
#define SCREEN
#include <iostream>
#include <vector>
#include <string>
class Screen;
class Window_mgr{
public:
	using ScreenIndex=std::vector<Screen>::size_type;
	inline 
	void clear(ScreenIndex ); 
private:
	std::vector<Screen> screens;
};
class Screen{
	friend void Window_mgr::clear(ScreenIndex);
public:
	using pos=std::string::size_type;
public:
	//constructor
	Screen()=default;
	Screen(pos ht,pos wd,char c):
		height(ht),width(wd),contents(ht*width,c){}
public:
	//method
	inline 
	char get() const{
		return contents[cursor];
	}
	inline 
	char get(pos ht,pos wd)const{
		return contents[ht*width+wd];
	}
	inline
	Screen &move(pos r,pos c){
		cursor=r*width+c;
		return *this;
	}
	inline
	Screen &set(pos ht,pos wd,char ch){
		contents[ht*width+wd]=ch;
		return *this;
	}
	inline 
	Screen &set(char ch){
		contents[cursor]=ch;
		return *this;
	}
private:
	pos cursor=0;
	pos height=0;
	pos width=0;
	std::string contents;
};
void Window_mgr::clear(ScreenIndex i){
	Screen& s=screens[i];
	s.contents=" ";
}
#endif