#include "arvud.h"
#include <concepts>

using namespace std;

void test1(){
	Algarv a(5);
	cout << a << endl;
	a++;
	cout << a << endl;
}


int main(){
	test1();
	return 0;
}
