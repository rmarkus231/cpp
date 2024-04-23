#ifndef LUGEMINE_H
#pragma GCC diagnostic ignored "-Wconversion"
#define LUGEMINE_H
#include <set>
#include <string>
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <cctype>
using namespace std;

class Hoia{
	public:
		Hoia(string s){
			val = s;
		};
		//~Hoia();
		string& get(){
			return val;
		};
		friend bool operator<(const Hoia& h1, const Hoia& h2){
			return h1.val < h2.val;
		}friend std::ostream& operator<<(std::ostream& os, const Hoia& h) {
		        os << h.val;
		        return os;
    		};
	private:
		string val;
};

template<typename T1, typename T2>
std::map<T1, T2>& loe_failist(std::string failinimi, std::map<T1, T2>& m ){
	ifstream f(failinimi);

	string line;
	string sub;
	string sub2;
	while(getline(f,line)){
		istringstream ss(line);
		while(getline(ss,sub,' ')){
			for(char c :sub){
				if(isalnum(c) || c == ' '){
					sub2+= tolower(static_cast<unsigned char>(c));
				}
			}

			if(m.find(sub2)!=m.end()){
				//isnt in
				m.insert(make_pair(sub2,1));
			}else{
				//is in, incerment counter
				m[sub2] += 1;
			};
			sub.clear();
			sub2.clear();
		}
	}
	return m;
};

set<Hoia>& loe_hoia(string file, set<Hoia>& s){
	ifstream f(file);

	string line;
	string sub;
	while(getline(f,line)){
		istringstream ss(line);
		while(getline(ss,sub,' ')){
			s.insert(sub);
			sub.clear();
		}
	}
	return s;
}
#endif
