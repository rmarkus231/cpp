#include "andmed.h"
#include <vector>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>
using namespace std;

int* loo_andmed(int x){
	if(x < 1){
		return nullptr;
	}
	int* array = new int[x];
	int* ptr = array;
	for(int i = 0; i < x; i++){
		*(ptr+i) = rand() % 10;
	}
	return ptr;

};

vector<int>* loe_andmed(string* failinimi){
	vector<int>* vec = new vector<int>{};
	ifstream fin(*failinimi,fstream::in);
	string str = "";
	char ch{};
	
	if(!fin){
		return nullptr;
	}
	while(fin >> noskipws >> ch){
		if(ch == ' ' or ch == '\n'){
			try{
				vec->push_back(stoi(str));
				str = "";
			}catch(...){
				cout << str << " : ";
				cout << "read error." << endl;
			}
		}else{
			str += ch;
		}
	}
	return vec;
};

void tootle_andmeid(int* arr, int n){
	if(arr != nullptr){
		int sum = 0;
		for(int i = 0; i < n; i++){
			sum += *(arr+i);
			*(arr+i) *= -1;
		}
		float avg = static_cast<float>(sum) / static_cast<float>(n);
		cout << sum << endl;
		cout << avg << endl;
	}
};

void tootle_andmeid_vektoris(vector<int>* vec){
	int sum{};
	for(size_t i = 0;i < vec->size();i++){
		sum += vec->at(i);
	}
	float avg = static_cast<float>(sum) / static_cast<float>(vec->size());
	cout << sum << endl;
	cout << avg << endl;
};

void kustuta_andmed(int* arr, vector<int>* vec){
	delete[] arr;
	delete[] vec;
};

Auto::Auto(){
	mark = "undef";
	energiaklass = "undef";
	kütus = 0.0;
};

Auto::Auto(string m, string ek, double f){
	mark = m;
	energiaklass = ek;
	kütus = f;
};

Auto::~Auto(){
	cout << "<" << mark << "> destruktoris" << endl;
};

double Auto::kytusekulu(){
	return kütus;
};

Auto* looAuto(const string rida){
	string r = rida;
	double fl = 0.0;
	
	size_t f1 = r.find(';');
	string m = r.substr(0,f1);
	r = r.substr(f1+1,r.size()-f1);

	size_t f2 = r.find(';');
	string ek = r.substr(0,f2);
	r = r.substr(f2+1,r.size()-f2);

	size_t f3 = r.find('\n');
	string f = r.substr(0,f3);
	try{
		fl = stod(f);

	}catch (...){
	}


	Auto *ret = new Auto(m,ek,fl);
	return ret;
	//return nullptr;
};

vector<Auto*>* loeAutod(const string fail){
	ifstream fin(fail,fstream::in);
	vector<Auto*>* CarPtr = new vector<Auto*>();

	string line;
	
	if(!fin){
		return nullptr;
	}
	
	while(getline(fin,line)){
		CarPtr->push_back(looAuto(line));
	}
	return CarPtr;
};

Auto* vähima_kuluga(vector<Auto*>* autod){
	Auto* ret = nullptr;
	double lowest = 1000000000000.0;
	for(size_t i = 0; i < autod->size();i++){
		if(autod->at(i)->kytusekulu() < lowest){
			lowest = autod->at(i)->kytusekulu();
			ret = autod->at(i);
		}
	}
	return ret;
};

void kustutaAutod(vector<Auto*>* autod){
	Auto* temp;
	for(size_t i = 0; i < autod->size();i++){
		temp = autod->at(i);
		delete temp;
	}
};
