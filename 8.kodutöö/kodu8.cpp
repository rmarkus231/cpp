#include <iostream>
#include "andmed.h"
using namespace std;

void test1(){
	auto p = tootle_andmeid(loo_andmed_u(15),15);
}

void test2(){
	auto p = tootle_andmeid(loo_andmed_s(30));
}

void test3(){
	auto p = genereeri_arv();
	cout << *p << endl;

	shared_ptr<int> sp = make_shared<int>(13);
	weak_ptr p2 = sp;

	proovi_arvu(p2);
	sp.reset();
	proovi_arvu(p2);
}

#ifndef VPL_TEST
int main(){
	test1();
	test2();
	test3();
	return 0;
}
#endif
