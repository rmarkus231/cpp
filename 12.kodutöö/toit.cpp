#include "toit.h"
#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include <sstream>
#include <fstream>

using namespace std;

Toit::Toit(){
	nimi = "empty";
	hind = 0.0;
};

Toit::Toit(string n, float h){
	nimi = n;
	hind = h;
};

void Toit::setNimi(string n){
	nimi = n;
};

void Toit::setHind(float x){
	hind = x;
};

string Toit::getNimi(){
	return nimi;
};

float Toit::getHind(){
	return hind;
};

auto Toit::operator<=>(Toit& t){
	return hind <=> t.hind;
};

KampaaniaToit::KampaaniaToit(){
	setNimi("empty");
	setHind(0.0);
	allahindlus = 0;
};

KampaaniaToit::KampaaniaToit(string n, float h, int a){
	setNimi(n);
	setHind(h);
	allahindlus = a;
};

float KampaaniaToit::getHind(){
	return Toit::getHind() * (allahindlus/100);
};

auto KampaaniaToit::operator<=>(KampaaniaToit& t){
	return getHind() <=> t.getHind();
};

float loe_toidud(string s, vector<unique_ptr<Toit>>* v){
	//ma eeldan, et faili osad on eraldatud komadega
	//nimi,hind
	ifstream file(s);

	string line;
	string val;
	string name;
	float cost;
	float sum{};
	while(getline(file,line)){
		cost = 0.0;
		stringstream ss(line);
		if(getline(ss,val,',')){
			name = val;
		};
		if(getline(ss,val,',')){
			cost = stof(val);
		};
		v->push_back(make_unique<Toit>(name,cost));
		sum += cost;
	};
	return sum;
};
