#include "kodu3_fun_dekl.h"
#include <cmath>
#include <string>
using namespace std;

int fun(int num1, int num2){
	return num1+num2;
}

int fun(double num1){
	return round(pow(num1,static_cast<double>(2)));
}

string fun(unsigned int num1, string word){
	string ret{""};
	for(int i = 0; i <= num1; i++){
		ret += word;
	}
	return ret;
}
