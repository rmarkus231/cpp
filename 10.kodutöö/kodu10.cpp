#include "lugemine.h"
#include <set>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


void test0(){
	Hoia a("apple");
	Hoia b("banana");
	Hoia c("apple");

	cout << (a<b) << endl;
	cout << (a<c) << endl;
	cout << (b<c) << endl;
}

void test1(){
	set<Hoia> s1;
	s1 = loe_hoia("andmed2.txt",s1);
	for(auto el: s1){
		cout << el.get() << " ";
	}
	cout << endl;
}

void test2(){
	map<string,int> m;
	m = loe_failist("andmed3.txt",m);
	for (const auto& pair : m) {
        	std::cout << pair.first << " : " << pair.second << std::endl;
    	}
}

int main(){
	//test0();
	//test1();
	test2();
	return 0;
}
