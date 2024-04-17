#include "lugemine.h"
#include <set>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

set<Hoia>& loe_hoia(string file, set<Hoia>& s){
//	string *fp = file;
	ifstream fin(file,fstream::in);
	string temp;
	while(getline(fin,temp," ")){
		s.insert(temp);
		temp = "";
	}
	return s;
}

Hoia::Hoia(string s){
	val = s;
}

string& Hoia::get(){
	return val;
}

void test1(){
	set<Hoia> s1;
	s1 = loe_hoia("andmed.txt",s1);
	for(auto el: s1){
		cout << el.get() << " ";
	}
	cout << endl;
}

int main(){
	test1();
	return 0;
}
