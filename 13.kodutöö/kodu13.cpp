#include "kodu13.h"
#include <iostream>
#include <map>

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
		}catch(exception &err){
			cout << "Vigane sisend stoi" << endl;
		}
	};
};

int getInput(){};

void loeMap(map<int,size_t>){};
