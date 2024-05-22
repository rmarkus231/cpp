#include "kodu13.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void täisarvLoop(){
	map<int,size_t> mp;
	int val{};
	while(true){
		try{
			val = getInput();
			if(mp.find(val) == mp.end()){
				//not in map
				mp[val] = static_cast<size_t>(1);
			}else{
				//in map
				mp[val]++;
			}
		}catch(const exc& e){
			string eof_c = "eof";
			if(e.msg == eof_c){
				break;
			}else{
				cout << e.msg << endl;
			};
		}catch(exception &err){
			//its this because the only thing that can throw an error IS stoi
			//unless you manage to somehow fill the map completely and cause a OOM error
			cout << "Vigane sisend stoi" << endl;
		};
	};
	//end of loop
	cout << "Sisestatud täisarvude sagedused: " << endl;
	loeMap(mp);
};

int getInput(){
	string x;
	cin >> x;
	if(cin.eof()){
		throw exc("eof");
	};
	return stoi(x);
};

void loeMap(map<int,size_t> m){
	for(auto it = m.begin(); it != m.end(); ++it){
		cout << it->first << '\t' << it->second << endl;
	};
};


void determinantTest(){
	double x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;
	vector<double>* v= ruutvõrrand<double>(x,y,z);
	cout<< "lahendid on: " << v->at(0) << " ja " << v->at(1) << endl;
};

void ruutvõrrandFailist(string fname){
	ifstream f(fname);
	string line;
	vector<double> v;
	vector<double>* r;
	while(getline(f,line)){
		v.push_back(stod(line));
	};
	for(size_t i = 0; i < (v.size()/3); i++){
		r = ruutvõrrand<double>(v.at(i),v.at(i+1),v.at(i+2));
		cout<< "lahendid on: " << r->at(0) << " ja " << r->at(1) << endl;
	};
};
