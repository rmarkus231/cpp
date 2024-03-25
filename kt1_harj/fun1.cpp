#include "fun1.h"
#include <string>
#include <cmath>
using namespace std;

string kotte(int x){
	int num = x / 40;
	string ret{};
	if(num == 0){
		return "POLE";
	}else{
		int y = x - num * 40;
		ret += to_string(num);
		ret += " kotti ja ";
		ret += to_string(y);
		ret += " kg";
		return ret;
	}
}

int kartulite_kogus(float x, float y, int k){
	return ceil(x*y*static_cast<float>(k));
}

string arvuta_kottide_kogus(float x, float y, int k){
	return kotte(kartulite_kogus(x,y,k));
}
