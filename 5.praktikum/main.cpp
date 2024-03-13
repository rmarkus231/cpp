#include "prak5.h"
#include <iostream>
using namespace std;

void testLiida(){
	int m[]{0,1,2,3,4,6};
	int r1{}, r2{};
	int *pr1 = &r1;
	cout << liida(m,6) << endl;
	cout << liidaP1(m,6) << endl;
	cout << liidaP2(m,6) << endl;
	cout << *(liida(m,6,pr1)) << endl;
	cout << *(liida(m,6,&r2)) << endl;
}

int main(){
	testLiida();
	return 0;
}
