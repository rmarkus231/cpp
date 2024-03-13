#ifndef ARVUTUSED_H
#define ARVUTUSED_H
#include <concepts>
using namespace std;
template <typename T> requires is_arithmetic_v<T>
T tSuurimP(T* a, T* b, T* c){
	if(*a > *b and *a > *c){
		return *a;
	}else if(*b > *a and *b > *c){
		return *b;
	}else{
		return *c;
	}
}
template <typename T> requires is_arithmetic_v<T>
T tSuurimR(T& a, T& b, T& c){
	if(a > b and a > c){
		return a;
	}else if(b > a and b > c){
		return b;
	}else{
		return c;
	}
}
int suurim(int*,int*,int*);
int suurim(int&, int&, int&);
int suurim(int&, int*, int*);
void suurim(int*, int*, int*, int*);
void suurim(int&, int&, int&, int&);
#endif
