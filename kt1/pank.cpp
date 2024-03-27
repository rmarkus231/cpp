#include "pank.h"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

Ylekanne::Ylekanne(uint64_t s, uint64_t d, double m){
	src = s;
	dst = d;
	sum = m;
	chk = false;
}

Pank::Pank(string n){
	name = n;
}

Ylekanne* Pank::looYlekanne(uint64_t s,uint64_t d, double m){
	Ylekanne* ret = new Ylekanne(s,d,m);
	log.push_back(ret);
	return ret;
}

void Pank::salvestaLog(Ylekanne* x){
	string str = name;
	str += "_log.txt";
	ofstream out(str,ios_base::app | ios_base::out);
	cout << "salvestamine logisse: " << endl;
	out << *x << endl;
}

void Pank::saabuvYlekanne(Ylekanne* x){
	x-> chk = true;
	salvestaLog(x);
	for(size_t i = 0; i < log.size(); i++){
		if(log[i] == x){
			log[i] = nullptr;
		}
	}
	delete x;
}


void Pank::lopeta(){
	Ylekanne* temp;
	for(size_t i = 0; i < log.size(); i++){
		salvestaLog(log[i]);
		temp = log[i];
		delete temp;
	}
	log.clear();
}

void Pank::kuva(){
	if(log.empty()){
		cout << "Ülekandeid ei ole." << endl;
	}else{
	cout << "Ülekanded: " << endl;
		for(size_t i = 0; i < log.size(); i++){
			cout << *(log[i]) << endl;
		}
	}
}
