#ifndef EX_16_49
#define EX_16_49
#include <iostream>
using std::cout;
using std::endl;
template<typename T>
void f(T t){
	cout<<"void f(T t) called"<<endl;
}
template<typename T>
void f(const T* t){
	cout<<"void f(const T*) called"<<endl;
}
template<typename T>
void g(T t){
	cout<<"void g(T) called"<<endl;
}
template<typename T>
void g(T *t) {
	cout<<"void g(T *t) called"<<endl;
}
#endif