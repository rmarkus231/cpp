#include "arvutused.h"
using namespace std;

int suurim(int* a, int* b, int* c){
	if(*a > *b and *a > *c){
		return *a;
	}else if(*b > *a and *b > *c){
		return *b;
	}else{
		return *c;
	}
}
int suurim(int& a, int& b, int& c){
	if(a > b and a > c){
		return a;
	}else if(b > a and b > c){
		return b;
	}else{
		return c;
	}
}
int suurim(int& a, int* b, int* c){
	if(a > *b and a > *c){
		return a;
	}else if(*b > a and *b > *c){
		return *b;
	}else{
		return *c;
	}
}
void suurim(int* a, int* b, int* c, int* d){
	if(*a > *b and *a > *c){
		*d = *a;
	}else if(*b > *a and *b > *c){
		*d = *b;
	}else{
		*d = *c;
	}
}
void suurim(int& a, int& b, int& c, int& d){
	if(a > b and a > c){
		d = a;
	}else if(b > a and b > c){
		d = b;
	}else{
		d = c;
	}
}
