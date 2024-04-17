#ifndef LUGEMINE_H
#define LUGEMINE_H
#include <set>
#include <string>
#include <iostream>
#include <map>
using namespace std;

class Hoia{
	public:
		Hoia(string);
		~Hoia();
		string& get();
		friend bool operator<(Hoia h1, Hoia h2){
			return h1.get() < h2.get();
		};
	private:
		string val;
};

set<Hoia>& loe_hoia(string,set<Hoia>&);
#endif
