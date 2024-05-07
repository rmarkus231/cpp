#include "kodu13.h"
#include <iostream>
#include <map>
#include <sring>

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
			string eof_c = "eof"	
			if(e == eof_c){
				break;
			}else{
				cout << e.msg << endl;
			};
		}catch(exception &err){
			cout << "Vigane sisend stoi" << endl;
		};
	};
	//end of loop
	loeMap(mp);
};

int getInput(){
	int x;
	cin >> x;
	if(cin.fail()){
		throw exc("eof");
	};
	return x;
};

void loeMap(map<int,size_t>){};
