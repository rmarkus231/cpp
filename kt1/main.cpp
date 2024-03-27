#include "fun1.h"
#include "laulud.h"
#include "pank.h"
#include <string>
#include <iostream>
using namespace std;

void test1(){
	int punktid[]{3,2,3,2};
	string nimed[]{"Post","Dijikstra","Post","Valge"};
	cout << punkte(nimed,punktid,4,"Post") << endl;;
	cout << parim(nimed,punktid,4) << endl;
}

void test2(){
	laulud<6>("laulud.txt","Smilers"); cout << endl;
	laulud<4>("laulud.txt","Laura"); cout << endl;
}

void test3(){
	Pank p1{"pank"};
	Ylekanne* yl1{p1.looYlekanne(11111,22222,11.11)};
	Ylekanne* yl2{p1.looYlekanne(22222,33333,22.22)};
	Ylekanne* yl3{p1.looYlekanne(33333,44444,33.33)};
	p1.saabuvYlekanne(yl2);
	p1.saabuvYlekanne(yl1);
	p1.kuva();
	p1.lopeta();
	p1.kuva();
	yl1 = nullptr;
	yl2 = nullptr;
	yl3 = nullptr;
}

int main(){
	test1();
	test2();
	test3();
	return 0;
}
