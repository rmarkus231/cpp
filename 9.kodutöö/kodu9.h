#ifndef KODU9_H
#define KODU9_H
#include <vector>
#include <list>
#include <deque>
#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2, typename T3>
void yhenda(T1& alg1, T2& alg2, T3& tulem){
	for(auto i = alg1.begin(); i != alg1.end(); i++){
		tulem.push_back(*i);
	}
	for(auto i = alg2.begin(); i != alg2.end(); i++){
		tulem.push_back(*i);
	}
}

template <typename T>
ostream& tryki(T& alg, ostream& os){
	for(auto i = alg.begin();i != alg.end(); i++){
		os << *i << " ";
	}
	os << endl;
	return os;
}

template <typename T>
bool operator<(T& x, T& y){
	double sum1 = 0;
	double sum2 = 0;
	for(auto i = x.begin(); i!=x.end(); i++){
		sum1 += *i;
	}
	for(auto i = y.begin(); i!=y.end();i++){
		sum2 += *i;
	}
	if(sum1 < sum2){
		return true;
	}else{
		return false;
	}
}

void lisaJaKustuta(vector<string>&);
#endif
