#include "andmed.h"
#include <memory>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

int getRand(int x, int y){
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distr(x,y);
	return distr(gen);
}

unique_ptr<int[]> loo_andmed_u(int x){
	if(x < 1){ return nullptr;}
	int* p = new int[x];
	for(int i = 0; i < x; i++){
		p[i] = getRand(0,100);
	}
	return unique_ptr<int[]>(p);
}

unique_ptr<int[]> tootle_andmeid(unique_ptr<int[]> p, int x){
	if(p == nullptr){
		return p;
	}else{
		double sum{};
		double avg{};
		for(int i = 0; i < x; i++){
			sum += static_cast<double>(p[i]);
			p[i] *= -1;
		}
		avg = sum / static_cast<double>(x);
		cout << "summa: " << sum << endl;
		cout << "keskimine: " << avg << endl;
		return p;
	}
}

shared_ptr<vector<int>> loo_andmed_s(int x){
	if(x < 1){ return nullptr;}
	vector<int>* p = new vector<int>;
	for(int i = 0; i < x; i++){
		p->push_back(getRand(30,176));
	}
	return shared_ptr<vector<int>>(p);
}

shared_ptr<vector<int>> tootle_andmeid(shared_ptr<vector<int>> p){
	if(p == nullptr){
		return p;
	}else{
		double sum{};
		double avg{};
		for(size_t i = 0; i < p->size(); i++){
			sum += static_cast<double>(p->at(i));
			p->at(i) *= -1;
		}
		avg = sum / static_cast<double>(p->size());
		cout << "summa: " << sum << endl;
		cout << "keskimine: " << avg << endl;
		return p;
	}
}

unique_ptr<int> genereeri_arv(){
	return make_unique<int>(getRand(0,100));
}

void proovi_arvu(weak_ptr<int> p){
	if(p.expired()){
		cout << "ei eksisteeri" << endl;
	}else{
		shared_ptr<int> sp = p.lock();
		cout << *sp << endl;
	}
}
