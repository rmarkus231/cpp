#include "teler.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

Teler::Teler(){
	hind = 0.0;
	diag = 0;
	mark = "puudu";
}
Teler::Teler(string n, int d, double h){
	hind = h;
	diag = d;
	mark = n;
}
Teler::~Teler(){
	cout << mark << "on destruktoris" << endl;
}
int Teler::getDiag(){return diag;}

Teler* looTeler(string rida){
	string r = rida;
	double h = 0.0;
	int d = 0;
	
	size_t f1 = r.find(',');
	string n = r.substr(0,f1);
	r = r.substr(f1+1,r.size()-f1);

	size_t f2 = r.find(',');
	string diag = r.substr(0,f2);
	r = r.substr(f2+1,r.size()-f2);

	size_t f3 = r.find('\n');
	string hind = r.substr(0,f3);
	try{
		h = stod(hind);
		d = stoi(diag);


	}catch (...){
	}


	Teler *ret = new Teler(n,d,h);
	return ret;
	//return nullptr;
};

vector<Teler*>* loeTelerid(string fail){
	ifstream fin(fail,fstream::in);
	vector<Teler*>* TelPtr = new vector<Teler*>();

	string line;
	
	if(!fin){
		return nullptr;
	}
	
	while(getline(fin,line)){
		TelPtr->push_back(looTeler(line));
	}
	return TelPtr;
}

Teler* suurima_diagonaaliga(vector<Teler*>* telerid){
	Teler* ret = nullptr;
	int comp{0};
	for(size_t i = 0; i < telerid->size();i++){
		if(telerid->at(i)->getDiag() > comp){
			comp = telerid->at(i)->getDiag();
			ret = telerid->at(i);
		}
	}
	return ret;
}

void kustutaTelerid(vector<Teler*>* telerid){
	Teler* temp;
	for(size_t i =0;i < telerid->size();i++){
		temp = telerid->at(i);
		delete temp;
	}
}
