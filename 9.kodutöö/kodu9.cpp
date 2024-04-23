#include "kodu9.h"
#include <vector>
#include <string>
#include <iostream>
#include <list>
#include <deque>
using namespace std;

void lisaJaKustuta(vector<string> &v){
	vector<string> v2;
	cout << v.size() << endl;
	for(auto i = v.begin(); i!=v.end();i++){
		if(i->find("tt")!=string::npos || i->find("at")!=string::npos){
			//do nothing
		}else if(i->find("aa")!=string::npos || i->find("uu")!=string::npos || i->find("oo")!=string::npos){
			v2.push_back(*i);
			v2.push_back(*i);
		}else{
			//default action
			v2.push_back(*i);
		}
	}
	v = v2;
}

void test1(){
	vector<string> c1{"vector", "deque", "queue"};
	deque<string> c2{"list", "forward_list", "array"};
	list<string> d1;
	yhenda(c1, c2, d1);
	tryki(d1, cout);
}

void test2(){
	list<int> l1{1, 5, 3, 2, 1, 1, 1};
	list<int> l2{3, 5, 3, 9, 9};
	cout << boolalpha << (l1 < l2) << '\n';
	vector<int> v1{10, 11};
	vector<int> v2{3, 5, 3};
	cout << boolalpha << (v1 < v2) << '\n';
}

void test3(){
	vector<string> v{"Juuli", "lõpus", "ilmunud", "loost", "Water", "sai",
               "võrdlemisi", "salaja", "aasta",  "oluliseim", "hitt"};
	for (auto it{v.begin()}, lopp{v.end()}; it != lopp ; it++) {
		cout << *it << " ";
	}
	cout << "\n";
	lisaJaKustuta(v);
	for (auto it{v.begin()}, lopp{v.end()}; it != lopp ; it++) {
		cout << *it << " ";
	}
}

#if !defined(VPL_TEST)
int main(){
	test1();
	test2();
	test3();

	return 0;
}
#endif
