#include "arvud.h"
#include <cmath>

using namespace std;

bool isPrime(int n){
	if (n <= 1){
        	return false;
	;}
	for (int i = 2; i <= n / 2; i++){
		if (n % i == 0){
			return false;
		};
	};
	return true;
};

int nthPrime(int x){
	int c = 0;
	for(int i = 0; i <= x; i++){
		if(isPrime(i)){
			c++;
		};
	};
	return c;
};

MinuTaisarv::MinuTaisarv(){
	val = 0;
};

MinuTaisarv::MinuTaisarv(int x){
	val = x;
};

int MinuTaisarv::getArv(){
	return val;
};

void MinuTaisarv::setArv(int x){
	val = x;
};

int MinuTaisarv::operator[](int i){
	if((log10(val)+1) < i){
		return -1;
	};
	return static_cast<int>((val/pow(10,i)))%10;
};

Algarv::Algarv(int x){
	if(isPrime(x)){
		val = x;
		mitmes = nthPrime(x);
	}else{
		val = -1;
		mitmes = -1;
	}
};

int Algarv::getMitmes(){
	return mitmes;
};

int loeArv(int x){
	int sum = 0;
	int temp2 = 0;
	int i = 0;
	//kuna talle ei meeldi, et ma declare variable temp2 in an if statement sees siis
	if(isPrime(x)){
		Algarv temp = Algarv(x);
		while(true){
			temp2 = temp[i];
				if(temp2 == -1){
				break;
			};
			sum += temp2;
			i++;
		};
	}else{
		MinuTaisarv temp = MinuTaisarv(x);
		while(true){
			temp2 = temp[i];
				if(temp2 == -1){
				break;
			};
			sum += temp2;
			i++;
		};
	}
	return sum;
};
