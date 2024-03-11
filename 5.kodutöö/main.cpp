#include "arvutused.h"
#include <iostream>

using namespace std;

void testArvutused(){
	int n1{2};
	int n2{8};
	int n3{5};
	int n4{};
	int n5{};
	int* p1{&n1};
	int* p2{&n2};
	int* p3{&n3};
	int* p4{&n4};

	cout << suurim(p1,p2,p3) << endl;
	cout << suurim(&n1,&n2,&n3) << endl;
	cout << suurim(&n1,p2,p3) << endl;
	suurim(p1,p3,p2,p4);
	cout << *p4 << endl;
	suurim(&n2,&n1,&n3,&n5);
	cout << n5 << endl;
}


int main(){
	testArvutused();
	return 0;
}
